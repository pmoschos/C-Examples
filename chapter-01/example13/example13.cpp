#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(void)
{
    // Declare an integer variable
    int x = 29;

    // Output the memory address of x and its content using pointers
    printf("The address of x is %d \n", &x);
    printf("The content at address %d is %d \n", &x, x);
    printf("The content at address %d is %d \n", &x, *&x);

    // Access memory content using a specific address (example: 2293572)
    printf("%d\n", *(int*) 2293572);

    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability

    return 0;
}