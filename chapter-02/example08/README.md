# 🌟 Variable Scoping in C++
This code showcases the concept of variable scoping in C++, particularly focusing on local and global variables within nested scopes.

## 📝 Program Code

```cpp
#include <iostream>
using namespace std;

int x = 10; // Global variable (global scope)

int main(void)
{
    cout << x << endl; // Output the global variable "x"
    int x = 1000; // Local variable (local to the main function)

    cout << x << endl; // Output the local variable "x" within the main function's scope
    {
        cout << x << endl; // Output the local variable "x" within the nested block's scope
        cout << ::x << endl; // Output the global variable "x" using the scope resolution operator
    }

    system("pause"); // Pause the system to view the output before the console closes
    return 0;
}
```

# 🧐 Explanation of the Code

## 📚 Including the Libraries
- `#include <iostream>`:
  - 🔍 What is it? This line includes the iostream library.
  - 📈 Why it's important? iostream is essential for C++ input and output operations.

- `// http://www.asciitable.com/`:
  - 🔍 What is it? This is a comment providing a link to an ASCII table website. It doesn't impact the code's functionality but serves as a reference.

## 🚀 Main Function
- `int x = 10;`:
  - 🔍 What is it? This line declares a global integer variable "x" with an initial value of 10. It's a global variable because it's declared outside of any function.
  - 📈 Why it's important? It defines a global variable accessible throughout the program.

- `int main(void)`:
  - 🔍 What is it? Defines the main function of the program.
  - 📈 Why it's important? In C++, program execution starts with the main function. This function serves as the entry point for the program.

## 💡 Variable Scoping
- Output of Global Variable:
  - `cout << x << endl;`:
    - 🔍 What is it? This line outputs the value of the global variable "x."
    - 📈 Why it's important? It demonstrates that the global "x" is accessible and its value is 10 within the main function.

- `int x = 1000;`:
  - 🔍 What is it? This line declares a local integer variable "x" within the main function's scope and initializes it with the value 1000.
  - 📈 Why it's important? It defines a local variable with the same name as the global "x," illustrating variable shadowing.

- Output of Local and Global Variables:
  - `cout << x << endl;`:
    - 🔍 What is it? This line outputs the value of the local variable "x" within the main function's scope.
    - 📈 Why it's important? It demonstrates that the local "x" takes precedence over the global "x" with the same name.

- Nested Block with Variable Scope Resolution Operator:
  - Within the main function, there is a nested block of code enclosed in additional curly braces `{}`. This nested block is used to showcase the use of the scope resolution operator (::).

  - Output of Local and Global Variables Inside Nested Block:
    - `cout << x << endl;`:
      - 🔍 What is it? This line outputs the value of the local variable "x" within the nested block's scope.
      - 📈 Why it's important? It shows the accessibility of the local "x" within the nested block.

    - `cout << ::x << endl;`:
      - 🔍 What is it? This line uses the scope resolution operator (::) to access the global variable "x."
      - 📈 Why it's important? It demonstrates how to explicitly access the global "x" within a nested scope.

## 🛑 System Pause
- `system("pause");`:
  - 🔍 What is it? Pauses the program execution.
  - 📈 Why it's important? It allows the user to view the output before the console window closes. Note that this is system-specific and not recommended for portability.

## ✅ Return Statement
- `return 0;`:
  - 🔍 What is it? The last line of the main function.
  - 📈 Why it's important? Returning 0 signifies successful execution of the program.

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
