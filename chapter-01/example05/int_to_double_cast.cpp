#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int x = 3; // Declare and initialize an integer variable

    // Display the original integer value
    cout << "To x einai " << x << endl;

    // Display the value of x casted to a double
    cout << "To (double)x mas dinei " << (double)x << endl;

    // Confirm that the value of x remains unchanged
    cout << "To x omws den allaxe. Paramenei " << x << endl;

    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability
    
    return 0;
}