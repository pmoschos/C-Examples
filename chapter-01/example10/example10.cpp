#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    char c = 'A'; // Declare a char variable

    // Output the memory size of the char variable
    cout << " O char uses " << sizeof(c) << " bytes of memory " << endl;

    // Display the memory address of 'c' in double format
    cout << (double)((int)&c) << endl;

    // Display the memory address of 'c' in integer format
    cout << (int)&c << endl;

    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability

    return 0;
}