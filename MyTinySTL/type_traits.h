#ifndef MYTINYSTL_TYPE_TRAITS_H_
#define MYTINYSTL_TYPE_TRAITS_H_

// 这个头文件包含类型萃取的模板，萃取整数类型的模板
// 定义两个空结构体，只用来表现类型
// 把 c++ 内置类型与原生指针表现为 __true_type，其他类型都表现为 __false_type
// 把 c++ 内置类型认为是整数型别，表现为 __true_type，其他类型都表现为 __false_type

namespace MyTinySTL {

	// 以下两个空结构体只是为了让模板推导机制返回一个类型
	struct __true_type {};
	struct __false_type {};
	
	template <class type>
	struct __type_traits {
		typedef __true_type		this_dummy_member_must_be_first;
		// 表示这个 __type_traits 是 MyTinySTL 中专用的结构

		typedef __false_type    has_trivial_default_constructor;
		typedef __false_type    has_trivial_copy_constructor;
		typedef __false_type    has_trivial_assignment_operator;
		typedef __false_type    has_trivial_destructor;
		typedef __false_type    is_POD_type;
	};

	//萃取类型特性，对所有 C++ 标量型别提供特化版本
	template<>	struct __type_traits<bool> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<char> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<signed char> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<unsigned char> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<short> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<unsigned short> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<int> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<unsigned int> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<long> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<unsigned long> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<long long> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<unsigned long long> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<float> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<double> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<long double> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<char*> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<signed char*> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<unsigned char*> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<const char*> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<const signed char*> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	template<>	struct __type_traits<const unsigned char*> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	//针对原生指针设计 __type_traits 偏特化版本
	template <class T>
	struct __type_traits<T*> {
		typedef __true_type    has_trivial_default_constructor;
		typedef __true_type    has_trivial_copy_constructor;
		typedef __true_type    has_trivial_assignment_operator;
		typedef __true_type    has_trivial_destructor;
		typedef __true_type    is_POD_type;
	};

	//判断是否为整数类型
	template <class Type>
	struct __is_integer {
		typedef __false_type	is_integer;
	};

	template<> struct __is_integer<bool> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<char> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<signed char> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<unsigned char> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<short> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<unsigned short> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<int> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<unsigned int> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<long> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<unsigned long> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<long long> {
		typedef __true_type		is_integer;
	};

	template<> struct __is_integer<unsigned long long> {
		typedef __true_type		is_integer;
	};
}
#endif // !MYTINYSTL_TYPE_TRAITS_H_
