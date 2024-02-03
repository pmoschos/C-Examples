# 🌟 Namespace Usage in C++
This code demonstrates the usage of namespaces in C++ to define separate scopes for variables with the same name.

## 📝 Program Code

```cpp
#include <iostream>
// http://www.asciitable.com/
using namespace std;

int x = 10; // Global variable (global scope)

namespace A {
    int x = 15; // Variable x within namespace A
    int y = 20; // Variable y within namespace A
}

int main(void)
{
    cout << "The global x is " << ::x << endl; // Output the global variable "x" using the scope resolution operator (::)
    cout << "The x in namespace A is " << A::x << endl; // Output the variable "x" within namespace A
    
    system("pause"); // Pause the system to view the output before the console closes
    return 0;
}
```

# 🧐 Explanation of the Code

## 📚 Including the Libraries
- `#include <iostream>`:
  - 🔍 What is it? This line includes the iostream library.
  - 📈 Why it's important? iostream is essential for C++ input and output operations.

## 🚀 Main Function
- `int x = 10;`:
  - 🔍 What is it? This line declares a global integer variable "x" with an initial value of 10. It's a global variable because it's declared outside of any function.
  - 📈 Why it's important? It defines a global variable accessible throughout the program.

## 🌐 Namespace Usage
- Namespace A:
  - `namespace A { ... }`:
    - 🔍 What is it? This code defines a namespace named "A" and contains two integer variables "x" and "y" within that namespace.
    - 📈 Why it's important? It demonstrates the creation of a separate scope (namespace) for variables.

- Output of Global and Namespace Variables:
  - `cout << "The global x is " << ::x << endl;`:
    - 🔍 What is it? This line outputs the value of the global variable "x" using the scope resolution operator (::).
    - 📈 Why it's important? It shows how to access the global "x" explicitly.

  - `cout << "The x in namespace A is " << A::x << endl;`:
    - 🔍 What is it? This line outputs the value of the variable "x" within namespace A using the namespace qualifier (A::x).
    - 📈 Why it's important? It demonstrates how to access variables within a namespace.

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
