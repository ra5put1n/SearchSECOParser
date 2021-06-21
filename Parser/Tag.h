/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)
*/
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


	annotation_tag, 
	annotation_defn_tag,
	assert_tag,
	attribute_tag,
	by_tag,
	capture_tag,
	cast_tag,
	catch_tag,
	checked_tag,
	class_tag,
	class_decl_tag,
	comment_tag,
	constraint_tag,
	constructor_tag,
	constructor_decl_tag,
	decltype_tag,
	delegate_tag,
	destructor_tag,
	destructor_decl_tag,
	equals_tag,
	escape_tag,
	event_tag,
	extends_tag,
	finally_tag,
	fixed_tag,
	foreach_tag,
	forever_tag,
	friend_tag,
	from_tag,
	group_tag,
	implements_tag,
	import_tag,
	in_tag,
	interface_tag,
	interface_decl_tag,
	into_tag,
	join_tag,
	lambda_tag,
	let_tag,
	linq_tag,
	literal_tag,
	lock_tag,
	namespace_tag,
	noexcept_tag,
	on_tag,
	operator_tag,
	orderby_tag,
	package_tag,
	parameter_list_tag,
	private_tag,
	protected_tag,
	public_tag,
	ref_qualifier_tag,
	select_tag,
	static_tag,
	super_list_tag,
	synchronized_tag,
	template_tag,
	throw_tag,
	throws_tag,
	try_tag,
	typeid_tag,
	typename_tag,
	typeof_tag,
	unchecked_tag,
	unsafe_tag,
	using_tag,
	where_tag,
	// TO DO: see if these require special treatment.
	omp_argument_tag,
	omp_argument_list_tag,
	omp_clause_tag,
	omp_directive_tag,
	omp_expr_tag,
	omp_name_tag,
	cpp_define_tag,
	cpp_directive_tag,
	cpp_elif_tag,
	cpp_else_tag,
	cpp_empty_tag,
	cpp_endif_tag,
	cpp_endregion_tag,
	cpp_error_tag,
	cpp_file_tag,
	cpp_if_tag,
	cpp_ifdef_tag,
	cpp_ifndef_tag,
	cpp_include_tag,
	cpp_line_tag,
	cpp_literal_tag,
	cpp_macro_tag,
	cpp_number_tag,
	cpp_pragma_tag,
	cpp_region_tag,
	cpp_undef_tag,
	cpp_value_tag,
	cpp_warning_tag,

	// Some miscellanaos tags, possibly needs some investigating.
	argument_list_tag,
	parameter_tag,
	argument_tag,
	macro_tag,
};

class TagMap
{
public:
	/// <summary>
	/// Create new map from all available tags.
	/// </summary>
	/// <returns>A map containing all tags.</returns>
	static std::map<std::string, Tag> getMap();

	/// <summary>
	/// Find the tag which matches to a string.
	/// </summary>
	/// <param name="text">The string for which a tag needs to be found.</param>
	/// <returns>The found tag or unkwnon_tag if not found.</returns>
	static Tag getTag(std::string text);

	/// <summary>
	/// A map containing all tags mapped to string of the tag they represent.
	/// </summary>
	static std::map<std::string, Tag> map;
};