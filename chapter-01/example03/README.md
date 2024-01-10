# 🌟 Sizeof Variables Program in C++

This program is designed to introduce the use of the `sizeof` operator in C++, a fundamental concept for understanding memory allocation and data types.

## 📝 Program Code

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    // Variable declaration
    int n, m;
    double x;
    
    // Output the size of variables in bytes
    cout << "Size of n: " << sizeof(n) << " bytes" << endl;
    cout << "Size of m: " << sizeof(m) << " bytes" << endl;
    cout << "Size of x: " << sizeof(x) << " bytes" << endl;

    // Pause the system to view the output before the console closes
    // Note: system("pause") is generally not recommended due to portability issues
    system("pause");
    
    return 0;
}
```

## 🧐 Explanation of the Code

### 📚 Including the Libraries
- `#include <iostream>` and `#include <cstdlib>`:
  - 🔍 **What is it?** These lines include the iostream and cstdlib libraries.
  - 📈 **Why it's important?** iostream is essential for input and output operations, while cstdlib is used for the system pause command.

### 🚀 Main Function
- `int main() { ... }`:
  - 🔍 **What is it?** Defines the main function of the program.
  - 📈 **Why it's important?** It's the entry point where the execution of a C++ program begins.

### 🔢 Sizeof Operator
- `cout << "Size of n: " << sizeof(n) << " bytes" << endl;` (and similar lines):
  - 🔍 **What is it?** These lines calculate and output the size of variables `n`, `m`, and `x`.
  - 📈 **Why it's important?** Understanding how much memory different data types occupy is crucial in C++.

### 🛑 System Pause
- `system("pause");`:
  - 🔍 **What is it?** Pauses the program execution.
  - 📈 **Why it's important?** Allows users to see the output before the console window closes. However, it's a Windows-specific command.

### ✅ Return Statement
- `return 0;`:
  - 🔍 **What is it?** Ends the main function.
  - 📈 **Why it's important?** Indicates that the program executed successfully.

## 🎉 Conclusion
- 🌐 **What happens?** This program, when executed, displays the size in bytes of the declared variables.
- 🔑 **Key Takeaway:** Introduces the concept of data sizes and memory usage in C++.

## Getting Started 🚀
To get started with C++ Examples:
1. Clone the repository: `git clone https://github.com/pmoschos/C-Examples`
2. Navigate to the `example03` directory.
3. Compile and run the program to see it in action.

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
