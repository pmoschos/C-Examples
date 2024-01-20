# 🌟 Basic Input with scanf in C++

This program demonstrates the use of `scanf` in C++ for reading user input for different data types like integers and characters.

## 📝 Program Code

```cpp
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
```

## 🧐 Explanation of the Code

### 📚 Including the Libraries
- `#include <iostream>`, `#include <cstdlib>`, and `#include <stdio.h>`:
  - 🔍 **What is it?** These lines include the iostream, cstdlib, and stdio libraries.
  - 📈 **Why it's important?** iostream is essential for C++ input and output operations, cstdlib is used for system commands, and stdio.h is the C standard input and output library, used here for `printf` and `scanf`.

### 🚀 Main Function
- `int main() { ... }`:
  - 🔍 **What is it?** Defines the main function of the program.
  - 📈 **Why it's important?** In C++, program execution starts with the main function. It is of type int, indicating that it returns an integer.

### 🔢 Using scanf for Input
- `scanf("%d", &x);` and `scanf("%c", &ch);`:
  - 🔍 **What are they?** These lines use the `scanf` function to read integer and character input from the user.
  - 📈 **Why it's important?** `scanf` is a fundamental function for reading formatted input in C++, allowing interaction with the user.

### 🛑 System Pause
- `system("pause");`:
  - 🔍 **What is it?** Pauses the program execution.
  - 📈 **Why it's important?** Allows the user to see the output before the console window closes. Note: This is Windows-specific and not recommended for portable code.

### ✅ Return Statement
- `return 0;`:
  - 🔍 **What is it?** The last line of the main function.
  - 📈 **Why it's important?** Returning 0 signifies successful execution.

## 🎉 Conclusion
- 🌐 **What happens?** This program, when executed, allows the user to input an integer and a character, demonstrating basic input operations in C++.
- 🔑 **Key Takeaway:** Enhances understanding of user input handling in C++ using `scanf`.

## Getting Started 🚀
To get started with C++ Examples:
1. Clone the repository: `git clone https://github.com/pmoschos/C-Examples`
2. Navigate to the desired script
3. Compile and run the program to see it in action

## 📢 Stay Updated
Be sure to ⭐ this repository to stay updated with new examples and enhancements!

## 📜 License 
🔐 This project is protected under the [MIT License](https://mit-license.org/).

## 📧 Contact 
Panagiotis Moschos - (pan.moschos86@gmail.com)

---
<h1 align=center>Happy Coding 👨‍💻 </h1>

<h3 align=center>🎉 Let's make learning C++ an enjoyable and fruitful journey for everyone!</h3>  

<p align="center">
  Made with ❤️ by Panagiotis Moschos (https://github.com/pmoschos)
</p>