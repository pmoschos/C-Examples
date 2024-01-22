# 🌟 Memory Address and Pointers in C++

This program showcases the use of pointers in C++ to access memory addresses and retrieve values.

## 📝 Program Code

```cpp
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
```

## 🧐 Explanation of the Code

### 📚 Including the Libraries
- `#include <iostream>`, `#include <cstdlib>`, and `#include <stdio.h>`:
  - 🔍 **What is it?** These lines include the iostream, cstdlib, and stdio libraries.
  - 📈 **Why it's important?** iostream is essential for C++ input and output operations, cstdlib is used for system commands, and stdio.h is the C standard input and output library, used here for `printf`.

### 🚀 Main Function
- `int main() { ... }`:
  - 🔍 **What is it?** Defines the main function of the program.
  - 📈 **Why it's important?** In C++, program execution starts with the main function. It is of type int, indicating that it returns an integer.

### 💡 Pointer Operations
- Various `printf` statements with pointer operations:
  - 🔍 **What are they?** These lines use `printf` to demonstrate pointer operations on an integer variable.
  - 📈 **Why it's important?** Illustrates the concept of pointers and their role in accessing memory addresses.

### 🛑 System Pause
- `system("pause");`:
  - 🔍 **What is it?** Pauses the program execution.
  - 📈 **Why it's important?** Allows the user to see the output before the console window closes. Note: This is Windows-specific and not recommended for portable code.

### ✅ Return Statement
- `return 0;`:
  - 🔍 **What is it?** The last line of the main function.
  - 📈 **Why it's important?** Returning

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