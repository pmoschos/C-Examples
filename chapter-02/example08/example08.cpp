#include <iostream>
using namespace std;

int x = 10; // Global variable (global scope)

int main(void)
{
    cout << x << endl; // Output the global variable "x"
    int x = 1000; // Local variable (local to the main function)

    cout << x << endl; // Output the local variable "x" within the main function's scope
    {
        cout << x << endl; // Output the local variable "x" within the nested block's scope
        cout << ::x << endl; // Output the global variable "x" using the scope resolution operator
    }

    system("pause"); // Pause the system to view the output before the console closes
    return 0;
}
