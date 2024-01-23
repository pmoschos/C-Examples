# 🌟 Input Handling with scanf in C++

This program demonstrates basic input handling in C++ using the `scanf` function.

## 📝 Program Code

```cpp
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
```

# 🧐 Explanation of the Code

## 📚 Including the Libraries
- `#include <iostream>`, `#include <cstdlib>`, and `#include <stdio.h>`:
  - 🔍 **What is it?** These lines include the iostream, cstdlib, and stdio libraries.
  - 📈 **Why it's important?** iostream is essential for C++ input and output operations, cstdlib is used for system commands, and stdio.h is the C standard input and output library, used here for printf and scanf.

## 🚀 Main Function
- `int main() { ... }`:
  - 🔍 **What is it?** Defines the main function of the program.
  - 📈 **Why it's important?** In C++, program execution starts with the main function. It is of type int, indicating that it returns an integer.

## 💡 Using `scanf` for Input
- `scanf("%d", &x);` and `scanf("%c", &ch);`:
  - 🔍 **What are they?** These lines use `scanf` to read integer and character input from the user.
  - 📈 **Why it's important?** `scanf` is a fundamental function for reading formatted input in C++, allowing interaction with the user.

## 🛑 System Pause
- `system("pause");`:
  - 🔍 **What is it?** Pauses the program execution.
  - 📈 **Why it's important?** Allows the user to see the output before the console window closes. Note: This is Windows-specific and not recommended for portability.

## ✅ Return Statement
- `return 0;`:
  - 🔍 **What is it?** The last line of the main function.
  - 📈 **Why it's important?** Returning 0 signifies successful execution.

## 🎉 Conclusion
What happens? This program, when executed, allows the user to input an integer and a character, demonstrating basic input operations in C++.

🔑 Key Takeaway: Enhances understanding of user input handling in C++ using `scanf`.

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