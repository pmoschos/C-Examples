#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    double x = 3.7849; // Declare a double variable 'x' and initialize it with 3.7849

    // Print the value of 'x'
    cout << "To x einai " << x << endl;

    // Cast 'x' to int and print it
    cout << "To (int)x mas dinei " << (int)x << endl;

    // Show that the original value of 'x' hasn't changed
    cout << "To x omws den allaxe. Paramenei " << x << endl;

    // Pause the system for viewing the output
    system("pause"); // Note: This is system-specific and might not work on non-Windows systems

    return 0;
}
