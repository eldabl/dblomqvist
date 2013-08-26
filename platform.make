$Id$

; API

api = 2

; Core

core = 7.x


; Drupal project.
projects[drupal] = 7.12

; This is the dev version, so we point to the dev version of NodeStream.
projects[nodestream][type] = profile
projects[nodestream][download][type] = git
projects[nodestream][download][url] = http://git.drupal.org/project/nodestream
projects[nodestream][download][branch] = 7.x-2.x

; You can add as many other profiles as you want, and develop them
; within the same platform by just adding them to this make file in the same
; manner as above.