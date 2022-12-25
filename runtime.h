#pragma once
#include <iostream>
class runtime
{
public:

	runtime();
	virtual void print();
	virtual ~runtime();
};


class child : public runtime
{
public:
	child();
	void print();
	~child();
};

