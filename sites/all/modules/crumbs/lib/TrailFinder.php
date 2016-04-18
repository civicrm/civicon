<?php


class crumbs_TrailFinder {

  /**
   * @var crumbs_ParentFinder
   */
  protected $parentFinder;

  /**
   * @var crumbs_Router;
   */
  protected $router;

  /**
   * @param crumbs_ParentFinder $parent_finder
   * @param crumbs_Router $router
   */
  function __construct($parent_finder, $router) {
    $this->parentFinder = $parent_finder;
    $this->router = $router;
  }

  /**
   * @param string $path
   * @return array
   */
  function getForPath($path) {
    return $this->buildTrail($path);
  }

  /**
   * Build the raw trail.
   *
   * @param string $path
   * @return array
   */
  function buildTrail($path) {
    $path = $this->router->getNormalPath($path);
    $trail_reverse = array();
    $front_normal_path = $this->router->getFrontNormalPath();
    while (strlen($path) && $path !== '<front>' && $path !== $front_normal_path) {
      if (isset($trail_reverse[$path])) {
        // We found a loop! To prevent infinite recursion, we
        // remove the loopy paths from the trail and finish directly with <front>.
        while (isset($trail_reverse[$path])) {
          array_pop($trail_reverse);
        }
        break;
      }
      /** @var array|null $item */
      $item = $this->router->getRouterItem($path);
      // If this menu item is a default local task and links to its parent,
      // skip it and start the search from the parent instead.
      if ($item && ($item['type'] & MENU_LINKS_TO_PARENT)) {
        $path = $item['tab_parent_href'];
        $item = $this->router->getRouterItem($item['tab_parent_href']);
      }

      // For a path to be included in the trail, it must resolve to a valid
      // router item, and the access check must pass.
      if ($item && $item['access']) {
        $trail_reverse[$path] = $item;
      }
      $parent_path = $this->parentFinder->getParentPath($path, $item);
      if ($parent_path === $path) {
        // This is again a loop, but with just one step.
        // Not as evil as the other kind of loop.
        break;
      }
      $path = $parent_path;
    }
    unset($trail_reverse['<front>']);

    // Only prepend a frontpage item, if the configured frontpage is valid.
    $front_menu_item = $this->router->getRouterItem($front_normal_path);
    if (isset($front_menu_item)) {
      $front_menu_item['href'] = '<front>';
      $trail_reverse[$front_normal_path] = $front_menu_item;
    }
    else {
      $message_raw = 'Your current setting for !site_frontpage seems to be invalid.';
      $message_replacements = array(
        '!site_frontpage' => '<em>' . l(t('Default front page'), 'admin/config/system/site-information') . '</em>',
      );
      watchdog('crumbs', $message_raw, $message_replacements);
      if (user_access('administer site configuration')) {
        drupal_set_message(t($message_raw, $message_replacements), 'warning');
      }
    }

    return array_reverse($trail_reverse);
  }

}
