#pragma once
#include <string>

class StringStream
{
public:
	StringStream() {};
	void AddBuffer(char* buffer, int bufferSize);
	virtual char NextChar() { return data[pos++]; };
	std::string NextString(int size);
	virtual bool Stop() { return pos >= data.length(); };
private:
	int pos = 0;
	// Test string, will be replaces with an actual implementation at some point.
	std::string data = R"(<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<unit xmlns="http://www.srcML.org/srcML/src" xmlns:cpp="http://www.srcML.org/srcML/cpp" revision="1.0.0" language="C" filename="C:\Users\ilan\Downloads\linux-master\linux-master\security\min_addr.c"><comment type="line">// SPDX-License-Identifier: GPL-2.0</comment>
<cpp:include>#<cpp:directive>include</cpp:directive> <cpp:file>&lt;linux/init.h&gt;</cpp:file></cpp:include>
<cpp:include>#<cpp:directive>include</cpp:directive> <cpp:file>&lt;linux/mm.h&gt;</cpp:file></cpp:include>
<cpp:include>#<cpp:directive>include</cpp:directive> <cpp:file>&lt;linux/security.h&gt;</cpp:file></cpp:include>
<cpp:include>#<cpp:directive>include</cpp:directive> <cpp:file>&lt;linux/sysctl.h&gt;</cpp:file></cpp:include>

<comment type="block">/* amount of vm to protect from userspace access by both DAC and the LSM*/</comment>
<decl_stmt><decl><type><name>unsigned</name> <name>long</name></type> <name>mmap_min_addr</name></decl>;</decl_stmt>
<comment type="block">/* amount of vm to protect from userspace using CAP_SYS_RAWIO (DAC) */</comment>
<decl_stmt><decl><type><name>unsigned</name> <name>long</name></type> <name>dac_mmap_min_addr</name> <init>= <expr><name>CONFIG_DEFAULT_MMAP_MIN_ADDR</name></expr></init></decl>;</decl_stmt>
<comment type="block">/* amount of vm to protect from userspace using the LSM = CONFIG_LSM_MMAP_MIN_ADDR */</comment>

<comment type="block">/*
 * Update mmap_min_addr = max(dac_mmap_min_addr, CONFIG_LSM_MMAP_MIN_ADDR)
 */</comment>
<function><type><specifier>static</specifier> <name>void</name></type> <name>update_mmap_min_addr</name><parameter_list>(<parameter><decl><type><name>void</name></type></decl></parameter>)</parameter_list>
<block>{<block_content>
<cpp:ifdef>#<cpp:directive>ifdef</cpp:directive> <name>CONFIG_LSM_MMAP_MIN_ADDR</name></cpp:ifdef>
	<if_stmt><if>if <condition>(<expr><name>dac_mmap_min_addr</name> <operator>&gt;</operator> <name>CONFIG_LSM_MMAP_MIN_ADDR</name></expr>)</condition><block type="pseudo"><block_content>
		<expr_stmt><expr><name>mmap_min_addr</name> <operator>=</operator> <name>dac_mmap_min_addr</name></expr>;</expr_stmt></block_content></block></if>
	<else>else<block type="pseudo"><block_content>
		<expr_stmt><expr><name>mmap_min_addr</name> <operator>=</operator> <name>CONFIG_LSM_MMAP_MIN_ADDR</name></expr>;</expr_stmt></block_content></block></else></if_stmt>
<cpp:else>#<cpp:directive>else</cpp:directive></cpp:else>
	<expr_stmt><expr><name>mmap_min_addr</name> <operator>=</operator> <name>dac_mmap_min_addr</name></expr>;</expr_stmt>
<cpp:endif>#<cpp:directive>endif</cpp:directive></cpp:endif>
</block_content>}</block></function>

<comment type="block">/*
 * sysctl handler which just sets dac_mmap_min_addr = the new value and then
 * calls update_mmap_min_addr() so non MAP_FIXED hints get rounded properly
 */</comment>
<function><type><name>int</name></type> <name>mmap_min_addr_handler</name><parameter_list>(<parameter><decl><type><name><name>struct</name> <name>ctl_table</name></name> <modifier>*</modifier></type><name>table</name></decl></parameter>, <parameter><decl><type><name>int</name></type> <name>write</name></decl></parameter>,
			  <parameter><decl><type><name>void</name> <modifier>*</modifier></type><name>buffer</name></decl></parameter>, <parameter><decl><type><name>size_t</name> <modifier>*</modifier></type><name>lenp</name></decl></parameter>, <parameter><decl><type><name>loff_t</name> <modifier>*</modifier></type><name>ppos</name></decl></parameter>)</parameter_list>
<block>{<block_content>
	<decl_stmt><decl><type><name>int</name></type> <name>ret</name></decl>;</decl_stmt>

	<if_stmt><if>if <condition>(<expr><name>write</name> <operator>&amp;&amp;</operator> <operator>!</operator><call><name>capable</name><argument_list>(<argument><expr><name>CAP_SYS_RAWIO</name></expr></argument>)</argument_list></call></expr>)</condition><block type="pseudo"><block_content>
		<return>return <expr><operator>-</operator><name>EPERM</name></expr>;</return></block_content></block></if></if_stmt>

	<expr_stmt><expr><name>ret</name> <operator>=</operator> <call><name>proc_doulongvec_minmax</name><argument_list>(<argument><expr><name>table</name></expr></argument>, <argument><expr><name>write</name></expr></argument>, <argument><expr><name>buffer</name></expr></argument>, <argument><expr><name>lenp</name></expr></argument>, <argument><expr><name>ppos</name></expr></argument>)</argument_list></call></expr>;</expr_stmt>

	<expr_stmt><expr><call><name>update_mmap_min_addr</name><argument_list>()</argument_list></call></expr>;</expr_stmt>

	<return>return <expr><name>ret</name></expr>;</return>
</block_content>}</block></function>

<function><type><specifier>static</specifier> <name>int</name> <name>__init</name></type> <name>init_mmap_min_addr</name><parameter_list>(<parameter><decl><type><name>void</name></type></decl></parameter>)</parameter_list>
<block>{<block_content>
	<expr_stmt><expr><call><name>update_mmap_min_addr</name><argument_list>()</argument_list></call></expr>;</expr_stmt>

	<return>return <expr><literal type="number">0</literal></expr>;</return>
</block_content>}</block></function>
<expr_stmt><expr><call><name>pure_initcall</name><argument_list>(<argument><expr><name>init_mmap_min_addr</name></expr></argument>)</argument_list></call></expr>;</expr_stmt>
</unit>
		)";
};
