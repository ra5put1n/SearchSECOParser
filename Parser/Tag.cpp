#include <map>
#include <string>
#include "Tag.h"




std::map<std::string, Tag> TagMap::getMap()
{
	std::map<std::string, Tag> m;
	m["name"] = name_tag;
	m["block"] = block_tag;
	m["break"] = break_tag;
	m["case"] = case_tag;
	m["continue"] = continue_tag;
	m["default"] = default_tag;
	m["do"] = do_tag;
	m["empty_stmt"] = empty_stmt_tag;
	m["expr_stmt"] = expr_stmt_tag;
	m["for"] = for_tag;
	m["goto"] = goto_tag;
	m["if_stmt"] = if_stmt_tag;
	m["label"] = label_tag;
	m["return"] = return_tag;
	m["switch"] = switch_tag;
	m["while"] = while_tag;
	m["block_content"] = block_content_tag;
	m["condition"] = condition_tag;
	m["control"] = control_tag;
	m["else"] = else_tag;
	m["expr"] = expr_tag;
	m["if"] = if_tag;
	m["incr"] = incr_tag;
	m["then"] = then_tag;
	m["type"] = type_tag;
	m["specifier"] = specifier_tag;
	m["extern"] = extern_tag;
	m["specifier"] = specifier_tag;
	m["specifier"] = specifier_tag;
	m["specifier"] = specifier_tag;
	m["specifier"] = specifier_tag;
	m["specifier"] = specifier_tag;
	m["specifier"] = specifier_tag;
	m["decl"] = decl_tag;
	m["init"] = init_tag;
	m["range"] = range_tag;
	m["function_decl"] = function_decl_tag;
	m["function"] = function_tag;
	m["modifier"] = modifier_tag;
	m["typedef"] = typedef_tag;
	m["decl"] = decl_tag;
	m["decl_stmt"] = decl_stmt_tag;
	m["enum_decl"] = enum_decl_tag;
	m["enum"] = enum_tag;
	m["struct_decl"] = struct_decl_tag;
	m["struct"] = struct_tag;
	m["decl_stmt"] = decl_stmt_tag;
	m["union_decl"] = union_decl_tag;
	m["union"] = union_tag;
	m["index"] = index_tag;
	m["expr"] = expr_tag;
	m["call"] = call_tag;
	m["expr"] = expr_tag;
	m["ternary"] = ternary_tag;
	m["alignas"] = alignas_tag;
	m["alignof"] = alignof_tag;
	m["atomic"] = atomic_tag;
	m["generic_selection"] = generic_selection_tag;
	m["specifier"] = specifier_tag;
	m["specifier"] = specifier_tag;
	m["asm"] = asm_tag;
	m["association"] = association_tag;
	m["association_list"] = association_list_tag;
	m["selector"] = selector_tag;
	m["sizeof"] = sizeof_tag;
	return m;
}

Tag TagMap::getTag(std::string text)
{
	std::map<std::string, Tag> m = getMap();
	auto it = m.find(text);
	if (it == m.end())
		return unknown_tag;
	return it->second;
}

