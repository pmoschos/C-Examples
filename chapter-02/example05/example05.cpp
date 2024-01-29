#include <iostream>
// http://www.asciitable.com/
using namespace std;

int main(void)
{
    cout << 'a' - 'A' << endl; // Calculate the difference between lowercase 'a' and uppercase 'A'.
    
    cout << 'd' - ('a' - 'A') << endl; // Calculate the difference between 'd' and the difference between 'a' and 'A'.
    
    cout << (char)('d' - ('a' - 'A')) << endl; // Convert the calculated difference to its corresponding character.
    
    system("pause");   
    return 0;
}
