#pragma once
#include <map>
#include <string>

enum Tag
{
	name_tag,
	block_tag,
	break_tag,
	case_tag,
	continue_tag,
	default_tag,
	do_tag,
	empty_stmt_tag,
	expr_stmt_tag,
	for_tag,
	goto_tag,
	if_stmt_tag,
	label_tag,
	return_tag,
	switch_tag,
	while_tag,
	block_content_tag,
	condition_tag,
	control_tag,
	else_tag,
	expr_tag,
	if_tag,
	incr_tag,
	then_tag,
	type_tag,
	specifier_tag,
	extern_tag,
	init_tag,
	range_tag,
	function_decl_tag,
	function_tag,
	modifier_tag,
	typedef_tag,
	decl_tag,
	enum_decl_tag,
	enum_tag,
	struct_decl_tag,
	struct_tag,
	decl_stmt_tag,
	union_decl_tag,
	union_tag,
	index_tag,
	call_tag,
	ternary_tag,
	alignas_tag,
	alignof_tag,
	atomic_tag,
	generic_selection_tag,
	asm_tag,
	association_tag,
	association_list_tag,
	selector_tag,
	sizeof_tag,
	unknown_tag,
};

class TagMap
{
public:
	static std::map<std::string, Tag> getMap();
	static Tag getTag(std::string text);
};