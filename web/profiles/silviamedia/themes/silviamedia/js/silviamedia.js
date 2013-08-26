(function ($) {

  // add chosen select style to all selectboxes on the site
  Drupal.behaviors.silviaMedia = {
      attach: function (context, settings) {

        var compressor = window.innerWidth > 560 ? 0.9 : 0.8;
          $("#primary-links").fitText(compressor);
          $(".view-case .views-row .case-inner .views-field-title").fitText((0.7), { minFontSize: '10px', maxFontSize: '40px' });
          $(".view-silvia-taxonomy-terms .views-row .case-inner .views-field-title").fitText((0.7), { minFontSize: '10px', maxFontSize: '40px' });
          $(".view-staff .views-row .case-inner .views-field-title .name").fitText(0.7, { minFontSize: '12px', maxFontSize: '40px' });
          $(".view-staff .views-row .case-inner .views-field-title .about, .view-staff .views-row .case-inner .views-field-title .email, .view-staff .views-row .case-inner .views-field-title .phone").fitText(2, { minFontSize: '8px', maxFontSize: '12px' });
          $(".pane-page-content h1").fitText(0.8, { minFontSize: '30px', maxFontSize: '90px' });
          $(".node-type-case .pane-page-content h1, .node-type-case .pane-page-content h2").fitText(0.8, { minFontSize: '40px', maxFontSize: '90px' });
          $(".pane-page-content h2").fitText(0.5, { minFontSize: '20px', maxFontSize: '40px' });
          $(".pane-page-content div.pane-blog-view-blogg-frontpage h2.views-field-title a, .pane-page-content div.pane-blog-view-blogg-page h2.views-field-title a").fitText(0.5, { minFontSize: '35px', maxFontSize: '70px'});

    }
  }

})(jQuery);