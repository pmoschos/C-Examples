# 🌟 Integer Division Cast to Double in C++

This program showcases a common logical error in C++ involving type casting during division operations.

## 📝 Program Code

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    int x = 3; // Declare and initialize an integer variable x
    int y = 2; // Declare and initialize an integer variable y
    double z;  // Declare a double variable z

    z = (double)(x/y); // Pay attention to the logical error here
    cout << z << endl; // Output the value of z

    system("pause"); // Pause the system to view the output before the console closes
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

### 🔢 Division and Type Casting
- `z = (double)(x/y);`:
  - 🔍 **What is it?** This line casts the result of integer division `x/y` to a double.
  - 📈 **Why it's important?** It demonstrates a common logical error. The division is performed as integer division before the cast, which might not be the intended operation.

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