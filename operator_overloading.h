/*
sizeof
typeid
Scope resolution(::)
Class member access operators(.(dot), .* (pointer to member operator))
Ternary or conditional(? : )
Operator cannot be overloaded
*/

#pragma once
#include <iostream>
#include <fstream>
typedef struct{
	int value;
	int size;
}packet;

class operator_overloading
{
public:
	packet my_value{};
	operator_overloading() {
		my_value.value = 0;
		my_value.size = 0;
	}
	friend std::ostream& operator << (std::ostream& os, const operator_overloading& value);
	friend std::istream& operator >> (std::istream& is, operator_overloading& value);
	operator_overloading& operator + (operator_overloading& o);
	operator float();
	void print();
	~operator_overloading() {}
};

 
