; API

api = 2

core = 7.14

; Stable modules

projects[variable][version] = 1.2
projects[variable][subdir] = contrib
projects[libraries][version] = 2.0-alpha2
projects[libraries][subdir] = contrib
projects[link][version] = 1.0
projects[link][subdir] = contrib
projects[linkit][version] = 2.5
projects[linkit][subdir] = contrib
projects[rules][version] = 2.1
projects[rules][subdir] = contrib
projects[scheduler][version] = 1.0
projects[scheduler][subdir] = contrib
projects[webform][version] = 3.18
projects[webform][subdir] = contrib
projects[workbench][version] = 1.1
projects[workbench][subdir] = contrib
projects[workbench_access][version] = 1.0
projects[workbench_access][subdir] = contrib
projects[workbench_moderation][version] = 1.2
projects[workbench_moderation][subdir] = contrib
projects[workbench_media][version] = 1.0
projects[workbench_media][subdir] = contrib
projects[diff] = 2.0
projects[diff][subdir] = contrib
projects[dynamic_formatters][version] = 2.0-alpha2
projects[dynamic_formatters][subdir] = contrib
projects[strongarm][version] = 2.0-rc1
projects[strongarm][subdir] = contrib
projects[taxonomy_menu_form][version] = 1.1
projects[taxonomy_menu_form][subdir] = contrib
projects[devel][version] = 1.2
projects[devel][subdir] = contrib
projects[coder][version] = 1.0
projects[coder][subdir] = contrib
projects[token][version] = 1.1
projects[token][subdir] = contrib
projects[references][version] = 2.0
projects[references][subdir] = contrib
projects[references_dialog][version] = 1.0-alpha4
projects[references_dialog][subdir] = contrib
projects[selenium][version] = 2.0-beta2
projects[selenium][subdir] = contrib
projects[media_youtube][version] = 1.0-beta3
projects[media_youtube][subdir] = contrib
projects[entityreference][version] = 1.0-rc3
projects[entityreference][subdir] = contrib
projects[views_rss][version] = 2.0-rc3
projects[views_rss][subdir] = contrib
projects[crossclone][version] = 1.0-alpha4
projects[crossclone][subdir] = contrib
projects[panels_ref_formatter][version] = 1.0-alpha5
projects[panels_ref_formatter][subdir] = contrib
projects[ctools][version] = 1.0
projects[ctools][subdir] = contrib
projects[i18n][version] = 1.5
projects[i18n][subdir] = contrib
projects[markdown][version] = 1.0
projects[markdown][subdir] = contrib
projects[codefilter][version] = 1.0
projects[codefilter][subdir] = contrib
projects[pathologic][version] = 2.0-beta3
projects[pathologic][subdir] = contrib
projects[email][version] = 1.0
projects[email][subdir] = contrib
projects[admin_menu][version] = 3.0-rc3
projects[admin_menu][subdir] = contrib
projects[defaultconfig][version] = 1.0-alpha8
projects[defaultconfig][subdir] = contrib
projects[media][version] = 2.0-unstable5
projects[media][subdir] = contrib
projects[simpletest_clone][version] = 1.0-beta3
projects[simpletest_clone][subdir] = contrib
projects[cache_actions][version] = 2.0-alpha5
projects[cache_actions][subdir] = contrib
projects[speedy][version] = 1.0
projects[speedy][subdir] = contrib

; Fetch flag from git to avoid issues with patching.
projects[flag][type] = module
projects[flag][version] = 2.x-dev
projects[flag][download][type] = git
projects[flag][download][tag] = 7.x-2.0-beta6
projects[flag][subdir] = contrib

; Fetch panels from git to avoid issues with patching.
projects[panels][type] = module
projects[panels][version] = 3.2
projects[panels][download][type] = git
projects[panels][download][tag] = 7.x-3.2
projects[panels][subdir] = contrib

; Fetch entity from git to avoid issues with patching.
projects[entity][type] = module
projects[entity][version] = 1.0-rc3
projects[entity][download][type] = git
projects[entity][download][tag] = 7.x-1.0-rc3
projects[entity][subdir] = contrib

; Fetch file_entity from git to avoid issues with patching.
projects[file_entity][type] = module
projects[file_entity][version] = 2.0-unstable5
projects[file_entity][download][type] = git
projects[file_entity][download][tag] = 7.x-2.0-unstable5
projects[file_entity][subdir] = contrib

; Fetch entitycache from git to avoid issues with patching.
projects[entitycache][type] = module
projects[entitycache][version] = 1.1
projects[entitycache][download][type] = git
projects[entitycache][download][tag] = 7.x-1.1
projects[entitycache][subdir] = contrib

; Fetch menu_block from git to avoid issues with patching.
projects[menu_block][type] = module
projects[menu_block][version] = 2.3
projects[menu_block][download][type] = git
projects[menu_block][download][tag] = 7.x-2.3
projects[menu_block][subdir] = contrib

; UUID
projects[uuid][type] = module
projects[uuid][version] = 1.x-dev
projects[uuid][download][type] = git
projects[uuid][download][revision] = 68f7c09
projects[uuid][subdir] = contrib

; DraggableViews, has no stable 7.x release yet.
projects[draggableviews][type] = module
projects[draggableviews][version] = 2.x-dev
projects[draggableviews][download][type] = git
projects[draggableviews][download][revision] = 9677bc18b7255e13c33ac3cca48732b855c6817d
projects[draggableviews][subdir] = contrib

; Use latest features dev, so we can apply patches to resolve compatibility issues.
projects[features][type] = module
projects[features][version] = 2.x-dev
projects[features][download][type] = git
projects[features][download][revision] = a110769
projects[features][subdir] = contrib

; We run with the dev version to get exportability.
projects[wysiwyg][type] = module
projects[wysiwyg][version] = 2.x-dev
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = 60ea63c0b609f89878dfdf87616f3a88268b5217
projects[wysiwyg][subdir] = contrib

; Use the latest version of panelizer to get bug fixes.
projects[panelizer][type] = module
projects[panelizer][version] = 2.x
projects[panelizer][download][type] = git
projects[panelizer][download][revision] = c0f0522
projects[panelizer][subdir] = contrib

; In wait for new release of PE, see http://drupal.org/node/1427180
projects[panels_everywhere][type] = module
projects[panels_everywhere][version] = 1.x-dev
projects[panels_everywhere][download][type] = git
projects[panels_everywhere][download][revision] = 02f883d
projects[panels_everywhere][subdir] = contrib


; We need to patch field_group to avoid exportability issues.
projects[field_group][type] = module
projects[field_group][version] = 1.x-dev
projects[field_group][download][type] = git
projects[field_group][download][revision] = 4aae97e
projects[field_group][subdir] = contrib

; We need the dev version to fix integrity constraint sql issues.
projects[l10n_update][type] = module
projects[l10n_update][version] = 1.x-dev
projects[l10n_update][download][type] = git
projects[l10n_update][download][revision] = 9fb0c2c
projects[l10n_update][subdir] = contrib


; Latest dev contains views integration.
projects[entity_translation][type] = module
projects[entity_translation][version] = 1.x-dev
projects[entity_translation][download][type] = git
projects[entity_translation][download][revision] = d0b14b7
projects[entity_translation][subdir] = contrib

; We need to get views from git in order for drush make to patch it safely.
projects[views][type] = module
projects[views][version] = 3.3
projects[views][download][type] = git
projects[views][download][tag] = 7.x-3.3
projects[views][subdir] = contrib

; We need the latest dev of title to make it functional.
projects[title][type] = module
projects[title][version] = 1.x-dev
projects[title][download][type] = git
projects[title][download][revision] = 37b92b3
projects[title][subdir] = contrib

; Libraries

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz
libraries[ckeditor][destination] = libraries

; Patches

; http://drupal.org/node/624018#comment-4519502
projects[wysiwyg][patch][] = http://drupal.org/files/issues/wysiwyg-entity-exportables-624018-176_1.patch

; http://drupal.org/node/1417434
projects[panels][patch][] = http://drupal.org/files/panels-only-modify-numeric-pids-on-export-1417434-4.patch

; http://drupal.org/node/1314876
projects[file_entity][patch][] = http://drupal.org/files/file-entity-ctools-content-types.patch

; http://drupal.org/node/1553094
projects[file_entity][patch][] = http://drupal.org/files/file_entity-image_file_alt_and_title-1553094-20.patch

; http://drupal.org/node/1329346#comment-5765542
projects[rules][patch][] = http://drupal.org/files/remove-make-file-1329346-10.patch

; http://drupal.org/node/1515156
projects[views][patch][] = http://drupal.org/files/views-1515156-5.patch

; http://drupal.org/node/1537838
projects[features][patch][] = http://drupal.org/files/features_1537838_features_get_components_14.patch

; http://drupal.org/node/1265168#comment-4949686
projects[features][patch][] = http://drupal.org/files/features-1265168-19-roles.patch

; http://drupal.org/node/1559070
projects[entitycache][patch][] = http://drupal.org/files/entitycache-testcase-renaming.patch

; Change term context to the new entity:taxonomy_term in site_template. - http://drupal.org/node/1550294#comment-5935960
projects[panels_everywhere][patch][] = http://drupal.org/files/use-entity-context-1550294-4.patch

; http://drupal.org/node/1050766
projects[menu_block][patch][] = http://drupal.org/files/issues/1050766.fixed-parent-item.patch

; http://drupal.org/node/1484352#comment-5816158
projects[flag][patch][] = http://drupal.org/files/1484352-2-flag_validator_blocks_contextual_filters.patch

; Patch for entity label in entity api.
projects[entity][patch][] = http://drupal.org/files/entity-field-label-handler-1435418-5.patch

; CTools support for entity translation.
projects[entity_translation][patch][] = http://drupal.org/files/translation-access-plugin-1516202-2.patch

; Fix translation form for translators who don't have access to edit it.
projects[entity_translation][patch][] = http://drupal.org/files/dont-prevent-translations-on-update.patch
