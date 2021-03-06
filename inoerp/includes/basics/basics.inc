<?php

require_once (dirname(__FILE__) . '/../../define_const.inc');
defined('DS') ? null : define('DS', DIRECTORY_SEPARATOR);

/* ---------------------Dont Update anything Below-------------------------------------- */
//Basic Paths 
defined('INC_PATH') ? null : define('INC_PATH', HOME_DIR . DS . 'includes');
defined('INO_DATE_FORMAT') ? null : define('INO_DATE_FORMAT', 'Y-m-d');
defined('INO_DATE_TIME_FORMAT') ? null : define('INO_DATE_TIME_FORMAT', 'Y-m-d H:i:s');
defined('INC_BASICS') ? null : define('INC_BASICS', INC_PATH . DS . 'basics');
defined('INC_CLASS') ? null : define('INC_CLASS', INC_PATH . DS . 'general_class');
defined('INC_FUNCTION') ? null : define('INC_FUNCTION', INC_PATH . DS . 'functions');
defined('INC_MODULE') ? null : define('INC_MODULE', HOME_DIR . DS . 'modules');
defined('INC_EXTENSIONS') ? null : define('INC_EXTENSIONS', HOME_DIR . DS . 'extensions');
defined('INC_TPARTY') ? null : define('INC_TPARTY', HOME_DIR . DS . 'tparty');
defined('INC_USER') ? null : define('INC_USER', HOME_DIR . DS . 'extensions' . DS . 'user');
defined('INC_PATHS') ? null : define('INC_PATHS', HOME_DIR . DS . 'extensions' . DS . 'path');
defined('INC_SYSTEMS') ? null : define('INC_SYSTEMS', HOME_DIR . DS . 'modules' . DS . 'system');
defined('INC_SYS') ? null : define('INC_SYS', HOME_DIR . DS . 'modules' . DS . 'sys');
defined('INC_ORGS') ? null : define('INC_ORGS', HOME_DIR . DS . 'modules' . DS . 'org');
defined('INC_GL') ? null : define('INC_GL', HOME_DIR . DS . 'modules' . DS . 'gl');
defined('INC_INV') ? null : define('INC_INV', HOME_DIR . DS . 'modules' . DS . 'inv');
defined('INC_AP') ? null : define('INC_AP', HOME_DIR . DS . 'modules' . DS . 'ap');
defined('INC_AR') ? null : define('INC_AR', HOME_DIR . DS . 'modules' . DS . 'ar');
defined('INC_PO') ? null : define('INC_PO', HOME_DIR . DS . 'modules' . DS . 'po');
defined('INC_BOM') ? null : define('INC_BOM', HOME_DIR . DS . 'modules' . DS . 'bom');

//load core objects
require_once(INC_BASICS . DS . "dbsettings.inc");
defined('DB_SERVER') ? null : define("DB_SERVER", "");
defined('DB_USER') ? null : define("DB_USER", "");
defined('DB_PASS') ? null : define("DB_PASS", "");
defined('DB_NAME') ? null : define("DB_NAME", "");

require_once(INC_FUNCTION . DS . "functions.inc");
require_once(INC_CLASS . DS . "class.session.inc");
require_once(INC_CLASS . DS . "class.dbc.inc");
require_once(INC_CLASS . DS . "class.dbObject.inc");
require_once(INC_EXTENSIONS . DS . "site_info" . DS . "class_site_info.inc");
require_once(INC_CLASS . DS . "class.form.inc");
require_once(INC_CLASS . DS . "class_inoform.inc");
require_once(INC_PATHS . DS . "class.path.inc");
require_once(INC_CLASS . DS . "class.pagination.inc");
require_once(INC_CLASS . DS . "class.search.inc");
require_once(INC_CLASS . DS . "class.ino_exception.inc");
require_once(INC_CLASS . DS . "class_inosave.inc");
require_once(INC_CLASS . DS . "class_downloads.inc");
require_once(INC_CLASS . DS . "class_getsvgimage.inc");
require_once(INC_EXTENSIONS . DS . "engine" . DS . "class_engine.inc");
require_once(INC_EXTENSIONS . DS . "user" . DS . "class.user.inc");
require_once(INC_EXTENSIONS . DS . "user" . DS . "class.user_role.inc");
require_once(INC_EXTENSIONS . DS . "user" . DS . "class.user_password_reset.inc");
require_once(INC_EXTENSIONS . DS . "user" . DS . "activity" . DS . "class_user_activity_v.inc");
require_once(INC_EXTENSIONS . DS . "user" . DS . "dashboard" . DS . "class_user_dashboard_v.inc");
require_once(INC_EXTENSIONS . DS . "user" . DS . "dashboard" . DS . "config" . DS . "class_user_dashboard_config.inc");
require_once(INC_EXTENSIONS . DS . "user" . DS . "favourite" . DS . "class_user_favourite.inc");
require_once(INC_EXTENSIONS . DS . "role_access" . DS . "class_role_access.inc");
require_once(INC_EXTENSIONS . DS . "role_path" . DS . "class_role_path.inc");

//require_once(INC_BASICS.DS."class.dbObject.inc"); 
//load other objects
require_once(INC_SYS . DS . "program" . DS . "class_sys_program.inc");
require_once(INC_SYS . DS . "option" . DS . "class.option_header.inc");
require_once(INC_SYS . DS . "option" . DS . "class.option_line.inc");
require_once(INC_SYS . DS . "option" . DS . "class.option_detail.inc");
//require_once(INC_SYSTEMS.DS."role".DS."class.role_path.inc");
require_once(INC_SYS . DS . "value_group" . DS . "class.sys_value_group_header.inc");
require_once(INC_SYS . DS . "value_group" . DS . "class.sys_value_group_line.inc");
require_once(INC_SYS . DS . "profile" . DS . "class_sys_profile_header.inc");
require_once(INC_SYS . DS . "profile" . DS . "class_sys_profile_line.inc");
require_once(INC_SYS . DS . "process_flow" . DS . "class_process_flow_header.inc");
require_once(INC_SYS . DS . "process_flow" . DS . "class_process_flow_line.inc");
require_once(INC_SYS . DS . "process_flow" . DS . "class_process_flow_action.inc");
require_once(INC_SYS . DS . "process_flow" . DS . "class_process_flow_action_value.inc");
//require_once(INC_SYS.DS."notification".DS."class_sys_notification.inc"); 
require_once(INC_MODULE . DS . "sys" . DS . "document_sequence" . DS . "class_sys_document_sequence.inc");
require_once(INC_MODULE . DS . "sys" . DS . "notification" . DS . "class_sys_notification.inc");
require_once(INC_MODULE . DS . "sys" . DS . "notification" . DS . "user" . DS . "class_sys_notification_user.inc");
require_once(INC_MODULE . DS . "sys" . DS . "secondary_field" . DS . "class_sys_secondary_field.inc");
require_once(INC_MODULE . DS . "sys" . DS . "secondary_field" . DS . "instance" . DS . "class_sys_secondary_field_instance.inc");
require_once(INC_MODULE . DS . "sys" . DS . "extra_field" . DS . "class_sys_extra_field.inc");
require_once(INC_MODULE . DS . "sys" . DS . "extra_field" . DS . "instance" . DS . "class_sys_extra_field_instance.inc");
require_once(INC_MODULE . DS . "sys" . DS . "printer" . DS . "class_sys_printer.inc");
require_once(INC_ORGS . DS . "class_org.inc");
require_once(INC_ORGS . DS . "class_org_v.inc");
require_once(INC_ORGS . DS . "enterprise" . DS . "class_enterprise.inc");
require_once(INC_ORGS . DS . "legal" . DS . "class_legal.inc");
require_once(INC_ORGS . DS . "business" . DS . "class_business.inc");
require_once(INC_ORGS . DS . "inventory" . DS . "class_inventory.inc");
require_once(INC_ORGS . DS . "address" . DS . "class_address.inc");
require_once(INC_GL . DS . "coa" . DS . "class_coa.inc");
require_once(INC_GL . DS . "coa_combination" . DS . "class_coa_combination.inc");
require_once(INC_GL . DS . "calendar" . DS . "class_gl_calendar.inc");
require_once(INC_GL . DS . "ledger" . DS . "class_gl_ledger.inc");
require_once(INC_GL . DS . "ledger" . DS . "class_gl_ledger_balancing_values.inc");
require_once(INC_GL . DS . "journal" . DS . "class_gl_journal_header.inc");
require_once(INC_GL . DS . "journal" . DS . "class_gl_journal_line.inc");
require_once(INC_GL . DS . "journal" . DS . "class_gl_journal_line_v.inc");
require_once(INC_GL . DS . "balance" . DS . "class_gl_balance_v.inc");
require_once(INC_GL . DS . "balance" . DS . "class_gl_balance.inc");
require_once(INC_MODULE . DS . "gl" . DS . "balance" . DS . "class_gl_unposted_balance_v.inc");
require_once(INC_GL . DS . "payment_term" . DS . "class_payment_term.inc");
require_once(INC_GL . DS . "payment_term" . DS . "class_payment_term_schedule.inc");
require_once(INC_GL . DS . "payment_term" . DS . "class_payment_term_discount.inc");
require_once(INC_MODULE . DS . "gl" . DS . "currency_conversion" . DS . "class_gl_currency_conversion.inc");
require_once(INC_INV . DS . "item" . DS . "class.item.inc");
require_once(INC_MODULE . DS . "inv" . DS . "item" . DS . "class_ra_item.inc");
require_once(INC_MODULE . DS . "inv" . DS . "item" . DS . "class_item_select.inc");
require_once(INC_INV . DS . "onhand" . DS . "class_onhand.inc");
require_once(INC_INV . DS . "onhand" . DS . "class_onhand_v.inc");
require_once(INC_INV . DS . "subinventory" . DS . "class_subinventory.inc");
require_once(INC_INV . DS . "locator" . DS . "class_locator.inc");
require_once(INC_INV . DS . "locator" . DS . "class_locator_v.inc");
require_once(INC_INV . DS . "uom" . DS . "class_uom.inc");
require_once(INC_INV . DS . "transaction_type" . DS . "class.transaction_type.inc");
require_once(INC_AP . DS . "supplier" . DS . "class_supplier.inc");
require_once(INC_AP . DS . "supplier" . DS . "class_supplier_site.inc");
require_once(INC_AP . DS . "supplier_bu" . DS . "class_supplier_bu.inc");
require_once(INC_AP . DS . "supplier" . DS . "class_supplier_all_v.inc");
require_once(INC_MODULE . DS . "ap" . DS . "transaction" . DS . "po" . DS . "class_ap_po_matching_v.inc");
require_once(INC_MODULE . DS . "ap" . DS . "transaction" . DS . "class_ap_transaction_all_v.inc");
require_once(INC_MODULE . DS . "ap" . DS . "payment" . DS . "transaction" . DS . "class_ap_payment_trnx_v.inc");
require_once(INC_MODULE . DS . "ap" . DS . "payment" . DS . "class_ap_payment_all_v.inc");
//require_once(INC_AP.DS."ap_transaction".DS."class_ap_transaction_header.inc");
//require_once(INC_AP.DS."ap_transaction".DS."class_ap_transaction_line.inc");
//require_once(INC_AP.DS."ap_transaction".DS."class_ap_transaction_detail.inc");
require_once(INC_AR . DS . "customer" . DS . "class_ar_customer.inc");
require_once(INC_AR . DS . "customer" . DS . "class_ar_customer_site.inc");
require_once(INC_AR . DS . "customer_bu" . DS . "class_ar_customer_bu.inc");
require_once(INC_AR . DS . "transaction_type" . DS . "class_ar_transaction_type.inc");
require_once(INC_AR . DS . "transaction_source" . DS . "class_ar_transaction_source.inc");
require_once(INC_AR . DS . "transaction_interface" . DS . "class_ar_transaction_interface.inc");
require_once(INC_MODULE . DS . "ar" . DS . "receipt_source" . DS . "class_ar_receipt_source.inc");
require_once(INC_MODULE . DS . "ar" . DS . "transaction" . DS . "class_ar_unpaid_transaction_v.inc");
require_once(INC_MODULE . DS . "fa" . DS . "asset_book" . DS . "class_fa_asset_book.inc");
require_once(INC_MODULE . DS . "fa" . DS . "asset" . DS . "class_fa_asset.inc");
require_once(INC_MODULE . DS . "fa" . DS . "asset" . DS . "class_fa_asset_assignment.inc");
require_once(INC_MODULE . DS . "fa" . DS . "asset_category" . DS . "class_fa_asset_category.inc");
require_once(INC_MODULE . DS . "fa" . DS . "asset_category" . DS . "class_fa_book_category_association.inc");
require_once(INC_MODULE . DS . "fa" . DS . "depreciation_method" . DS . "class_fa_depreciation_method.inc");
require_once(INC_MODULE . DS . "fa" . DS . "depreciation_method" . DS . "class_fa_depreciation_method_rate.inc");
require_once(INC_PO . DS . "class_po_header.inc");
require_once(INC_PO . DS . "class_po_line.inc");
require_once(INC_PO . DS . "class_po_detail.inc");
require_once(INC_PO . DS . "class_po_all_v.inc");
require_once(INC_MODULE . DS . "po" . DS . "class_po_document_v.inc");
require_once(INC_MODULE . DS . "po" . DS . "release" . DS . "class_po_release.inc");
require_once(INC_MODULE . DS . "po" . DS . "release" . DS . "class_po_blanket_v.inc");
require_once(INC_MODULE . DS . "po" . DS . "requisition" . DS . "class_po_requisition_header.inc");
require_once(INC_MODULE . DS . "po" . DS . "requisition" . DS . "class_po_requisition_line.inc");
require_once(INC_MODULE . DS . "po" . DS . "requisition" . DS . "class_po_requisition_detail.inc");
require_once(INC_MODULE . DS . "po" . DS . "requisition" . DS . "class_po_requisition_all_v.inc");
require_once(INC_MODULE . DS . "po" . DS . "requisition" . DS . "class_po_convert_requisition_v.inc");
require_once(INC_MODULE . DS . "po" . DS . "sourcing_rule" . DS . "class_po_sourcing_rule_header.inc");
require_once(INC_MODULE . DS . "po" . DS . "sourcing_rule" . DS . "class_po_sourcing_rule_line.inc");
require_once(INC_MODULE . DS . "po" . DS . "po_purchasing_control" . DS . "class_po_purchasing_control.inc");
require_once(INC_INV . DS . "inv_transaction" . DS . "class_inv_transaction.inc");
require_once(INC_INV . DS . "receipt" . DS . "class_inv_receipt_header.inc");
require_once(INC_INV . DS . "receipt" . DS . "class_inv_receipt_line.inc");
require_once(INC_INV . DS . "receipt" . DS . "class_inv_receipt_v.inc");
require_once(INC_MODULE . DS . "inv" . DS . "abc_valuation" . DS . "class_inv_abc_valuation.inc");
require_once(INC_MODULE . DS . "inv" . DS . "abc_valuation" . DS . "class_inv_abc_valuation_result.inc");
require_once(INC_MODULE . DS . "inv" . DS . "abc_assignment" . DS . "class_inv_abc_assignment_header.inc");
require_once(INC_MODULE . DS . "inv" . DS . "abc_assignment" . DS . "class_inv_abc_assignment_line.inc");
require_once(INC_MODULE . DS . "inv" . DS . "abc_assignment" . DS . "class_inv_abc_assignment_line.inc");
require_once(INC_MODULE . DS . "inv" . DS . "count" . DS . "class_inv_count_header.inc");
require_once(INC_MODULE . DS . "inv" . DS . "count_schedule" . DS . "class_inv_count_schedule.inc");
require_once(INC_MODULE . DS . "inv" . DS . "count" . DS . "class_inv_count_abc_ref.inc");
require_once(INC_MODULE . DS . "inv" . DS . "count_entries" . DS . "class_inv_count_entries.inc");
require_once(INC_MODULE . DS . "inv" . DS . "count_entries" . DS . "views" . DS . "class_inv_count_entries_v.inc");
require_once(INC_MODULE . DS . "inv" . DS . "inter_org_transfer" . DS . "class_inter_org_transfer_header.inc");
require_once(INC_MODULE . DS . "inv" . DS . "inter_org_transfer" . DS . "class_inter_org_transfer_line.inc");
require_once(INC_MODULE . DS . "inv" . DS . "serial" . DS . "class_inv_serial_number.inc");
require_once(INC_MODULE . DS . "inv" . DS . "lot" . DS . "class_inv_lot_number.inc");
require_once(INC_MODULE . DS . "inv" . DS . "lot" . DS . "transaction" . DS . "class_inv_lot_transaction.inc");
require_once(INC_MODULE . DS . "inv" . DS . "lot" . DS . "transaction" . DS . "class_inv_lot_transaction_v.inc");
require_once(INC_MODULE . DS . "inv" . DS . "lot" . DS . "onhand" . DS . "class_inv_lot_onhand.inc");
require_once(INC_MODULE . DS . "inv" . DS . "serial" . DS . "transaction" . DS . "class_inv_serial_transaction.inc");
require_once(INC_BOM . DS . "class.bom_header.inc");
require_once(INC_BOM . DS . "class.bom_line.inc");
require_once(INC_MODULE . DS . "bom" . DS . "class_bom_commonbom_line.inc");
require_once(INC_MODULE . DS . "bom" . DS . "class_bom_line_v.inc");
require_once(INC_BOM . DS . "class_bom_all_v.inc");
require_once(INC_BOM . DS . "indented_bom" . DS . "class_indented_bom.inc");
require_once(INC_BOM . DS . "bom_resource" . DS . "class_bom_resource.inc");
require_once(INC_BOM . DS . "bom_resource" . DS . "class_bom_resource_cost.inc");
require_once(INC_BOM . DS . "bom_cost_type" . DS . "class.bom_cost_type.inc");
require_once(INC_BOM . DS . "bom_material_element" . DS . "class.bom_material_element.inc");
require_once(INC_BOM . DS . "bom_overhead" . DS . "class.bom_overhead.inc");
require_once(INC_BOM . DS . "bom_overhead" . DS . "class.bom_overhead_rate_assignment.inc");
require_once(INC_BOM . DS . "bom_overhead" . DS . "class.bom_overhead_resource_assignment.inc");
require_once(INC_BOM . DS . "bom_overhead" . DS . "class_bom_overhead_v.inc");
require_once(INC_BOM . DS . "bom_department" . DS . "class.bom_department.inc");
require_once(INC_BOM . DS . "bom_department" . DS . "class.bom_department_resource_assignment.inc");
require_once(INC_BOM . DS . "bom_standard_operation" . DS . "class.bom_standard_operation.inc");
require_once(INC_BOM . DS . "bom_standard_operation" . DS . "class.bom_standard_operation_resource_assignment.inc");
require_once(INC_BOM . DS . "bom_routing" . DS . "class.bom_routing_header.inc");
require_once(INC_BOM . DS . "bom_routing" . DS . "class.bom_routing_line.inc");
require_once(INC_BOM . DS . "bom_routing" . DS . "class.bom_routing_detail.inc");
require_once(INC_MODULE . DS . "bom" . DS . "bom_routing" . DS . "class_bom_routing_v.inc");
require_once(INC_MODULE . DS . "bom" . DS . "bom_routing" . DS . "class_bom_routing_line_v.inc");

require_once(INC_MODULE . DS . "wip" . DS . "wip_wo" . DS . "class.wip_wo_header.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_wo" . DS . "class.wip_wo_bom.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_wo" . DS . "class.wip_wo_routing_line.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_wo" . DS . "class.wip_wo_routing_detail.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_wo" . DS . "class_wip_wo_routing_v.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_wo" . DS . "class_ra_wip.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_move_transaction" . DS . "class.wip_move_transaction.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_wo_completion" . DS . "class_wip_wo_completion.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_wol_transaction" . DS . "class_wip_wol_transaction.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_wol_transaction" . DS . "class_wip_wol_transaction_line.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_material_transaction" . DS . "class_wip_material_transaction.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wip_resource_transaction" . DS . "class.wip_resource_transaction.inc");
require_once(INC_MODULE . DS . "wip" . DS . "accounting_group" . DS . "class_wip_accounting_group.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wo_work_bench" . DS . "class_wip_wo_work_bench.inc");
require_once(INC_MODULE . DS . "wip" . DS . "wo_work_bench" . DS . "class_wip_wo_work_bench_line.inc");
require_once(INC_MODULE . DS . "cst" . DS . "item_cost" . DS . "class_cst_item_cost_v.inc");
require_once(INC_MODULE . DS . "cst" . DS . "item_cost" . DS . "class_cst_item_cost_header.inc");
require_once(INC_MODULE . DS . "cst" . DS . "item_cost" . DS . "class_cst_item_cost_line.inc");
require_once(INC_MODULE . DS . "cst" . DS . "item_cost" . DS . "class_cst_item_cost_line_pre.inc");
require_once(INC_MODULE . DS . "fp" . DS . "forecast" . DS . "class_fp_forecast_header.inc");
require_once(INC_MODULE . DS . "fp" . DS . "forecast" . DS . "class_fp_forecast_line.inc");
require_once(INC_MODULE . DS . "fp" . DS . "forecast" . DS . "class_fp_forecast_line_date.inc");
require_once(INC_MODULE . DS . "fp" . DS . "forecast" . DS . "consumption" . DS . "class_fp_forecast_over_consumption_v.inc");
require_once(INC_MODULE . DS . "fp" . DS . "forecast" . DS . "class_fp_forecast_line_date_v.inc");
require_once(INC_MODULE . DS . "fp" . DS . "mds" . DS . "class_fp_mds_header.inc");
require_once(INC_MODULE . DS . "fp" . DS . "mds" . DS . "class_fp_mds_line.inc");
require_once(INC_MODULE . DS . "fp" . DS . "source_list" . DS . "class_fp_source_list_header.inc");
require_once(INC_MODULE . DS . "fp" . DS . "source_list" . DS . "class_fp_source_list_line.inc");
require_once(INC_MODULE . DS . "fp" . DS . "minmax" . DS . "class_fp_minmax_header.inc");
require_once(INC_MODULE . DS . "fp" . DS . "minmax" . DS . "class_fp_minmax_line.inc");
require_once(INC_MODULE . DS . "fp" . DS . "minmax" . DS . "class_fp_minmax_demand.inc");
require_once(INC_MODULE . DS . "fp" . DS . "minmax" . DS . "class_fp_minmax_demand_v.inc");
require_once(INC_MODULE . DS . "fp" . DS . "minmax" . DS . "class_fp_minmax_suggestion_v.inc");
require_once(INC_MODULE . DS . "fp" . DS . "minmax" . DS . "board" . DS . "class_fp_minmax_board_v.inc");
require_once(INC_MODULE . DS . "fp" . DS . "urgent_card" . DS . "class_fp_urgent_card.inc");
require_once(INC_MODULE . DS . "fp" . DS . "mrp" . DS . "class_fp_mrp_header.inc");
require_once(INC_MODULE . DS . "fp" . DS . "planning_control" . DS . "class_fp_planning_control.inc");
require_once(INC_MODULE . DS . "fp" . DS . "mrp" . DS . "exception" . DS . "class_fp_mrp_exception.inc");
require_once(INC_MODULE . DS . "fp" . DS . "mrp" . DS . "class_fp_mrp_v.inc");
require_once(INC_MODULE . DS . "fp" . DS . "mrp" . DS . "class_fp_mrp_demand.inc");
require_once(INC_MODULE . DS . "fp" . DS . "mrp" . DS . "class_fp_mrp_demand_v.inc");
require_once(INC_MODULE . DS . "fp" . DS . "mrp" . DS . "class_fp_mrp_planned_order.inc");
require_once(INC_MODULE . DS . "fp" . DS . "mrp" . DS . "class_fp_mrp_lowlevel_code.inc");
require_once(INC_MODULE . DS . "fp" . DS . "mrp" . DS . "class_fp_mrp_existing_supply_v.inc");
require_once(INC_MODULE . DS . "sd" . DS . "lead" . DS . "class_sd_lead.inc");
require_once(INC_MODULE . DS . "sd" . DS . "opportunity" . DS . "class_sd_opportunity.inc");
require_once(INC_MODULE . DS . "sd" . DS . "quote" . DS . "class_sd_quote_header.inc");
require_once(INC_MODULE . DS . "sd" . DS . "quote" . DS . "class_sd_quote_line.inc");
require_once(INC_MODULE . DS . "sd" . DS . "so" . DS . "class_sd_so_header.inc");
require_once(INC_MODULE . DS . "sd" . DS . "so" . DS . "class_sd_so_line.inc");
require_once(INC_MODULE . DS . "sd" . DS . "so" . DS . "class_sd_so_all_v.inc");
require_once(INC_MODULE . DS . "sd" . DS . "shipping_control" . DS . "class_sd_shipping_control.inc");
require_once(INC_MODULE . DS . "sd" . DS . "delivery" . DS . "class_sd_delivery_header.inc");
require_once(INC_MODULE . DS . "sd" . DS . "delivery" . DS . "class_sd_delivery_line.inc");
require_once(INC_MODULE . DS . "sd" . DS . "document_type" . DS . "class_sd_document_type.inc");
//require_once(INC_MODULE.DS."sd".DS."document_type".DS."class_sd_document_relation.inc");
require_once(INC_MODULE . DS . "mdm" . DS . "tax_code" . DS . "class_mdm_tax_code.inc");
require_once(INC_MODULE . DS . "mdm" . DS . "tax" . DS . "region" . DS . "class_mdm_tax_region.inc");
require_once(INC_MODULE . DS . "mdm" . DS . "price_list" . DS . "class_mdm_price_list_header.inc");
require_once(INC_MODULE . DS . "mdm" . DS . "price_list" . DS . "class_mdm_price_list_line.inc");
require_once(INC_MODULE . DS . "mdm" . DS . "bank" . DS . "class_mdm_bank_header.inc");
require_once(INC_MODULE . DS . "mdm" . DS . "bank" . DS . "class_mdm_bank_v.inc");
require_once(INC_MODULE . DS . "mdm" . DS . "bank" . DS . "class_mdm_bank_site.inc");
require_once(INC_MODULE . DS . "mdm" . DS . "bank_account" . DS . "class_mdm_bank_account.inc");
require_once(INC_MODULE . DS . "mdm" . DS . "bank_account" . DS . "class_mdm_bank_account_v.inc");
require_once(INC_MODULE . DS . "hr" . DS . "employee" . DS . "class_hr_employee.inc");
require_once(INC_MODULE . DS . "hr" . DS . "employee" . DS . "class_hr_employee_position_v.inc");
require_once(INC_MODULE . DS . "hr" . DS . "employee" . DS . "education" . DS . "class_hr_employee_education.inc");
require_once(INC_MODULE . DS . "hr" . DS . "employee" . DS . "experience" . DS . "class_hr_employee_experience.inc");
require_once(INC_MODULE . DS . "hr" . DS . "employee" . DS . "termination" . DS . "class_hr_employee_termination.inc");
require_once(INC_MODULE . DS . "hr" . DS . "self_service" . DS . "education" . DS . "class_hr_employee_education_ss.inc");
require_once(INC_MODULE . DS . "hr" . DS . "self_service" . DS . "experience" . DS . "class_hr_employee_experience_ss.inc");

require_once(INC_MODULE . DS . "hr" . DS . "position" . DS . "class_hr_position.inc");
require_once(INC_MODULE . DS . "hr" . DS . "position_hierarchy" . DS . "class_hr_position_hierarchy_header.inc");
require_once(INC_MODULE . DS . "hr" . DS . "position_hierarchy" . DS . "class_hr_position_hierarchy_line.inc");
require_once(INC_MODULE . DS . "hr" . DS . "compensation_element" . DS . "class_hr_compensation_element.inc");
require_once(INC_MODULE . DS . "hr" . DS . "element_entry" . DS . "tpl" . DS . "class_element_entry_tpl_header.inc");
require_once(INC_MODULE . DS . "hr" . DS . "element_entry" . DS . "tpl" . DS . DS . "class_element_entry_tpl_line.inc");
require_once(INC_MODULE . DS . "hr" . DS . "element_entry" . DS . "class_element_entry_header.inc");
require_once(INC_MODULE . DS . "hr" . DS . "element_entry" . DS . "class_element_entry_line.inc");
require_once(INC_MODULE . DS . "hr" . DS . "employee" . DS . "salary" . DS . "class_hr_employee_salary.inc");
require_once(INC_MODULE . DS . "hr" . DS . "payslip" . DS . "class_hr_payslip_header.inc");
require_once(INC_MODULE . DS . "hr" . DS . "payslip" . DS . "class_hr_payslip_line.inc");
require_once(INC_MODULE . DS . "hr" . DS . "payslip" . DS . "user" . DS . "class_hr_payslip_user.inc");
require_once(INC_MODULE . DS . "hr" . DS . "payroll" . DS . "payment_method" . DS . "class_hr_payroll_payment_method.inc");
require_once(INC_MODULE . DS . "hr" . DS . "payroll" . DS . "payment_method" . DS . "class_hr_payroll_payment_method.inc");
require_once(INC_MODULE . DS . "hr" . DS . "payroll" . DS . "class_hr_payroll.inc");
require_once(INC_MODULE . DS . "hr" . DS . "payroll" . DS . "class_hr_payroll_schedule.inc");
require_once(INC_MODULE . DS . "hr" . DS . "payroll" . DS . "process" . DS . "class_hr_payroll_process.inc");
require_once(INC_MODULE . DS . "hr" . DS . "leave" . DS . "type" . DS . "class_hr_leave_type.inc");
require_once(INC_MODULE . DS . "hr" . DS . "leave" . DS . "balance" . DS . "class_hr_leave_balance.inc");
require_once(INC_MODULE . DS . "hr" . DS . "leave" . DS . "balance" . DS . "user" . DS . "class_hr_leave_balance_user.inc");
//require_once(INC_MODULE.DS."hr".DS."leave".DS."transaction".DS."class_hr_leave_transaction_header.inc");
//require_once(INC_MODULE.DS."hr".DS."leave".DS."transaction".DS."class_hr_leave_transaction_line.inc");
require_once(INC_MODULE . DS . "hr" . DS . "leave" . DS . "entitlement" . DS . "class_hr_leave_entitlement_header.inc");
require_once(INC_MODULE . DS . "hr" . DS . "leave" . DS . "entitlement" . DS . "class_hr_leave_entitlement_line.inc");
require_once(INC_MODULE . DS . "hr" . DS . "leave" . DS . "transaction" . DS . "class_hr_leave_transaction.inc");
require_once(INC_MODULE . DS . "hr" . DS . "leave" . DS . "transaction" . DS . "user" . DS . "class_hr_leave_transaction_user.inc");
require_once(INC_MODULE . DS . "hr" . DS . "approval" . DS . "limit" . DS . "class_hr_approval_limit_header.inc");
require_once(INC_MODULE . DS . "hr" . DS . "approval" . DS . "limit" . DS . "class_hr_approval_limit_line.inc");
require_once(INC_MODULE . DS . "hr" . DS . "approval" . DS . "object" . DS . "class_hr_approval_object.inc");
require_once(INC_MODULE . DS . "hr" . DS . "approval" . DS . "validation" . DS . "class_hr_approval_validation.inc");
require_once(INC_MODULE . DS . "hr" . DS . "approval" . DS . "limit_assignment" . DS . "class_hr_approval_limit_assignment.inc");
require_once(INC_MODULE . DS . "hr" . DS . "team" . DS . "class_hr_team_header.inc");
require_once(INC_MODULE . DS . "hr" . DS . "team" . DS . "class_hr_team_line.inc");
require_once(INC_MODULE . DS . "cc" . DS . "co_template" . DS . "class_cc_co_template_header.inc");
require_once(INC_MODULE . DS . "cc" . DS . "co_template" . DS . "class_cc_co_template_line.inc");
require_once(INC_MODULE . DS . "cc" . DS . "co" . DS . "class_cc_co_header.inc");
require_once(INC_MODULE . DS . "cc" . DS . "co" . DS . "class_cc_co_line.inc");
require_once(INC_MODULE . DS . "bc" . DS . "auto_trigger" . DS . "class_bc_auto_trigger.inc");
require_once(INC_MODULE . DS . "cc" . DS . "co" . DS . "process_flow" . DS . "class_cc_co_process_flow_action.inc");
require_once(INC_MODULE . DS . "bc" . DS . "label_format" . DS . "class_bc_label_format_header.inc");
require_once(INC_MODULE . DS . "bc" . DS . "label_format" . DS . "class_bc_label_format_line.inc");
require_once(INC_MODULE . DS . "bc" . DS . "label_request" . DS . "class_bc_label_request.inc");
require_once(INC_MODULE . DS . "bc" . DS . "static_label" . DS . "class_bc_static_label.inc");

//
require_once(INC_TPARTY . DS . "barcode" . DS . "class_ino_barcode.inc");
require_once(INC_TPARTY . DS . "extensions" . DS . "social_login" . DS . "class_social_login.inc");
//
//include extensions
require_once(INC_EXTENSIONS . DS . "ino_generic" . DS . "class_ino_generic.inc");
require_once(INC_EXTENSIONS . DS . "page" . DS . "class_page.inc");
require_once(INC_EXTENSIONS . DS . "comment" . DS . "class.comment.inc");
require_once(INC_EXTENSIONS . DS . "contact" . DS . "class_extn_contact.inc");
require_once(INC_EXTENSIONS . DS . "contact" . DS . "class_extn_contact_reference.inc");
require_once(INC_EXTENSIONS . DS . "file" . DS . "class.file.inc");
require_once(INC_EXTENSIONS . DS . "file" . DS . "class.file_reference.inc");
require_once(INC_EXTENSIONS . DS . "file" . DS . "class_massupload.inc");
require_once(INC_EXTENSIONS . DS . "content_type" . DS . "class_content_type.inc");
require_once(INC_EXTENSIONS . DS . "content_type" . DS . "class_new_content_type.inc");
require_once(INC_EXTENSIONS . DS . "content_type" . DS . "class_content_type_reference.inc");
require_once(INC_EXTENSIONS . DS . "content" . DS . "class.content.inc");
require_once(INC_EXTENSIONS . DS . "block" . DS . "class.block.inc");
require_once(INC_EXTENSIONS . DS . "block" . DS . "class.block_content.inc");
require_once(INC_EXTENSIONS . DS . "block" . DS . "class_block_cache.inc");
require_once(INC_EXTENSIONS . DS . "category" . DS . "class_category.inc");
require_once(INC_EXTENSIONS . DS . "category" . DS . "class_category_reference.inc");
require_once(INC_EXTENSIONS . DS . "view" . DS . "class.view.inc");
require_once(INC_EXTENSIONS . DS . "view" . DS . "result" . DS . "class_view_result.inc");
require_once(INC_EXTENSIONS . DS . "web_tracking" . DS . "class_web_tracking.inc");
require_once(INC_EXTENSIONS . DS . "url_alias" . DS . "class_ext_url_alias.inc");
require_once(INC_EXTENSIONS . DS . "web_contact" . DS . "class_web_contact.inc");
require_once(INC_EXTENSIONS . DS . "site_search" . DS . "class_extn_site_search.inc");

require_once(INC_EXTENSIONS . DS . "test_case" . DS . "class_ext_test_case_header.inc");
require_once(INC_EXTENSIONS . DS . "test_case" . DS . "class_ext_test_case_line.inc");
?>