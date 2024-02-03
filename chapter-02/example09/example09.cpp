#include <iostream>
// http://www.asciitable.com/
using namespace std;

int x = 10; // Global variable (global scope)

namespace A {
    int x = 15; // Variable x within namespace A
    int y = 20; // Variable y within namespace A
}

int main(void)
{
    cout << "The global x is " << ::x << endl; // Output the global variable "x" using the scope resolution operator (::)
    cout << "The x in namespace A is " << A::x << endl; // Output the variable "x" within namespace A
    
    system("pause"); // Pause the system to view the output before the console closes
    return 0;
}
