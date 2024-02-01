# 🌟 Scope of Variables in C++
This program illustrates the concept of variable scope in C++ by declaring and using variables with the same name in different scopes, including the main function, blocks within the main function, and nested blocks.

## 📝 Program Code

```cpp
#include <iostream>
// http://www.asciitable.com/
using namespace std;

int main(void)
{
    int x = 1; // Local variable in the main function
    
    {
        int x = 10; // Local variable within the first block {}
        cout << x << endl; 
        
        {
            int x = 20; // Local variable within the nested block
            cout << x << endl;
        }
        
        cout << x << endl;
    }
    
    cout << x << endl; // Output the value of the main function's x
    
    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability
    
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
- `int main(void)`:
  - 🔍 What is it? Defines the main function of the program.
  - 📈 Why it's important? In C++, program execution starts with the main function. It serves as the entry point for the program.

## 💡 Variable Scoping
- `int x = 1;`:
  - 🔍 What is it? This line declares an integer variable x with an initial value of 1 within the main function's scope.
  - 📈 Why it's important? It defines a local variable in the main function.

- Block with Local Variables:
  - Within the main function, there is a block of code enclosed in curly braces `{}`. This block defines local variables with the same name "x" but in different scopes.

  - `int x = 10;`:
    - 🔍 What is it? This line declares an integer variable x with an initial value of 10 within the first block's scope.
    - 📈 Why it's important? It demonstrates variable scoping, where this "x" is distinct from the one in the main function.

  - Nested Block with Local Variables:
    - Within the first block, there is a nested block of code enclosed in additional curly braces `{}`. This nested block defines another local variable "x."

    - `int x = 20;`:
      - 🔍 What is it? This line declares an integer variable x with an initial value of 20 within the nested block's scope.
      - 📈 Why it's important? It showcases the concept of nested variable scopes, where the innermost "x" is distinct from the outer ones.

- Output Statements:
  - `cout << x << endl;`:
    - 🔍 What is it? These lines output the value of the variable "x" at different scopes, including the main function's x, the first block's x, and the nested block's x.
    - 📈 Why it's important? It illustrates how variable scoping works in C++ and which "x" is accessible within each scope.

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
