(function ($) {

/**
 * Provide the summary information for the Browscap Block (Is Mobile) settings
 * vertical tab.
 */
Drupal.behaviors.BrowscapBlockSettingsSummary = {
  attach: function (context) {

    $('fieldset#edit-browscap-block', context).drupalSetSummary(function (context) {
      var vals = [];
      $('input[type="radio"]:checked', context).each(function () {
        vals.push($.trim($(this).next('label').text()));
      });
      if (!vals.length) {
        vals.push(Drupal.t('Not restricted'));
      }
      return vals.join(', ');
    });

  }
};

})(jQuery);
