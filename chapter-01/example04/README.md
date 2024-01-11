# 🌟 Type Casting and Output Program in C++

This program is designed to introduce basic C++ syntax, type casting, and output operations.

## 📝 Program Code

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    double x = 3.7849; // Declare and initialize a double variable

    // Display the original double value
    cout << "To x einai " << x << endl;

    // Display the value of x casted to an integer
    cout << "To (int)x mas dinei " << (int)x << endl;

    // Confirm that the value of x remains unchanged
    cout << "To x omws den allaxe. Paramenei " << x << endl;

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

### 🔢 Type Casting and Output Operations
- `cout << "To x einai " << x << endl;`:
  - 🔍 **What is it?** Outputs the original double value of x.
- `cout << "To (int)x mas dinei " << (int)x << endl;`:
  - 🔍 **What is it?** Demonstrates type casting by converting x to an integer.
- `cout << "To x omws den allaxe. Paramenei " << x << endl;`:
  - 🔍 **What is it?** Shows that the original value of x remains unchanged after casting.

### 🛑 System Pause
- `system("pause");`:
  - 🔍 **What is it?** Pauses the program execution.
  - 📈 **Why it's important?** Allows the user to see the output before the console window closes. Note: This is Windows-specific and not recommended for portable code.

### ✅ Return Statement
- `return 0;`:
  - 🔍 **What is it?** The last line of the main function.
  - 📈 **Why it's important?** Returning 0 signifies successful execution.

## 🎉 Conclusion
- 🌐 **What happens?** This program, when executed, demonstrates how type casting works in C++ and shows the output of both the original and casted values.
- 🔑 **Key Takeaway:** Introduces type casting and reaffirms the concept of variable immutability in C++.

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
