#include <iostream>
using namespace std;

#define x 10      // Define a preprocessor macro "x" with a value of 10
#define y 'c'     // Define a preprocessor macro "y" with a value of 'c'

int main(void)
{
    cout << x << endl;  // Output the value of the preprocessor macro "x"
    
    // Comments in Greek (Translated to English):
    // Is x a variable? 
    // If it is, then where is it in memory?
    // In which position is it located?
    
    // cout << (int)&x << endl; // x is not a variable.
    
    cout << y << endl;  // Output the value of the preprocessor macro "y"
    
    system("pause"); // Pause the system to view the output before the console closes
    return 0;
}
