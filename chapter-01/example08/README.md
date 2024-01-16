# 🌟 Data Type Sizes in C++

This program demonstrates the use of the `sizeof` operator to determine the size of different data types in C++.

## 📝 Program Code

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    short x = 394;      // Declare a short integer
    int y = 8484;       // Declare a regular integer
    long z = 3884L;     // Declare a long integer
    long int w = 9347948;  // Declare a long int

    // Output the sizes of the variables
    cout << "Size of short x: " << sizeof(x) << " bytes" << endl;
    cout << "Size of int y: " << sizeof(y) << " bytes" << endl;
    cout << "Size of long z: " << sizeof(z) << " bytes" << endl;
    cout << "Size of long int w: " << sizeof(w) << " bytes" << endl;

    system("pause"); // Pause the system for viewing the output
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

### 🔢 Variable Declarations and Sizeof Operator
- `short x = 394;`, `int y = 8484;`, `long z = 3884L;`, `long int w = 9347948;`:
  - 🔍 **What are they?** These lines declare variables of different integral types.

### 🔢 Sizeof Operator
- `sizeof(x)`, `sizeof(y)`, `sizeof(z)`, `sizeof(w)`:
  - 🔍 **What is it?** These statements determine the size of the variables.
  - 📈 **Why it's important?** Shows how to use the `sizeof` operator to find out the size of different data types in bytes.

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