#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    double x = 8349.84; // Declare a double variable
    float y = 8438.94f; // Declare a float variable
    long double z = 9723947; // Declare a long double variable

    // Output the size of each variable
    cout << "Size of double x: " << sizeof(x) << " bytes" << endl;
    cout << "Size of float y: " << sizeof(y) << " bytes" << endl;
    cout << "Size of long double z: " << sizeof(z) << " bytes" << endl;

    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability

    return 0;
}