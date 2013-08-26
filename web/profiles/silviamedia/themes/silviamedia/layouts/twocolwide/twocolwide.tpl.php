<?php
/**
 * @file
 * This layout is intended to be used inside the page content pane. Thats why
 * there is not wrapper div by default.
 */
?>



<?php if (!empty($content['images'])): ?>
  <div class="images" role="banner">
    <?php print render($content['images']); ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['text'])): ?>
  <div class="text alpha omega <?php print $main_grid_class ?>" role="main">
    <?php print render($content['text']); ?>
  </div>
<?php endif; ?>

<?php if (!empty($content['aside'])): ?>
  <aside class="aside grid-3 omega" role="complementary">
    <?php print render($content['aside']); ?>
  </aside>
<?php endif; ?>

<?php if (!empty($content['more_cases'])): ?>
<div class="more-div-wrapper clearfix">
  <div class="more-cases" role="complementary">
    <?php print render($content['more_cases']); ?>
  </div>
</div>
<?php endif; ?>
