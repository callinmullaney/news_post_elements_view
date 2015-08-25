<?php
/**
 * @file
 * news_elements_view.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function news_elements_view_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_node';
  $context->description = 'Blocks that only appear on the news post node.';
  $context->tag = 'Node Type';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks that only appear on the news post node.');
  t('Node Type');
  $export['news_node'] = $context;

  return $export;
}
