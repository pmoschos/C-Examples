# 🌟 Preprocessor Macros in C++
This code illustrates the usage of preprocessor macros in C++ to define symbolic constants.

## 📝 Program Code

```cpp
#include <iostream>
using namespace std;

#define x 10      // Define a preprocessor macro "x" with a value of 10
#define y 'c'     // Define a preprocessor macro "y" with a value of 'c'

int main(void)
{
    cout << x << endl;  // Output the value of the preprocessor macro "x"
    
    // Comments in Greek (Translated to English):
    // Is x a variable? 
    // If it is, then where is it in memory?
    // In which position is it located?
    
    // cout << (int)&x << endl; // x is not a variable.
    
    cout << y << endl;  // Output the value of the preprocessor macro "y"
    
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
- Preprocessor Definitions:
  - `#define x 10`
    - 🔍 What is it? This line defines a preprocessor macro "x" with a value of 10.
    - 📈 Why it's important? It creates a symbolic constant "x" that will be replaced with the value 10 during compilation.

  - `#define y 'c'`
    - 🔍 What is it? This line defines a preprocessor macro "y" with a value of 'c'.
    - 📈 Why it's important? It creates a symbolic constant "y" that will be replaced with the character 'c' during compilation.

- Variable Output:
  - `cout << x << endl;`
    - 🔍 What is it? This line outputs the value of the preprocessor macro "x."
    - 📈 Why it's important? It displays the value of the symbolic constant "x."

  - Commented Code:
    - `// Is x a variable?`
      - 🔍 What is it? This is a comment in English asking if "x" is a variable.
      - 📈 Why it's important? It's a comment for explanation.

    - `// If it is, then where is it in memory?`
      - 🔍 What is it? This is a comment in English asking if "x" is in memory and where it is located.
      - 📈 Why it's important? It's a comment for explanation.

    - `// In which position is it located?`
      - 🔍 What is it? This is a comment in English asking in which position "x" is located.
      - 📈 Why it's important? It's a comment for explanation.

    - `// cout << (int)&x << endl; // x is not a variable.`
      - 🔍 What is it? This is a commented line of code attempting to output the address of "x" using a pointer.
      - 📈 Why it's important? It's an attempt to check the address of "x," but it's commented out and not executed.

  - `cout << y << endl;`
    - 🔍 What is it? This line outputs the value of the preprocessor macro "y."
    - 📈 Why it's important? It displays the value of the symbolic constant "y."

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