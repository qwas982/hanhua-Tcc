/* keywords */
     DEF(TOK_INT, "int")
     DEF(TOK_VOID, "void")
     DEF(TOK_CHAR, "char")
     DEF(TOK_IF, "if")
     DEF(TOK_ELSE, "else")
     DEF(TOK_WHILE, "while")
     DEF(TOK_BREAK, "break")
     DEF(TOK_RETURN, "return")
     DEF(TOK_FOR, "for")
     DEF(TOK_EXTERN, "extern")
     DEF(TOK_STATIC, "static")
     DEF(TOK_UNSIGNED, "unsigned")
     DEF(TOK_GOTO, "goto")
     DEF(TOK_DO, "do")
     DEF(TOK_CONTINUE, "continue")
     DEF(TOK_SWITCH, "switch")
     DEF(TOK_CASE, "case")
	 
/* 汉化关键字或保留字 */
	 DEF(TOK_INT_CN, "整")
	 DEF(TOK_VOID_CN, "空")
	 DEF(TOK_CHAR_CN, "字符")
	 DEF(TOK_IF_CN, "若")
	 DEF(TOK_ELSE_CN, "反之")
	 DEF(TOK_WHILE_CN, "重复")
	 DEF(TOK_BREAK_CN, "打断")
	 DEF(TOK_RETURN_CN, "返回")
	 DEF(TOK_FOR_CN, "循环")
	 DEF(TOK_EXTERN_CN, "外部")
	 DEF(TOK_STATIC_CN, "静态")
	 DEF(TOK_UNSIGNED_CN, "无符号")
	 DEF(TOK_GOTO_CN, "跳转")
	 DEF(TOK_DO_CN, "当")
	 DEF(TOK_CONTINUE_CN, "继续")
	 DEF(TOK_SWITCH_CN, "岔路")
	 DEF(TOK_CASE_CN, "状况")
	 
     DEF(TOK_CONST1, "const")
     DEF(TOK_CONST2, "__const") /* gcc keyword */
     DEF(TOK_CONST3, "__const__") /* gcc keyword */
     DEF(TOK_VOLATILE1, "volatile")
     DEF(TOK_VOLATILE2, "__volatile") /* gcc keyword */
     DEF(TOK_VOLATILE3, "__volatile__") /* gcc keyword */
     DEF(TOK_LONG, "long")
     DEF(TOK_REGISTER, "register")
     DEF(TOK_SIGNED1, "signed")
     DEF(TOK_SIGNED2, "__signed") /* gcc keyword */
     DEF(TOK_SIGNED3, "__signed__") /* gcc keyword */
     DEF(TOK_AUTO, "auto")
     DEF(TOK_INLINE1, "inline")
     DEF(TOK_INLINE2, "__inline") /* gcc keyword */
     DEF(TOK_INLINE3, "__inline__") /* gcc keyword */
     DEF(TOK_RESTRICT1, "restrict")
     DEF(TOK_RESTRICT2, "__restrict")
     DEF(TOK_RESTRICT3, "__restrict__")
     DEF(TOK_EXTENSION, "__extension__") /* gcc keyword */

     DEF(TOK_GENERIC, "_Generic")
	 
     DEF(TOK_CONST1_CN, "常量")
     DEF(TOK_CONST2_CN, "__常量") /* gcc 关键字 */
     DEF(TOK_CONST3_CN, "__常量__") /* gcc 关键字 */
     DEF(TOK_VOLATILE1_CN, "易变")
     DEF(TOK_VOLATILE2_CN, "__易变") /* gcc 关键字 */
     DEF(TOK_VOLATILE3_CN, "__易变__") /* gcc 关键字 */
     DEF(TOK_LONG_CN, "长整")
     DEF(TOK_REGISTER_CN, "寄存器")
     DEF(TOK_SIGNED1_CN, "符号")
     DEF(TOK_SIGNED2_CN, "__符号") /* gcc 关键字 */
     DEF(TOK_SIGNED3_CN, "__符号__") /* gcc 关键字 */
     DEF(TOK_AUTO_CN, "自动")
     DEF(TOK_INLINE1_CN, "内联")
     DEF(TOK_INLINE2_CN, "__内联") /* gcc 关键字 */
     DEF(TOK_INLINE3_CN, "__内联__") /* gcc 关键字 */
     DEF(TOK_RESTRICT1_CN, "限定")
     DEF(TOK_RESTRICT2_CN, "__限定")
     DEF(TOK_RESTRICT3_CN, "__限定__")
     DEF(TOK_EXTENSION_CN, "__扩展__") /* gcc 关键字 */

     DEF(TOK_GENERIC_CN, "通用")

     DEF(TOK_FLOAT, "float")
     DEF(TOK_DOUBLE, "double")
     DEF(TOK_BOOL, "_Bool")
     DEF(TOK_SHORT, "short")
     DEF(TOK_STRUCT, "struct")
     DEF(TOK_UNION, "union")
     DEF(TOK_TYPEDEF, "typedef")
     DEF(TOK_DEFAULT, "default")
     DEF(TOK_ENUM, "enum")
     DEF(TOK_SIZEOF, "sizeof")
     DEF(TOK_ATTRIBUTE1, "__attribute")
     DEF(TOK_ATTRIBUTE2, "__attribute__")
     DEF(TOK_ALIGNOF1, "__alignof")
     DEF(TOK_ALIGNOF2, "__alignof__")
     DEF(TOK_TYPEOF1, "typeof")
     DEF(TOK_TYPEOF2, "__typeof")
     DEF(TOK_TYPEOF3, "__typeof__")
     DEF(TOK_LABEL, "__label__")
     DEF(TOK_ASM1, "asm")
     DEF(TOK_ASM2, "__asm")
     DEF(TOK_ASM3, "__asm__")

#ifdef TCC_TARGET_ARM64
     DEF(TOK_UINT128, "__uint128_t")
#endif

     DEF(TOK_FLOAT_CN, "浮点")
     DEF(TOK_DOUBLE_CN, "双浮")
     DEF(TOK_BOOL_CN, "布尔")
     DEF(TOK_SHORT_CN, "短整")
     DEF(TOK_STRUCT_CN, "结构体")
     DEF(TOK_UNION_CN, "共用体")
     DEF(TOK_TYPEDEF_CN, "类型定义")
     DEF(TOK_DEFAULT_CN, "默认")
     DEF(TOK_ENUM_CN, "枚举")
     DEF(TOK_SIZEOF_CN, "求大小")
     DEF(TOK_ATTRIBUTE1_CN, "__属性")
     DEF(TOK_ATTRIBUTE2_CN, "__属性__")
     DEF(TOK_ALIGNOF1_CN, "__求对齐")
     DEF(TOK_ALIGNOF2_CN, "__求对齐__")
     DEF(TOK_TYPEOF1_CN, "求类型")
     DEF(TOK_TYPEOF2_CN, "__求类型")
     DEF(TOK_TYPEOF3_CN, "__求类型__")
     DEF(TOK_LABEL_CN, "__标签__")
     DEF(TOK_ASM1_CN, "汇编")
     DEF(TOK_ASM2_CN, "__汇编")
     DEF(TOK_ASM3_CN, "__汇编__")

#ifdef TCC_TARGET_ARM64
     DEF(TOK_UINT128_CN, "无整128")
#endif

/*********************************************************************/
/* the following are not keywords. They are included to ease parsing */
/* preprocessor only */
     DEF(TOK_DEFINE, "define")
     DEF(TOK_INCLUDE, "include")
     DEF(TOK_INCLUDE_NEXT, "include_next")
     DEF(TOK_IFDEF, "ifdef")
     DEF(TOK_IFNDEF, "ifndef")
     DEF(TOK_ELIF, "elif")
     DEF(TOK_ENDIF, "endif")
     DEF(TOK_DEFINED, "defined")
     DEF(TOK_UNDEF, "undef")
     DEF(TOK_ERROR, "error")
     DEF(TOK_WARNING, "warning")
     DEF(TOK_LINE, "line")
     DEF(TOK_PRAGMA, "pragma")
     DEF(TOK___LINE__, "__LINE__")
     DEF(TOK___FILE__, "__FILE__")
     DEF(TOK___DATE__, "__DATE__")
     DEF(TOK___TIME__, "__TIME__")
     DEF(TOK___FUNCTION__, "__FUNCTION__")
     DEF(TOK___VA_ARGS__, "__VA_ARGS__")
     DEF(TOK___COUNTER__, "__COUNTER__")
	 
/*********************************************************************/
/* 以下不是关键字。 它们被包括到简单语法分析 */
/* 仅预处理器 */
     DEF(TOK_DEFINE_CN, "定义")
     DEF(TOK_INCLUDE_CN, "包括")
     DEF(TOK_INCLUDE_NEXT_CN, "包括下个")
     DEF(TOK_IFDEF_CN, "若定义")
     DEF(TOK_IFNDEF_CN, "若未定义")
     DEF(TOK_ELIF_CN, "反之若")
     DEF(TOK_ENDIF_CN, "终若")
     DEF(TOK_DEFINED_CN, "已定义")
     DEF(TOK_UNDEF_CN, "取消定义")
     DEF(TOK_ERROR_CN, "错误")
     DEF(TOK_WARNING_CN, "警告")
     DEF(TOK_LINE_CN, "行")
     DEF(TOK_PRAGMA_CN, "杂注")
     DEF(TOK___LINE___CN, "__行线__")
     DEF(TOK___FILE___CN, "__文件__")
     DEF(TOK___DATE___CN, "__日期__")
     DEF(TOK___TIME___CN, "__时间__")
     DEF(TOK___FUNCTION___CN, "__函数__")
     DEF(TOK___VA_ARGS___CN, "__变参__")
     DEF(TOK___COUNTER___CN, "__计数器__")

/* special identifiers */
     DEF(TOK___FUNC__, "__func__")
	 
/* 专用标识符 */
     DEF(TOK___FUNC___CN, "__函__")	 

/* special floating point values */
     DEF(TOK___NAN__, "__nan__")
     DEF(TOK___SNAN__, "__snan__")
     DEF(TOK___INF__, "__inf__")

/* 专用浮点值 */
     DEF(TOK___NAN___CN, "非数")
     DEF(TOK___SNAN___CN, "信令非数")
     DEF(TOK___INF___CN, "无穷")
	 
/* attribute identifiers */
/* XXX: handle all tokens generically since speed is not critical */
     DEF(TOK_SECTION1, "section")
     DEF(TOK_SECTION2, "__section__")
     DEF(TOK_ALIGNED1, "aligned")
     DEF(TOK_ALIGNED2, "__aligned__")
     DEF(TOK_PACKED1, "packed")
     DEF(TOK_PACKED2, "__packed__")
     DEF(TOK_WEAK1, "weak")
     DEF(TOK_WEAK2, "__weak__")
     DEF(TOK_ALIAS1, "alias")
     DEF(TOK_ALIAS2, "__alias__")
     DEF(TOK_UNUSED1, "unused")
     DEF(TOK_UNUSED2, "__unused__")
     DEF(TOK_CDECL1, "cdecl")
     DEF(TOK_CDECL2, "__cdecl")
     DEF(TOK_CDECL3, "__cdecl__")
     DEF(TOK_STDCALL1, "stdcall")
     DEF(TOK_STDCALL2, "__stdcall")
     DEF(TOK_STDCALL3, "__stdcall__")
     DEF(TOK_FASTCALL1, "fastcall")
     DEF(TOK_FASTCALL2, "__fastcall")
     DEF(TOK_FASTCALL3, "__fastcall__")

     DEF(TOK_MODE, "__mode__")
     DEF(TOK_MODE_QI, "__QI__")
     DEF(TOK_MODE_DI, "__DI__")
     DEF(TOK_MODE_HI, "__HI__")
     DEF(TOK_MODE_SI, "__SI__")
     DEF(TOK_MODE_word, "__word__")

     DEF(TOK_DLLEXPORT, "dllexport")
     DEF(TOK_DLLIMPORT, "dllimport")
     DEF(TOK_NORETURN1, "noreturn")
     DEF(TOK_NORETURN2, "__noreturn__")
     DEF(TOK_VISIBILITY1, "visibility")
     DEF(TOK_VISIBILITY2, "__visibility__")
     DEF(TOK_builtin_types_compatible_p, "__builtin_types_compatible_p")
     DEF(TOK_builtin_choose_expr, "__builtin_choose_expr")
     DEF(TOK_builtin_constant_p, "__builtin_constant_p")
     DEF(TOK_builtin_frame_address, "__builtin_frame_address")
     DEF(TOK_builtin_return_address, "__builtin_return_address")
     DEF(TOK_builtin_expect, "__builtin_expect")
#ifdef TCC_TARGET_X86_64
#ifdef TCC_TARGET_PE
     DEF(TOK_builtin_va_start, "__builtin_va_start")
#else
     DEF(TOK_builtin_va_arg_types, "__builtin_va_arg_types")
#endif
#endif
     DEF(TOK_REGPARM1, "regparm")
     DEF(TOK_REGPARM2, "__regparm__")

#ifdef TCC_TARGET_ARM64
     DEF(TOK___va_start, "__va_start")
     DEF(TOK___va_arg, "__va_arg")
#endif

/* 特征标识符 */
/* XXX: 由于速度不是关键通常操作全部令牌 */
     DEF(TOK_SECTION1_CN, "区段")
     DEF(TOK_SECTION2_CN, "__区段__")
     DEF(TOK_ALIGNED1_CN, "对齐")
     DEF(TOK_ALIGNED2_CN, "__对齐__")
     DEF(TOK_PACKED1_CN, "字节对齐")
     DEF(TOK_PACKED2_CN, "__字节对齐__")
     DEF(TOK_WEAK1_CN, "弱化")
     DEF(TOK_WEAK2_CN, "__弱化__")
     DEF(TOK_ALIAS1_CN, "别名")
     DEF(TOK_ALIAS2_CN, "__别名__")
     DEF(TOK_UNUSED1_CN, "不用")
     DEF(TOK_UNUSED2_CN, "__不用__")
     DEF(TOK_CDECL1_CN, "C调用约定")
     DEF(TOK_CDECL2_CN, "__C调用约定")
     DEF(TOK_CDECL3_CN, "__C调用约定__")
     DEF(TOK_STDCALL1_CN, "标准调用")
     DEF(TOK_STDCALL2_CN, "__标准调用")
     DEF(TOK_STDCALL3_CN, "__标准调用__")
     DEF(TOK_FASTCALL1_CN, "快速调用")
     DEF(TOK_FASTCALL2_CN, "__快速调用")
     DEF(TOK_FASTCALL3_CN, "__快速调用__")

     DEF(TOK_MODE_CN, "模式")
     DEF(TOK_MODE_QI_CN, "__QI__")
     DEF(TOK_MODE_DI_CN, "__DI__")
     DEF(TOK_MODE_HI_CN, "__HI__")
     DEF(TOK_MODE_SI_CN, "__SI__")
     DEF(TOK_MODE_word_CN, "字")

     DEF(TOK_DLLEXPORT_CN, "动态链接库导出")
     DEF(TOK_DLLIMPORT_CN, "动态链接库导入")
     DEF(TOK_NORETURN1_CN, "不返回")
     DEF(TOK_NORETURN2_CN, "__不返回__")
     DEF(TOK_VISIBILITY1_CN, "可见")
     DEF(TOK_VISIBILITY2_CN, "__可见__")
     DEF(TOK_builtin_types_compatible_p_CN, "内置类型兼容p")
     DEF(TOK_builtin_choose_expr_CN, "内置选择表达式")
     DEF(TOK_builtin_constant_p_CN, "内置常量p")
     DEF(TOK_builtin_frame_address_CN, "内置帧地址")
     DEF(TOK_builtin_return_address_CN, "内置返回地址")
     DEF(TOK_builtin_expect_CN, "内置预期")
#ifdef TCC_TARGET_X86_64
#ifdef TCC_TARGET_PE
     DEF(TOK_builtin_va_start_CN, "内置变始")
#else
     DEF(TOK_builtin_va_arg_types_CN, "内置变参数类型")
#endif
#endif
     DEF(TOK_REGPARM1_CN, "传值")
     DEF(TOK_REGPARM2_CN, "__传值__")

#ifdef TCC_TARGET_ARM64
     DEF(TOK___va_start_CN, "变始")
     DEF(TOK___va_arg_CN, "变参数")
#endif

/* pragma */
     DEF(TOK_pack, "pack")
#if !defined(TCC_TARGET_I386) && !defined(TCC_TARGET_X86_64)
     /* already defined for assembler */
     DEF(TOK_ASM_push, "push")
     DEF(TOK_ASM_pop, "pop")
#endif
     DEF(TOK_comment, "comment")
     DEF(TOK_lib, "lib")
     DEF(TOK_push_macro, "push_macro")
     DEF(TOK_pop_macro, "pop_macro")
     DEF(TOK_once, "once")
     DEF(TOK_option, "option")
	 
/* 杂注 */
     DEF(TOK_pack_CN, "包对齐")
#if !defined(TCC_TARGET_I386) && !defined(TCC_TARGET_X86_64)
     /* 已经为汇编器定义的 */
     DEF(TOK_ASM_push_CN, "推")
     DEF(TOK_ASM_pop_CN, "弹")
#endif
     DEF(TOK_comment_CN, "注释")
     DEF(TOK_lib_CN, "库")
     DEF(TOK_push_macro_CN, "推宏")
     DEF(TOK_pop_macro_CN, "弹宏")
     DEF(TOK_once_CN, "一次")
     DEF(TOK_option_CN, "选项")

/* builtin functions or variables */
#ifndef TCC_ARM_EABI
     DEF(TOK_memcpy, "memcpy")
     DEF(TOK_memmove, "memmove")
     DEF(TOK_memset, "memset")
     DEF(TOK___divdi3, "__divdi3")
     DEF(TOK___moddi3, "__moddi3")
     DEF(TOK___udivdi3, "__udivdi3")
     DEF(TOK___umoddi3, "__umoddi3")
     DEF(TOK___ashrdi3, "__ashrdi3")
     DEF(TOK___lshrdi3, "__lshrdi3")
     DEF(TOK___ashldi3, "__ashldi3")
     DEF(TOK___floatundisf, "__floatundisf")
     DEF(TOK___floatundidf, "__floatundidf")
# ifndef TCC_ARM_VFP
     DEF(TOK___floatundixf, "__floatundixf")
     DEF(TOK___fixunsxfdi, "__fixunsxfdi")
# endif
     DEF(TOK___fixunssfdi, "__fixunssfdi")
     DEF(TOK___fixunsdfdi, "__fixunsdfdi")
#endif

#if defined TCC_TARGET_ARM
# ifdef TCC_ARM_EABI
     DEF(TOK_memcpy, "__aeabi_memcpy")
     DEF(TOK_memcpy4, "__aeabi_memcpy4")
     DEF(TOK_memcpy8, "__aeabi_memcpy8")
     DEF(TOK_memmove, "__aeabi_memmove")
     DEF(TOK_memset, "__aeabi_memset")
     DEF(TOK___aeabi_ldivmod, "__aeabi_ldivmod")
     DEF(TOK___aeabi_uldivmod, "__aeabi_uldivmod")
     DEF(TOK___aeabi_idivmod, "__aeabi_idivmod")
     DEF(TOK___aeabi_uidivmod, "__aeabi_uidivmod")
     DEF(TOK___divsi3, "__aeabi_idiv")
     DEF(TOK___udivsi3, "__aeabi_uidiv")
     DEF(TOK___floatdisf, "__aeabi_l2f")
     DEF(TOK___floatdidf, "__aeabi_l2d")
     DEF(TOK___fixsfdi, "__aeabi_f2lz")
     DEF(TOK___fixdfdi, "__aeabi_d2lz")
     DEF(TOK___ashrdi3, "__aeabi_lasr")
     DEF(TOK___lshrdi3, "__aeabi_llsr")
     DEF(TOK___ashldi3, "__aeabi_llsl")
     DEF(TOK___floatundisf, "__aeabi_ul2f")
     DEF(TOK___floatundidf, "__aeabi_ul2d")
     DEF(TOK___fixunssfdi, "__aeabi_f2ulz")
     DEF(TOK___fixunsdfdi, "__aeabi_d2ulz")
# else
     DEF(TOK___modsi3, "__modsi3")
     DEF(TOK___umodsi3, "__umodsi3")
     DEF(TOK___divsi3, "__divsi3")
     DEF(TOK___udivsi3, "__udivsi3")
     DEF(TOK___floatdisf, "__floatdisf")
     DEF(TOK___floatdidf, "__floatdidf")
#  ifndef TCC_ARM_VFP
     DEF(TOK___floatdixf, "__floatdixf")
     DEF(TOK___fixunssfsi, "__fixunssfsi")
     DEF(TOK___fixunsdfsi, "__fixunsdfsi")
     DEF(TOK___fixunsxfsi, "__fixunsxfsi")
     DEF(TOK___fixxfdi, "__fixxfdi")
#  endif
     DEF(TOK___fixsfdi, "__fixsfdi")
     DEF(TOK___fixdfdi, "__fixdfdi")
# endif
#endif

#if defined TCC_TARGET_C67
     DEF(TOK__divi, "_divi")
     DEF(TOK__divu, "_divu")
     DEF(TOK__divf, "_divf")
     DEF(TOK__divd, "_divd")
     DEF(TOK__remi, "_remi")
     DEF(TOK__remu, "_remu")
#endif

#if defined TCC_TARGET_I386
     DEF(TOK___fixsfdi, "__fixsfdi")
     DEF(TOK___fixdfdi, "__fixdfdi")
     DEF(TOK___fixxfdi, "__fixxfdi")
#endif

#if defined TCC_TARGET_I386 || defined TCC_TARGET_X86_64
     DEF(TOK_alloca, "alloca")
#endif

#if defined TCC_TARGET_PE
     DEF(TOK___chkstk, "__chkstk")
#endif
#ifdef TCC_TARGET_ARM64
     DEF(TOK___arm64_clear_cache, "__arm64_clear_cache")
     DEF(TOK___addtf3, "__addtf3")
     DEF(TOK___subtf3, "__subtf3")
     DEF(TOK___multf3, "__multf3")
     DEF(TOK___divtf3, "__divtf3")
     DEF(TOK___extendsftf2, "__extendsftf2")
     DEF(TOK___extenddftf2, "__extenddftf2")
     DEF(TOK___trunctfsf2, "__trunctfsf2")
     DEF(TOK___trunctfdf2, "__trunctfdf2")
     DEF(TOK___fixtfsi, "__fixtfsi")
     DEF(TOK___fixtfdi, "__fixtfdi")
     DEF(TOK___fixunstfsi, "__fixunstfsi")
     DEF(TOK___fixunstfdi, "__fixunstfdi")
     DEF(TOK___floatsitf, "__floatsitf")
     DEF(TOK___floatditf, "__floatditf")
     DEF(TOK___floatunsitf, "__floatunsitf")
     DEF(TOK___floatunditf, "__floatunditf")
     DEF(TOK___eqtf2, "__eqtf2")
     DEF(TOK___netf2, "__netf2")
     DEF(TOK___lttf2, "__lttf2")
     DEF(TOK___letf2, "__letf2")
     DEF(TOK___gttf2, "__gttf2")
     DEF(TOK___getf2, "__getf2")
#endif

/* 内置函数或变量 */
#ifndef TCC_ARM_EABI
     DEF(TOK_memcpy_CN, "内存复制")
     DEF(TOK_memmove_CN, "内存移动")
     DEF(TOK_memset_CN, "内存放置")
     DEF(TOK___divdi3_CN, "__divdi3")
     DEF(TOK___moddi3_CN, "__moddi3")
     DEF(TOK___udivdi3_CN, "__udivdi3")
     DEF(TOK___umoddi3_CN, "__umoddi3")
     DEF(TOK___ashrdi3_CN, "__ashrdi3")
     DEF(TOK___lshrdi3_CN, "__lshrdi3")
     DEF(TOK___ashldi3_CN, "__ashldi3")
     DEF(TOK___floatundisf_CN, "__floatundisf")
     DEF(TOK___floatundidf_CN, "__floatundidf")
# ifndef TCC_ARM_VFP
     DEF(TOK___floatundixf_CN, "__floatundixf")
     DEF(TOK___fixunsxfdi_CN, "__fixunsxfdi")
# endif
     DEF(TOK___fixunssfdi_CN, "__fixunssfdi")
     DEF(TOK___fixunsdfdi_CN, "__fixunsdfdi")
#endif

#if defined TCC_TARGET_ARM
# ifdef TCC_ARM_EABI
     DEF(TOK_memcpy_CN, "__aeabi_memcpy")
     DEF(TOK_memcpy4_CN, "__aeabi_memcpy4")
     DEF(TOK_memcpy8_CN, "__aeabi_memcpy8")
     DEF(TOK_memmove_CN, "__aeabi_memmove")
     DEF(TOK_memset_CN, "__aeabi_memset")
     DEF(TOK___aeabi_ldivmod_CN, "__aeabi_ldivmod")
     DEF(TOK___aeabi_uldivmod_CN, "__aeabi_uldivmod")
     DEF(TOK___aeabi_idivmod_CN, "__aeabi_idivmod")
     DEF(TOK___aeabi_uidivmod_CN, "__aeabi_uidivmod")
     DEF(TOK___divsi3_CN, "__aeabi_idiv")
     DEF(TOK___udivsi3_CN, "__aeabi_uidiv")
     DEF(TOK___floatdisf_CN, "__aeabi_l2f")
     DEF(TOK___floatdidf_CN, "__aeabi_l2d")
     DEF(TOK___fixsfdi_CN, "__aeabi_f2lz")
     DEF(TOK___fixdfdi_CN, "__aeabi_d2lz")
     DEF(TOK___ashrdi3_CN, "__aeabi_lasr")
     DEF(TOK___lshrdi3_CN, "__aeabi_llsr")
     DEF(TOK___ashldi3_CN, "__aeabi_llsl")
     DEF(TOK___floatundisf_CN, "__aeabi_ul2f")
     DEF(TOK___floatundidf_CN, "__aeabi_ul2d")
     DEF(TOK___fixunssfdi_CN, "__aeabi_f2ulz")
     DEF(TOK___fixunsdfdi_CN, "__aeabi_d2ulz")
# else
     DEF(TOK___modsi3_CN, "__modsi3")
     DEF(TOK___umodsi3_CN, "__umodsi3")
     DEF(TOK___divsi3_CN, "__divsi3")
     DEF(TOK___udivsi3_CN, "__udivsi3")
     DEF(TOK___floatdisf_CN, "__floatdisf")
     DEF(TOK___floatdidf_CN, "__floatdidf")
#  ifndef TCC_ARM_VFP
     DEF(TOK___floatdixf_CN, "__floatdixf")
     DEF(TOK___fixunssfsi_CN, "__fixunssfsi")
     DEF(TOK___fixunsdfsi_CN, "__fixunsdfsi")
     DEF(TOK___fixunsxfsi_CN, "__fixunsxfsi")
     DEF(TOK___fixxfdi_CN, "__fixxfdi")
#  endif
     DEF(TOK___fixsfdi_CN, "__fixsfdi")
     DEF(TOK___fixdfdi_CN, "__fixdfdi")
# endif
#endif

#if defined TCC_TARGET_C67
     DEF(TOK__divi_CN, "_divi")
     DEF(TOK__divu_CN, "_divu")
     DEF(TOK__divf_CN, "_divf")
     DEF(TOK__divd_CN, "_divd")
     DEF(TOK__remi_CN, "_remi")
     DEF(TOK__remu_CN, "_remu")
#endif

#if defined TCC_TARGET_I386
     DEF(TOK___fixsfdi_CN, "__fixsfdi")
     DEF(TOK___fixdfdi_CN, "__fixdfdi")
     DEF(TOK___fixxfdi_CN, "__fixxfdi")
#endif

#if defined TCC_TARGET_I386 || defined TCC_TARGET_X86_64
     DEF(TOK_alloca_CN, "alloca")
#endif

#if defined TCC_TARGET_PE
     DEF(TOK___chkstk_CN, "检查栈")
#endif
#ifdef TCC_TARGET_ARM64
     DEF(TOK___arm64_clear_cache_CN, "arm64清除缓存")
     DEF(TOK___addtf3_CN, "__addtf3")
     DEF(TOK___subtf3_CN, "__subtf3")
     DEF(TOK___multf3_CN, "__multf3")
     DEF(TOK___divtf3_CN, "__divtf3")
     DEF(TOK___extendsftf2_CN, "__extendsftf2")
     DEF(TOK___extenddftf2_CN, "__extenddftf2")
     DEF(TOK___trunctfsf2_CN, "__trunctfsf2")
     DEF(TOK___trunctfdf2_CN, "__trunctfdf2")
     DEF(TOK___fixtfsi_CN, "__fixtfsi")
     DEF(TOK___fixtfdi_CN, "__fixtfdi")
     DEF(TOK___fixunstfsi_CN, "__fixunstfsi")
     DEF(TOK___fixunstfdi_CN, "__fixunstfdi")
     DEF(TOK___floatsitf_CN, "__floatsitf")
     DEF(TOK___floatditf_CN, "__floatditf")
     DEF(TOK___floatunsitf_CN, "__floatunsitf")
     DEF(TOK___floatunditf_CN, "__floatunditf")
     DEF(TOK___eqtf2_CN, "__eqtf2")
     DEF(TOK___netf2_CN, "__netf2")
     DEF(TOK___lttf2_CN, "__lttf2")
     DEF(TOK___letf2_CN, "__letf2")
     DEF(TOK___gttf2_CN, "__gttf2")
     DEF(TOK___getf2_CN, "__getf2")
#endif

/* bound checking symbols */
#ifdef CONFIG_TCC_BCHECK
     DEF(TOK___bound_ptr_add, "__bound_ptr_add")
     DEF(TOK___bound_ptr_indir1, "__bound_ptr_indir1")
     DEF(TOK___bound_ptr_indir2, "__bound_ptr_indir2")
     DEF(TOK___bound_ptr_indir4, "__bound_ptr_indir4")
     DEF(TOK___bound_ptr_indir8, "__bound_ptr_indir8")
     DEF(TOK___bound_ptr_indir12, "__bound_ptr_indir12")
     DEF(TOK___bound_ptr_indir16, "__bound_ptr_indir16")
     DEF(TOK___bound_main_arg, "__bound_main_arg")
     DEF(TOK___bound_local_new, "__bound_local_new")
     DEF(TOK___bound_local_delete, "__bound_local_delete")
# ifdef TCC_TARGET_PE
     DEF(TOK_malloc, "malloc")
     DEF(TOK_free, "free")
     DEF(TOK_realloc, "realloc")
     DEF(TOK_memalign, "memalign")
     DEF(TOK_calloc, "calloc")
# endif
     DEF(TOK_strlen, "strlen")
     DEF(TOK_strcpy, "strcpy")
#endif

/* 边界符号检查 */
#ifdef CONFIG_TCC_BCHECK
     DEF(TOK___bound_ptr_add_CN, "__bound_ptr_add")
     DEF(TOK___bound_ptr_indir1_CN, "__bound_ptr_indir1")
     DEF(TOK___bound_ptr_indir2_CN, "__bound_ptr_indir2")
     DEF(TOK___bound_ptr_indir4_CN, "__bound_ptr_indir4")
     DEF(TOK___bound_ptr_indir8_CN, "__bound_ptr_indir8")
     DEF(TOK___bound_ptr_indir12_CN, "__bound_ptr_indir12")
     DEF(TOK___bound_ptr_indir16_CN, "__bound_ptr_indir16")
     DEF(TOK___bound_main_arg_CN, "边界主参")
     DEF(TOK___bound_local_new_CN, "边界本地新建")
     DEF(TOK___bound_local_delete_CN, "边界本地删除")
# ifdef TCC_TARGET_PE
     DEF(TOK_malloc_CN, "内存分配")
     DEF(TOK_free_CN, "内存释放")
     DEF(TOK_realloc_CN, "重新分配")
     DEF(TOK_memalign_CN, "分配对齐")
     DEF(TOK_calloc_CN, "分配清零")
# endif
     DEF(TOK_strlen_CN, "字符串长度")
     DEF(TOK_strcpy_CN, "字符串复制")
#endif

/* Tiny Assembler */
 DEF_ASMDIR(byte)              /* must be first directive */
 DEF_ASMDIR(word)
 DEF_ASMDIR(align)
 DEF_ASMDIR(balign)
 DEF_ASMDIR(p2align)
 DEF_ASMDIR(set)
 DEF_ASMDIR(skip)
 DEF_ASMDIR(space)
 DEF_ASMDIR(string)
 DEF_ASMDIR(asciz)
 DEF_ASMDIR(ascii)
 DEF_ASMDIR(file)
 DEF_ASMDIR(globl)
 DEF_ASMDIR(global)
 DEF_ASMDIR(weak)
 DEF_ASMDIR(hidden)
 DEF_ASMDIR(ident)
 DEF_ASMDIR(size)
 DEF_ASMDIR(type)
 DEF_ASMDIR(text)
 DEF_ASMDIR(data)
 DEF_ASMDIR(bss)
 DEF_ASMDIR(previous)
 DEF_ASMDIR(pushsection)
 DEF_ASMDIR(popsection)
 DEF_ASMDIR(fill)
 DEF_ASMDIR(rept)
 DEF_ASMDIR(endr)
 DEF_ASMDIR(org)
 DEF_ASMDIR(quad)
#if defined(TCC_TARGET_I386)
 DEF_ASMDIR(code16)
 DEF_ASMDIR(code32)
#elif defined(TCC_TARGET_X86_64)
 DEF_ASMDIR(code64)
#endif
 DEF_ASMDIR(short)
 DEF_ASMDIR(long)
 DEF_ASMDIR(int)
 DEF_ASMDIR(section)            /* must be last directive */

/* Tiny 汇编器 */
 DEF_ASMDIR(字节)              /* 必须是第一个指令 */
 DEF_ASMDIR(字)
 DEF_ASMDIR(对齐)
 DEF_ASMDIR(b对齐)
 DEF_ASMDIR(p2对齐)
 DEF_ASMDIR(定)
 DEF_ASMDIR(跳过)
 DEF_ASMDIR(空间)
 DEF_ASMDIR(串)
 DEF_ASMDIR(asciz)
 DEF_ASMDIR(ascii)
 DEF_ASMDIR(文件)
 DEF_ASMDIR(全局)
 DEF_ASMDIR(全局的)
 DEF_ASMDIR(弱)
 DEF_ASMDIR(隐藏)
 DEF_ASMDIR(识别)
 DEF_ASMDIR(大小)
 DEF_ASMDIR(类型)
 DEF_ASMDIR(文本)
 DEF_ASMDIR(数据)
 DEF_ASMDIR(bss)
 DEF_ASMDIR(以前)
 DEF_ASMDIR(推区段)
 DEF_ASMDIR(弹区段)
 DEF_ASMDIR(填)
 DEF_ASMDIR(rept)
 DEF_ASMDIR(endr)
 DEF_ASMDIR(org)
 DEF_ASMDIR(quad)
#if defined(TCC_TARGET_I386)
 DEF_ASMDIR(代码16)
 DEF_ASMDIR(代码32)
#elif defined(TCC_TARGET_X86_64)
 DEF_ASMDIR(代码64)
#endif
 DEF_ASMDIR(短)
 DEF_ASMDIR(长)
 DEF_ASMDIR(整)
 DEF_ASMDIR(区段)            /* 必须是最后一个指令 */
 
#if defined TCC_TARGET_I386 || defined TCC_TARGET_X86_64
#include "i386-tok.h"
#endif
