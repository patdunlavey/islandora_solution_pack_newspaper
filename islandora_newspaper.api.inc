<?php

/**
 * @file
 * API documentation.
 */

/**
 * Permit other modules to modify the issues list prior to being returned from
 * islandora_newspaper_get_issues. This is primarily intended to be able
 * to change sorting so that "prev" and "next" links make sense.
 *
 * @param array &$issues
 *   The list of issues about to be returned. Each one is an associative array
 *   with the following indexes:
 *     'pid' string
 *     'label' string
 *     'sequence' string
 *     'issued' dateTime object
 * @param \AbstractFedoraObject $newspaper
 *   The newspaper object whose issues are being fetched.
 */
function hook_islandora_newspaper_get_issues_alter(&$issues, $newspaper) {

  // Sort by date issued.
  function cmp($a, $b) {
    if($a['issued'] == $b['issued']) {
      return 0;
    }
    return $a < $b ? 1 : -1;
  };
  usort($issues, 'cmp');
}