# 🌟 Char Memory Size and Address in C++

This program demonstrates the memory size of a `char` variable in C++ and outputs its memory address in different formats.

## 📝 Program Code

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    char c = 'A'; // Declare a char variable

    // Output the memory size of the char variable
    cout << " O char uses " << sizeof(c) << " bytes of memory " << endl;

    // Display the memory address of 'c' in double format
    cout << (double)((int)&c) << endl;

    // Display the memory address of 'c' in integer format
    cout << (int)&c << endl;

    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability

    return 0;
}
```

## 🧐 Explanation of the Code

### 📚 Including the Libraries
- `#include <iostream>` and `#include <cstdlib>`:
  - 🔍 **What is it?** These lines include the iostream and cstdlib libraries.
  - 📈 **Why it's important?** iostream is essential for input and output operations, and cstdlib is used for system commands in C++.

### 🚀 Main Function
- `int main() { ... }`:
  - 🔍 **What is it?** Defines the main function of the program.
  - 📈 **Why it's important?** In C++, program execution starts with the main function. It is of type int, indicating that it returns an integer.

### 🔢 Memory Size and Address
- `cout << " O char katalambanei " << sizeof(c) << " bytes mnhmhs " << endl;`:
  - 🔍 **What is it?** Outputs the size in bytes of the char variable `c`.
- `cout << (double)((int)&c) << endl;` and `cout << (int)&c << endl;`:
  - 🔍 **What are they?** These lines display the memory address of the char variable `c` in both double and integer formats.
  - 📈 **Why it's important?** Demonstrates how to obtain and display the memory address of a variable, a key concept in understanding pointers and memory management in C++.

### 🛑 System Pause
- `system("pause");`:
  - 🔍 **What is it?** Pauses the program execution.
  - 📈 **Why it's important?** Allows the user to see the output before the console window closes. Note: This is Windows-specific and not recommended for portable code.

### ✅ Return Statement
- `return 0;`:
  - 🔍 **What is it?** The last line of the main function.
  - 📈 **Why it's important?** Returning 0 signifies successful execution.

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