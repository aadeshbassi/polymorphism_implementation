#include "runtime.h"

runtime::runtime()
{
	std::cout << "Runtime Parent Constructor!!!!" << std::endl;
}

void runtime::print()
{
	std::cout << "Print Fn of Parent !!!" << std::endl;
}

runtime::~runtime()
{
	std::cout << "Runtime Parent Destructor!!!!" << std::endl;
}


child::child()
{
	std::cout << "Runtime Child Constructor!!!!" << std::endl;
}

void child::print()
{
	std::cout << "Print Fn of Child !!!" << std::endl;
}

child::~child()
{
	std::cout << "Runtime Child Destructor!!!!" << std::endl;
}