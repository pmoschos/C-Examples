# 🌟 Size of Floating-Point Types in C++

This program demonstrates the use of the `sizeof` operator in C++ to determine the size in bytes of various floating-point data types.

## 📝 Program Code

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    double x = 8349.84; // Declare a double variable
    float y = 8438.94f; // Declare a float variable
    long double z = 9723947; // Declare a long double variable

    // Output the size of each variable
    cout << "Size of double x: " << sizeof(x) << " bytes" << endl;
    cout << "Size of float y: " << sizeof(y) << " bytes" << endl;
    cout << "Size of long double z: " << sizeof(z) << " bytes" << endl;

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

### 🔢 Sizeof Operator Usage
- `cout << sizeof(x) << endl;` and other sizeof statements:
  - 🔍 **What are they?** These lines output the size in bytes of variables `x`, `y`, and `z`, which are of types `double`, `float`, and `long double` respectively.
  - 📈 **Why it's important?** Demonstrates the use of the `sizeof` operator in C++, which is used to determine the amount of memory allocated to different data types.

### 🛑 System Pause
- `system("pause");`:
  - 🔍 **What is it?** Pauses the program execution.
  - 📈 **Why it's important?** Allows the user to see the output before the console window closes. Note: This is Windows-specific and not recommended for portable code.

### ✅ Return Statement
- `return 0;`:
  - 🔍 **What is it?** The last line of the main function.
  - 📈 **Why it's important?** Returning 0 signifies successful execution.

## 🎉 Conclusion
- 🌐 **What happens?** This program demonstrates the use of the `sizeof` operator to determine the size of different floating-point data types in C++.
- 🔑 **Key Takeaway:** Provides insight into the memory footprint of various floating-point data types, which is crucial for understanding memory management and optimization in C++.

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