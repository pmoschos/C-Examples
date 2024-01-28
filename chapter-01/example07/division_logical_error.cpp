#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int x = 3; // Declare and initialize an integer variable x
    int y = 2; // Declare and initialize an integer variable y
    double z;  // Declare a double variable z

    z = (double)(x/y); // Pay attention to the logical error here
    cout << z << endl; // Output the value of z

    system("pause"); // Pause the system to view the output before the console closes
    return 0;
}