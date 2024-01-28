#include <iostream>
#include <cstdlib>  // For using the system function

using namespace std;

int main()
{
    int n;      // Declare an integer variable 'n'
    int m;      // Declare another integer variable 'm'
    double x;   // Declare a double variable 'x'

    // Print the size of 'n', 'm', and 'x' in bytes
    cout << "Size of n: " << sizeof(n) << " bytes" << endl;
    cout << "Size of m: " << sizeof(m) << " bytes" << endl;
    cout << "Size of x: " << sizeof(x) << " bytes" << endl;

    // Pause the system for viewing the output
    system("pause");  // Note: This is system-specific and might not work on non-Windows systems

    return 0;
}
