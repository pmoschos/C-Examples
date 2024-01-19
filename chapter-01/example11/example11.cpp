#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(void)
{
    int x = 12;
    int y = 8939;
    char xaraktiras = 'a';

    // Basic output using printf
    printf("Hello\n"); // Equivalent to cout << "Hello" << endl;

    // Displaying integer values
    printf("x=%d \n", x);

    // Displaying floating-point values
    printf("%f \n", 67.9876);
    printf("%1.10f \n", 97.93274);

    // Combined integer output
    printf("x is equat %d and y is equal to %d\n", x, y);
    printf("%d+%d=%d\n", x, y, x + y);

    // Displaying a character
    printf("Value of c is: %c \n", xaraktiras);
    printf("%c-%c-%c\n", 'a', 'b', 'c');

    // Pause the system to view the output before the console closes
    system("pause");
    return 0;
}