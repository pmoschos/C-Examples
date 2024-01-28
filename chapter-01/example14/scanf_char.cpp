#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(void)
{
    // Declare variables for integer and character input
    int x;
    char ch;

    // Prompt the user to enter a value for x
    printf("Enter a value for x: ");
    
    // Read an integer input using scanf
    scanf("%d", &x); 
    // scanf is a C function that waits for standard input
    // and interprets the input from the keyboard as an int (%d)
    // It converts the input to binary (010101110, etc.)
    // and stores it in the memory location of variable x (&x).

    // Output the entered value of x
    printf("You entered %d\n", x);

    // Read a character input using scanf to absorb the '\n'
    scanf("%c", &ch);  
    
    // Prompt the user to enter a character
    printf("Enter a character: ");
    
    // Read a character input using scanf
    scanf("%c", &ch);

    // Output the entered character
    printf("You entered %c \n", ch);

    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability

    return 0;
}