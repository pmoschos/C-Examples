#include <iostream>
using namespace std;

int main(void)
{
    unsigned int x; // Declare an unsigned integer variable to accept only positive values
    double y;       // Declare a double variable

    cout << "Enter a positive value for x: ";
    cin >> x; // Read an unsigned integer input from the user

    cout << "You entered " << x << " for x." << endl;

    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability

    return 0;
}