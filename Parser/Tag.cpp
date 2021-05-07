/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include <map>
#include <string>
#include "Tag.h"

// Create map and save it.
std::map<std::string, Tag> TagMap::map = TagMap::getMap();

// NOLINTNEXTLINE
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
	m["decl"] = decl_tag;
	m["init"] = init_tag;
	m["range"] = range_tag;
	m["function_decl"] = function_decl_tag;
	m["function"] = function_tag;
	m["modifier"] = modifier_tag;
	m["typedef"] = typedef_tag;
	m["decl_stmt"] = decl_stmt_tag;
	m["enum_decl"] = enum_decl_tag;
	m["enum"] = enum_tag;
	m["struct_decl"] = struct_decl_tag;
	m["struct"] = struct_tag;
	m["union_decl"] = union_decl_tag;
	m["union"] = union_tag;
	m["index"] = index_tag;
	m["call"] = call_tag;
	m["ternary"] = ternary_tag;
	m["alignas"] = alignas_tag;
	m["alignof"] = alignof_tag;
	m["atomic"] = atomic_tag;
	m["generic_selection"] = generic_selection_tag;
	m["asm"] = asm_tag;
	m["association"] = association_tag;
	m["association_list"] = association_list_tag;
	m["selector"] = selector_tag;
	m["sizeof"] = sizeof_tag;



	m["annotation"] = annotation_tag;
	m["annotation_defn"] = annotation_defn_tag;
	m["assert"] = assert_tag;
	m["attribute"] = attribute_tag;
	m["by"] = by_tag;
	m["capture"] = capture_tag;
	m["cast"] = cast_tag;
	m["catch"] = catch_tag;
	m["checked"] = checked_tag;
	m["class"] = class_tag;
	m["class_decl"] = class_decl_tag;
	m["comment"] = comment_tag;
	m["constraint"] = constraint_tag;
	m["constructor"] = constructor_tag;
	m["constructor_decl"] = constructor_decl_tag;
	m["decltype"] = decltype_tag;
	m["delegate"] = delegate_tag;
	m["destructor"] = destructor_tag;
	m["destructor_decl"] = destructor_decl_tag;
	m["equals"] = equals_tag;
	m["escape"] = escape_tag;
	m["event"] = event_tag;
	m["extends"] = extends_tag;
	m["finally"] = finally_tag;
	m["fixed"] = fixed_tag;
	m["foreach"] = foreach_tag;
	m["forever"] = forever_tag;
	m["friend"] = friend_tag;
	m["from"] = from_tag;
	m["group"] = group_tag;
	m["implements"] = implements_tag;
	m["import"] = import_tag;
	m["in"] = in_tag;
	m["interface"] = interface_tag;
	m["interface_decl"] = interface_decl_tag;
	m["into"] = into_tag;
	m["join"] = join_tag;
	m["lambda"] = lambda_tag;
	m["let"] = let_tag;
	m["linq"] = linq_tag;
	m["literal"] = literal_tag;
	m["lock"] = lock_tag;
	m["namespace"] = namespace_tag;
	m["noexcept"] = noexcept_tag;
	m["on"] = on_tag;
	m["operator"] = operator_tag;
	m["orderby"] = orderby_tag;
	m["package"] = package_tag;
	m["parameter_list"] = parameter_list_tag;
	m["private"] = private_tag;
	m["protected"] = protected_tag;
	m["public"] = public_tag;
	m["ref_qualifier"] = ref_qualifier_tag;
	m["select"] = select_tag;
	m["static"] = static_tag;
	m["super_list"] = super_list_tag;
	m["synchronized"] = synchronized_tag;
	m["template"] = template_tag;
	m["throw"] = throw_tag;
	m["throws"] = throws_tag;
	m["try"] = try_tag;
	m["typeid"] = typeid_tag;
	m["typename"] = typename_tag;
	m["typeof"] = typeof_tag;
	m["unchecked"] = unchecked_tag;
	m["unsafe"] = unsafe_tag;
	m["using"] = using_tag;
	m["where"] = where_tag;
	// TO DO: see if these require special treatment
	m["omp:argument"] = omp_argument_tag;
	m["omp:argument_list"] = omp_argument_list_tag;
	m["omp:clause"] = omp_clause_tag;
	m["omp:directive"] = omp_directive_tag;
	m["omp:expr"] = omp_expr_tag;
	m["omp:name"] = omp_name_tag;
	m["cpp:define"] = cpp_define_tag;
	m["cpp:directive"] = cpp_directive_tag;
	m["cpp:elif"] = cpp_elif_tag;
	m["cpp:else"] = cpp_else_tag;
	m["cpp:empty"] = cpp_empty_tag;
	m["cpp:endif"] = cpp_endif_tag;
	m["cpp:endregion"] = cpp_endregion_tag;
	m["cpp:error"] = cpp_error_tag;
	m["cpp:file"] = cpp_file_tag;
	m["cpp:if"] = cpp_if_tag;
	m["cpp:ifdef"] = cpp_ifdef_tag;
	m["cpp:ifndef"] = cpp_ifndef_tag;
	m["cpp:include"] = cpp_include_tag;
	m["cpp:line"] = cpp_line_tag;
	m["cpp:literal"] = cpp_literal_tag;
	m["cpp:macro"] = cpp_macro_tag;
	m["cpp:number"] = cpp_number_tag;
	m["cpp:pragma"] = cpp_pragma_tag;
	m["cpp:region"] = cpp_region_tag;
	m["cpp:undef"] = cpp_undef_tag;
	m["cpp:value"] = cpp_value_tag;
	m["cpp:warning"] = cpp_warning_tag;
	// Some miscellanaos tags, possibly needs some investigating.
	m["argument_list"] = argument_list_tag;
	m["parameter"] = parameter_tag;
	m["argument"] = argument_tag;
	m["macro"] = macro_tag;
	return m;
}


Tag TagMap::getTag(std::string text)
{
	auto it = map.find(text);

	// it points to map.end() if entry is not found.
	if (it == map.end())
	{
		return unknown_tag;
	}
	return it->second;
}

