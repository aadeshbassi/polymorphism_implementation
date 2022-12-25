#include "operator_overloading.h"

void operator_overloading::print()
{
	std::cout << *(this);
}


std::istream& operator >> (std::istream& is, operator_overloading& v)
{
    is >> v.my_value.value;
    is >> v.my_value.size;
    return is;
}

std::ostream& operator << (std::ostream& os, const operator_overloading& v)
{
    os << "The value of the packet is " << v.my_value.value<<std::endl;
    os << "The size of the packet is " << v.my_value.size << std::endl;
    return os;
}

operator_overloading& operator_overloading::operator + (operator_overloading& o)
{
    operator_overloading out;
    out.my_value.value = this->my_value.value + o.my_value.value;
    out.my_value.size = this->my_value.size + o.my_value.size;
    return out;
}

operator_overloading::operator float() {
    return float(my_value.value) / float(my_value.size);
}
