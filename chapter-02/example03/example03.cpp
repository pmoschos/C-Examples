#include <iostream>

using namespace std;

int main(void)
{
    int x;
    
    // Prompt the user to enter an integer
    cout << "Enter an integer: ";
    
    // Read the integer input from the user
    cin >> x;
    
    // Calculate and display the last digit of the entered integer
    cout << "The last digit of " << x << " is " << x % 10 << endl;
    
    // Pause the program execution
    system("pause");
    
    return 0;
}
