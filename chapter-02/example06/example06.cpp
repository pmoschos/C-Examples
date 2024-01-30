#include <iostream>
using namespace std;

int main(void)
{
    int x = 83894; // Declare an integer variable and initialize it with 83894
    
    // Calculate and display the last digit of x
    cout << x % 10 << endl;
    
    // Remove the last digit from x
    x = x / 10;
    
    // Calculate and display the next digit of x
    cout << x % 10 << endl;
    
    // Remove the next digit from x
    x = x / 10;
    
    // Calculate and display the next digit of x
    cout << x % 10 << endl;
    
    // Remove the next digit from x
    x = x / 10;
    
    // Calculate and display the next digit of x
    cout << x % 10 << endl;
    
    // Remove the last remaining digit from x
    x = x / 10;
    
    // Calculate and display the final digit of x
    cout << x % 10 << endl;
    
    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability
    
    return 0;
}