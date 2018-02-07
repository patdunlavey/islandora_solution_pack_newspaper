<?php

/**
 * @file
 * API documentation.
 */

/**
 * Permit newspaper issue sort order to be modified.
 *
 * @param string $order_by
 *   The sparql variable to be sorted by.
 *   Available variables are:
 *     ?sequence -- sort by sequence number, ascending
 *     ?issued -- sort by date issued, ascending
 *     ?label -- sort by issue title, ascending
 *   (Note: to change to descending sort, use e.g. `DESC(?issued)`)
 *
 * @param AbstractFedoraObject $newspaper
 *   The newspaper object for which issue sort is being modified.
 */
function hook_newspaper_issue_sort_alter(&$order_by, $newspaper) {
  // Sequence number, the default sort, is based upon the order in
  // which the newspapers were ingested, not their dateIssued. In this
  // example, we change to sort by dateIssued and issue title. If two
  // issues have the same dateIssued, then within that date they will sort
  // alphabetically by title.
  $order_by = '?issued ?label';
}