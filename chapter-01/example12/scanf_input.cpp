#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(void)
{
    int x;
    char ch;

    // Prompt the user to enter a value for x
    printf("Enter a value for x: ");
    scanf("%d", &x); // 'scanf' is a C function
                     // It waits for input from standard input (keyboard)
                     // and interprets what is entered as an integer (because of %d)
                     // then converts it into binary (e.g., 010101110)
                     // and stores it at the memory location of the variable x
                     // &x is the address of the first byte of the variable x
    printf("You entered %d\n", x);

    // Clear the input buffer
    fflush(stdin); // A C mechanism
                   // If I clear the memory, it also takes the character I entered above!

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("You entered %c \n", ch);

    // Pause the system to view the output before the console closes
    system("pause");
    return 0;
}