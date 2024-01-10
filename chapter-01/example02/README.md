# 🌟 Integer Input Program in C++

This program is designed to introduce basic C++ syntax, input operations, and output formatting.

## 📝 Program Code

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
    // Variable declaration
    int n;
    
    // Prompt the user to insert an integer
    cout << "Please, insert an integer " << endl;

    // Read the integer value from user input
    cin >> n ;

    // Display the entered integer
    cout << "You gave: " << n << endl;

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
  - 📈 **Why it's important?** iostream is essential for input and output operations, and cstdlib is used for system commands in C++.

### 🚀 Main Function
- `int main() { ... }`:
  - 🔍 **What is it?** Defines the main function of the program.
  - 📈 **Why it's important?** In C++, program execution starts with the main function. It is of type `int`, indicating that it returns an integer.

### 🔠 Input and Output Operations
- `cout << "Please, insert an integer " << endl;`:
  - 🔍 **What is it?** Outputs a prompt message to the user.
  - `cin >> n;`:
    - 🔍 **What is it?** Reads an integer input from the user.
  - `cout << "You entered " << n << endl;`:
    - 🔍 **What is it?** Outputs the entered integer.

### 🛑 System Pause
- `system("pause");`:
  - 🔍 **What is it?** Pauses the program execution.
  - 📈 **Why it's important?** Allows the user to see the output before the console window closes. Note: This is Windows-specific and not recommended for portable code.

### ✅ Return Statement
- `return 0;`:
  - 🔍 **What is it?** The last line of the main function.
  - 📈 **Why it's important?** Returning 0 signifies successful execution.

### 🎉 Conclusion
- 🌐 **What happens?** This program, when executed, prompts the user to enter an integer and then displays the entered value.
- 🔑 **Key Takeaway:** Demonstrates basic input and output functionality in C++.

## Getting Started 🚀
To get started with C++ Examples:
1. Clone the repository: `git clone https://github.com/pmoschos/C-Examples`
2. Navigate to the `example02` directory.
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