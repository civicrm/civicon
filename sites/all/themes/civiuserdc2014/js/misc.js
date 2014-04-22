var start = function($) {
  $("h1, h2, h3, h4, h5, h6").each( function() {
    $(this).html($(this).html().replace('CiviCRM', '<span class="big-civi"><span class="blue">Civi</span>CRM</span>'));
  });
  $('.blockimg').each( function() {
    $(this).prependTo($(this).parents(".block>.block-inner"));
  });
}

jQuery(document).ready(start);
