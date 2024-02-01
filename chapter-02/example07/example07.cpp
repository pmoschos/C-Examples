#include <iostream>
// http://www.asciitable.com/
using namespace std;

int main(void)
{
    int x = 1; // Local variable in the main function
    
    {
        int x = 10; // Local variable within the first block {}
        cout << x << endl; 
        
        {
            int x = 20; // Local variable within the nested block
            cout << x << endl;
        }
        
        cout << x << endl;
    }
    
    cout << x << endl; // Output the value of the main function's x
    
    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability
    
    return 0;
}
