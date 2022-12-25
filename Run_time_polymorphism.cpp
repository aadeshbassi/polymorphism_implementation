
#include "runtime.h"
#include "operator_overloading.h"

int main()
{
    std::cout << "Hello World!\n";
    child* son = new child();
    son->print();
    delete son;

    std::cout << "Child Section" << std::endl;

    runtime* parent = new child();
    parent->print();
    delete parent;
    std::cout << "Child Section" << std::endl;

    runtime* parent_1 = new runtime();
    parent_1->print();
    delete parent_1;

    operator_overloading op1;
    std::cout << "Enter the value :" << std::endl;
    std::cin >> op1;
    op1.print();
    operator_overloading op2;
    std::cout << "Enter the value :" << std::endl;
    std::cin >> op2;
    op2.print();
    operator_overloading op3 = op1+op2;
    op3.print();

    float value = op3;
    std::cout << value;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
