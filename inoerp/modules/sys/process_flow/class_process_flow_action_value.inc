<?php

 class sys_process_flow_action_value extends dbObject {

  public static $table_name = "sys_process_flow_action_value";
  public static $primary_column = "sys_process_flow_action_value_id";
  public static $parent_primary_column = "sys_process_flow_line_id";
  public static $key_column = "line_name";
  public static $module = "sys";
  public $field_a = [
   'sys_process_flow_action_value_id',
   'sys_process_flow_action_id',
   'value',
   'comment',
   'action_user_id',
   'action_duration',
   'created_by',
   'creation_date',
   'last_update_by',
   'last_update_date',
  ];
  public $initial_search = [
   'sys_process_flow_action_id',
  ];
  public $requiredField = [
   'sys_process_flow_action_id',
   'value',
   'action_user_id',
  ];
  public $fields_inHeader_needsToBeInserted_inPOST = [
   "sys_process_flow_header_id"
  ];
  public $pageTitle = " Process Flow Line Value"; //page Title
  public $sys_process_flow_action_value_id;
  public $sys_process_flow_action_id;
  public $value;
  public $comment;
  public $action_user_id;
  public $action_duration;
  public $created_by;
  public $creation_date;
  public $last_update_by;
  public $last_update_date;

 }

//end of path class
?>