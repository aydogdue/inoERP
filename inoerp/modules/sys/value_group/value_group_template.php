<div id="form_all"><span class="heading">Value Group Header </span>
 <form action=""  method="post" id="sys_value_group_header"  name="sys_value_group_header">
  <div id ="form_header">
   <div id="tabsHeader">
    <ul class="tabMain">
     <li><a href="#tabsHeader-1">Basic Info</a></li>
     <li><a href="#tabsHeader-2">Validation</a></li>
     <li><a href="#tabsHeader-3">Attachments</a></li>
     <li><a href="#tabsHeader-4">Notes</a></li>
    </ul>
    <div class="tabContainer">
     <div id="tabsHeader-1" class="tabContent">
      <div class="large_shadow_box"> 
       <ul class="column header_field">
        <li><label><img src="<?php echo HOME_URL; ?>themes/images/serach.png" class="sys_value_group_header_id select_popup clickable">
          Value Group Id</label><?php echo form::number_field_drs('sys_value_group_header_id'); ?>
         <a name="show" href="form.php?class_name=sys_value_group_header&<?php echo "mode=$mode"; ?>" class="show document_id sys_value_group_header_id"><img src="<?php echo HOME_URL; ?>themes/images/refresh.png"/></a> 
        </li>
        <li><label>Value Group(1)</label><?php echo form::text_field_dm('value_group'); ?></li>
        <li><label>Access Level*</label><?php echo form::select_field_from_array('access_level', sys_value_group_header::$access_level_array, $$class->access_level, 'access_level', $readonly); ?>        </li>
        <li><label>Description</label><?php echo form::text_field_dm('description'); ?></li>
        <li><label>Module*</label><?php echo $f->select_field_from_object('module_code', option_header::modules(), 'option_line_code', 'option_line_value', $$class->module_code, 'module_code', '', 1) ?>        </li>
        <li><label>Assignment</label><?php echo form::select_field_from_object('option_assignments', option_header::option_assignments(), 'option_line_code', 'option_line_value', $$class->option_assignments, 'option_assignments', $readonly); ?>        </li>
        <li><label>Status</label><?php echo form::status_field_d('status'); ?></li>
        <li><label>Revision</label><?php form::revision_enabled_field_d('rev_enabled'); ?></li>
        <li><label>Revision No</label><?php form::text_field_ds('rev_number'); ?></li>
       </ul>
      </div>
     </div>
     <div id="tabsHeader-2" class="tabContent">
      <div> 
       <ul class="column header_field">
        <li><label>Validation Type</label><?php echo form::select_field_from_object('validation_type', sys_value_group_header::validation_types(), 'option_line_code', 'option_line_value', $$class->validation_type, '', $readonly, 'validation_type', ''); ?></li>
        <li><label>Field Type</label><?php echo form::select_field_from_object('field_type', content_type::content_field_type(), 'option_line_code', 'option_line_value', $$class->field_type, '', $readonly, 'field_type', ''); ?></li>
        <li><label>Min Size</label><?php echo form::number_field_d('min_size'); ?></li>
        <li><label>Max Size</label><?php echo form::number_field_d('max_size'); ?></li>
        <li><label>Fixed Size</label><?php echo form::number_field_d('fixed_size'); ?></li>
        <li><label>Min Value</label><?php echo form::number_field_d('min_value'); ?></li>
        <li><label>Max Value </label><?php echo form::number_field_d('max_value'); ?></li>
        <li><label>Number Only</label><?php form::checkBox_field_d('number_only_cb'); ?></li>
        <li><label>Uppercase Only</label><?php form::checkBox_field_d('uppercase_only_cb'); ?></li>
       </ul>
      </div>
     </div>
     <div id="tabsHeader-3" class="tabContent">
      <div> <?php echo ino_attachement($file) ?> </div>
     </div>
     <div id="tabsHeader-4" class="tabContent">
      <div> 
       <div id="comments">
        <div id="comment_list">
         <?php echo!(empty($comments)) ? $comments : ""; ?>
        </div>
        <div id ="display_comment_form">
         <?php
         $reference_table = 'sys_value_group_header';
         $reference_id = $$class->sys_value_group_header_id;
         ?>
        </div>
        <div id="new_comment">
        </div>
       </div>
      </div>
     </div>
    </div>
   </div>
  </div>
 </form>
 <div id ="form_line" class="form_line"><span class="heading">Value Group Lines </span>
  <div id="tabsLine">
   <ul class="tabMain">
    <li><a href="#tabsLine-1">values</a></li>
    <li><a href="#tabsLine-2">Parent Relationship </a></li>
    <li><a href="#tabsLine-3">Finance </a></li>
    <li><a href="#tabsLine-4">Item </a></li>
   </ul>
   <div class="tabContainer"> 
    <form action=""  method="post" id="sys_value_group_line_line"  name="sys_value_group_line_line">
     <div id="tabsLine-1" class="tabContent">
      <table class="form_table">
       <thead> 
        <tr>
         <th>Action</th>
         <th>Line Id</th>
         <th>Code</th>
         <th>Value</th>
         <th>Description</th>
         <th>Status</th>
         <th>Start Date</th>
         <th>End Date</th>
        </tr>
       </thead>
       <tbody class="form_data_line_tbody sys_value_group_line_values" >
        <?php
//               echo $re_page;
        $count = 0;
        foreach ($sys_value_group_line_object as $sys_value_group_line) {
         ?>         
         <tr class="sys_value_group_line<?php echo $count ?>">
          <td>    
           <ul class="inline_action">
            <li class="add_row_img"><img  src="<?php echo HOME_URL; ?>themes/images/add.png"  alt="add new line" /></li>
            <li class="remove_row_img"><img src="<?php echo HOME_URL; ?>themes/images/remove.png" alt="remove this line" /> </li>
            <li><input type="checkbox" name="line_id_cb" value="<?php echo htmlentities($sys_value_group_line->sys_value_group_line_id); ?>"></li>           
            <li><?php echo form::hidden_field('sys_value_group_header_id', $$class->sys_value_group_header_id); ?></li>
           </ul>
          </td>
          <td><?php form::number_field_wid2sr('sys_value_group_line_id'); ?></td>
          <td><?php form::text_field_wid2sm('code') ?></td>
          <td><?php form::text_field_wid2('code_value') ?></td>
          <td><?php form::text_field_wid2('description') ?></td>
          <td><?php echo form::status_field_d2('status'); ?></td>
          <td><?php echo form::date_field('effective_start_date', $$class_second->effective_start_date, '10', '', '', ''); ?></td>
          <td><?php echo form::date_field('effective_end_date', $$class_second->effective_end_date, '10', '', '', ''); ?></td>
         </tr>
         <?php
         $count = $count + 1;
        }
        ?>
       </tbody>
      </table>
     </div>
     <div id="tabsLine-2" class="tabContent">
      <table class="form_table">
       <thead> 
        <tr>
         <th>Is Parent</th>
         <th>Parent Name</th>
        </tr>
       </thead>
       <tbody class="form_data_line_tbody sys_value_group_line_values" >
        <?php
        $count = 0;
        foreach ($sys_value_group_line_object as $sys_value_group_line) {
         ?>         
         <tr class="sys_value_group_line<?php echo $count ?>">
          <td><?php echo form::checkBox_field_d2('parent_cb'); ?></td>
          <td><?php
           $obj = new sys_value_group_line();
           echo form::select_field_from_object('parent_line_id', $obj->findBy_parentId($$class->sys_value_group_header_id), 'code', 'code_value', $$class_second->parent_line_id, '', $readonly);
           ?></td>
         </tr>
         <?php
         $count = $count + 1;
        }
        ?>
       </tbody>
      </table>
     </div>
     <div id="tabsLine-3" class="tabContent">
      <table class="form_table">
       <thead> 
        <tr>
         <th>Account Qualifier</th>
         <th>Allow Budgeting</th>
         <th>Allow Posting</th>
        </tr>
       </thead>
       <tbody class="form_data_line_tbody sys_value_group_line_values" >
        <?php
        $count = 0;
        foreach ($sys_value_group_line_object as $sys_value_group_line) {
         ?>         
         <tr class="sys_value_group_line<?php echo $count ?>">
          <td><?php echo form::select_field_from_object('account_qualifier', coa::coa_account_types(), 'option_line_code', 'option_line_value', $$class_second->account_qualifier, 'account_qualifier', $readonly); ?></td>
          <td><?php echo form::checkBox_field_d2('allow_budgeting_cb'); ?></td>
          <td><?php echo form::checkBox_field_d2('allow_posting_cb'); ?></td>
         </tr>
         <?php
         $count = $count + 1;
        }
        ?>
       </tbody>
      </table>
     </div>
     <div id="tabsLine-4" class="tabContent">

     </div>
    </form>
   </div>

  </div>
 </div> 
</div>

<div id="pagination" style="clear: both;">
 <?php echo $pagination->show_pagination(); ?>
</div>

<div id="js_data">
 <ul id="js_saving_data">
  <li class="headerClassName" data-headerClassName="sys_value_group_header" ></li>
  <li class="lineClassName" data-lineClassName="sys_value_group_line" ></li>
  <li class="savingOnlyHeader" data-savingOnlyHeader="false" ></li>
  <li class="primary_column_id" data-primary_column_id="sys_value_group_header_id" ></li>
  <li class="form_header_id" data-form_header_id="sys_value_group_header" ></li>
  <li class="line_key_field" data-line_key_field="code" ></li>
  <li class="single_line" data-single_line="false" ></li>
  <li class="form_line_id" data-form_line_id="sys_value_group_line" ></li>
 </ul>
 <ul id="js_contextMenu_data">
  <li class="docHedaderId" data-docHedaderId="sys_value_group_header_id" ></li>
  <li class="docLineId" data-docLineId="sys_value_group_line_id" ></li>
  <li class="btn1DivId" data-btn1DivId="sys_value_group_header" ></li>
  <li class="btn2DivId" data-btn2DivId="form_line" ></li>
  <li class="trClass" data-docHedaderId="sys_value_group_line" ></li>
  <li class="tbodyClass" data-tbodyClass="form_data_line_tbody" ></li>
  <li class="noOfTabbs" data-noOfTabbs="4" ></li>
 </ul>
</div>