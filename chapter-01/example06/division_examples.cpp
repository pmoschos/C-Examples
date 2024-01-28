#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int x = 3; // Declare and initialize an integer variable x
    int y = 2; // Declare and initialize an integer variable y

    // Different division scenarios
    cout << x/y << endl; // Integer division
    cout << (double)x/y << endl; // x cast to double, then division
    cout << x/(double)y << endl; // y cast to double, then division
    cout << 3.0/y << endl; // Literal 3.0 divided by y
    cout << 2/3.0 << endl; // Integer 2 divided by literal 3.0

    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability

    return 0;
}