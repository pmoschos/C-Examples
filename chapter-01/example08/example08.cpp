#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    short x = 394;      // Declare a short integer
    int y = 8484;       // Declare a regular integer
    long z = 3884L;     // Declare a long integer
    long int w = 9347948;  // Declare a long int

    // Output the sizes of the variables
    cout << "Size of short x: " << sizeof(x) << " bytes" << endl;
    cout << "Size of int y: " << sizeof(y) << " bytes" << endl;
    cout << "Size of long z: " << sizeof(z) << " bytes" << endl;
    cout << "Size of long int w: " << sizeof(w) << " bytes" << endl;

    system("pause"); // Pause the system for viewing the output
    return 0;
}