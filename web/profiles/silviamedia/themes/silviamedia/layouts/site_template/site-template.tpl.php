<?php
/**
 * @file
 * This layout is intended to be used inside the page content pane. Thats why
 * there is not wrapper div by default.
 */
?>

<div id="page">
  <header class="header" role="banner">
     <?php if (!empty($content['navigation'])): ?>
        <div class="container-12 clearfix navigation">
          <div class="grid-12 clearfix">
            <?php print render($content['navigation']); ?>
          </div>
        </div>
     <?php endif; ?>
     <?php if (!empty($content['branding'])): ?>
        <div class="container-12 clearfix branding">
          <div class="grid-branding clearfix">
            <?php print render($content['branding']); ?>
          </div>
        </div>
     <?php endif;?>
  </header>

 <div class="main" role="main">
  <?php if (!empty($content['content'])): ?>
      <div class="container-12 main-inner clearfix">
        <div class="container-inner clearfix">
          <div class="grid-12 clearfix">
            <?php print render($content['content']); ?>
          </div>
          <span id="border-left"></span><span id="border-right"></span>
        </div>
      </div>
  <?php endif; ?>

  <?php if (!empty($content['content_footer'])): ?>
      <footer class="content-footer clearfix" role="content_footer">
        <div class="content-footer-wrapper clearfix">
          <div class="container-12 clearfix content_footer">
            <div class="grid-12 clearfix content_footer-inner">
              <?php print render($content['content_footer']); ?>
            </div>
          </div>
        </div>
      </footer>
    <?php endif; ?>
  </div>
</div>

  <?php if (!empty($content['closure'])): ?>
    <footer class="closure clearfix" role="contentinfo">
      <div class="footer-wrapper clearfix">
        <div class="container-12 clearfix footer">
          <div class="grid-12 clearfix footer-inner">
            <?php print render($content['closure']); ?>
          </div>
        </div>
      </div>
    </footer>
  <?php endif; ?>