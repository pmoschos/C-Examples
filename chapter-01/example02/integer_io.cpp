#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    // Variable declaration
    int n;
    
    // Prompt the user to insert an integer
    cout << "Please, insert an integer " << endl;

    // Read the integer value from user input
    cin >> n ;

    // Display the entered integer
    cout << "You gave: " << n << endl;

    // Pause the system to view the output before the console closes
    // Note: system("pause") is generally not recommended due to portability issues
    system("pause");
    
    return 0;
}
