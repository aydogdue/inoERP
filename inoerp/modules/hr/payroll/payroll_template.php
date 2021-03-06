<div id="form_all">
 <form action=""  method="post" id="hr_payroll"  name="hr_payroll"><span class="heading">Payroll </span>
  <div id ="form_header">
   <div id="tabsHeader">
    <ul class="tabMain">
     <li><a href="#tabsHeader-1">Basic Info</a></li>
     <li><a href="#tabsHeader-2">Action</a></li>
    </ul>
    <div class="tabContainer">
     <div id="tabsHeader-1" class="tabContent">
      <div class="large_shadow_box"> 
       <ul class="column header_field">
        <li>
         <label><img src="<?php echo HOME_URL; ?>themes/images/serach.png" class="hr_payroll_id select_popup clickable">
          Payroll Id</label><?php echo form::number_field_drs('hr_payroll_id'); ?>
         <a name="show" href="form.php?class_name=hr_payroll&<?php echo "mode=$mode"; ?>" class="show document_id hr_payroll_id"><img src="<?php echo HOME_URL; ?>themes/images/refresh.png"/></a> 
        </li>
        <li><label>Payroll</label><?php echo $f->text_field_dm('payroll'); ?> </li>
        <li><label>Period Type</label><?php echo $f->select_field_from_object('period_type', option_header::period_types(), 'option_line_code', 'option_line_value', $$class->period_type, 'period_type', '', 1, $readonly); ?></li>
        <li><label>Payment Method</label><?php echo $f->select_field_from_object('payment_method_id', hr_payroll_payment_method::find_all(), 'hr_payroll_payment_method_id', 'payment_method', $$class->payment_method_id, 'payment_method_id', '', 1, $readonly); ?></li>
        <li><label>Start Date</label><?php echo $f->date_fieldAnyDay_m('start_date', $$class->start_date, ''); ?></li>
        <li><label>End Date</label><?php echo $f->date_fieldAnyDay_m('end_date', $$class->end_date, ''); ?></li>
        <li><label>Description</label><?php echo $f->text_field_dl('description'); ?></li>
       </ul>
      </div>
     </div>
     <div id="tabsHeader-2" class="tabContent">
      <div> 
       <ul class="column four_column">
        <li><a href="<?php HOME_URL ?>program.php?class_name=hr_payroll_schedule&program_name=prg_generate_payroll_schedule&hr_payroll_id=<?php echo $$class->hr_payroll_id ?>" class="button">Generate Schedule</a></li>
        <li><a href="<?php HOME_URL ?>program.php?class_name=hr_payroll_schedule&program_name=prg_process_payroll&hr_payroll_id=<?php echo $$class->hr_payroll_id ?>" class="button">Process Payroll</a></li>
       </ul>
      </div>
     </div>
    </div>
   </div>
  </div>
 </form>
 <div id ="form_line" class="form_line"><span class="heading">Line Details </span>
  <div id="tabsLine">
   <ul class="tabMain">
    <li><a href="#tabsLine-1">Schedules</a></li>
   </ul>
   <div class="tabContainer"> 
    <form action=""  method="post" id="hr_payroll_schedule_line"  name="hr_payroll_schedule_line">
     <div id="tabsLine-1" class="tabContent">
      <table class="form_table">
       <thead> 
        <tr>
         <th>Action</th>
         <th>Line Id</th>
         <th>Scheduled Date</th>
         <th>Start Date</th>
         <th>End Date</th>
         <th>Status</th>
         <th>Period Name</th>
         <th>Description</th>
        </tr>
       </thead>
       <tbody class="form_data_line_tbody hr_payroll_schedule_values" >
        <?php
        $count = 0;
        $hr_payroll_schedule_object_ai = new ArrayIterator($hr_payroll_schedule_object);
        $hr_payroll_schedule_object_ai->seek($position);
        while ($hr_payroll_schedule_object_ai->valid()) {
         $hr_payroll_schedule = $hr_payroll_schedule_object_ai->current();
         ?>
         <tr class="hr_payroll_schedule<?php echo $count ?>">
          <td>    
           <ul class="inline_action">
            <li class="add_row_img"><img  src="<?php echo HOME_URL; ?>themes/images/add.png"  alt="add new line" /></li>
            <li class="remove_row_img"><img src="<?php echo HOME_URL; ?>themes/images/remove.png" alt="remove this line" /> </li>
            <li><input type="checkbox" name="line_id_cb" value="<?php echo htmlentities($hr_payroll_schedule->hr_payroll_schedule_id); ?>"></li>           
            <li><?php echo form::hidden_field('hr_payroll_id', $$class->hr_payroll_id); ?></li>
           </ul>
          </td>
          <td><?php $f->text_field_d2sr('hr_payroll_schedule_id'); ?></td>
          <td><?php echo $f->date_fieldAnyDay('scheduled_date', $$class_second->scheduled_date); ?></td>
          <td><?php echo $f->date_fieldAnyDay('start_date', $$class_second->start_date); ?></td>
          <td><?php echo $f->date_fieldAnyDay('end_date', $$class_second->end_date); ?></td>
          <td><?php echo $$class_second->status; ?></td>
          <td><?php form::text_field_wid2('period_name'); ?></td>
          <td><?php form::text_field_wid2l('description'); ?></td>
         </tr>
         <?php
         $count = $count + 1;
         $hr_payroll_schedule_object_ai->next();
         if ($hr_payroll_schedule_object_ai->key() == $position + $per_page) {
          break;
         }
        }
        ?>
       </tbody>
      </table>
     </div>
    </form>
   </div>

  </div>
 </div> 
 <div id="pagination" style="clear: both;">
  <?php echo $pagination->show_pagination(); ?>
 </div>
</div>

<div id="js_data">
 <ul id="js_saving_data">
  <li class="headerClassName" data-headerClassName="hr_payroll" ></li>
  <li class="lineClassName" data-lineClassName="hr_payroll_schedule" ></li>
  <li class="savingOnlyHeader" data-savingOnlyHeader="false" ></li>
  <li class="primary_column_id" data-primary_column_id="hr_payroll_id" ></li>
  <li class="form_header_id" data-form_header_id="hr_payroll" ></li>
  <li class="line_key_field" data-line_key_field="hr_payroll_id" ></li>
  <li class="single_line" data-single_line="true" ></li>
  <li class="form_line_id" data-form_line_id="hr_payroll_schedule" ></li>
 </ul>
 <ul id="js_contextMenu_data">
  <li class="docHedaderId" data-docHedaderId="hr_payroll_id" ></li>
  <li class="docLineId" data-docLineId="hr_payroll_schedule_id" ></li>
  <li class="btn1DivId" data-btn1DivId="hr_payroll" ></li>
  <li class="btn2DivId" data-btn2DivId="form_line" ></li>  
  <li class="trClass" data-docHedaderId="hr_payroll_schedule" ></li>
  <li class="tbodyClass" data-tbodyClass="form_data_line_tbody" ></li>
  <li class="noOfTabbs" data-noOfTabbs="1" ></li>
 </ul>
</div>