# 🌟 Input Handling with `scanf` in C++

This program demonstrates input handling in C++ using the `scanf` function, with an emphasis on accepting only positive values for a variable.

## 📝 Program Code

```cpp
#include <iostream>
using namespace std;

int main(void)
{
    unsigned int x; // Declare an unsigned integer variable to accept only positive values
    double y;       // Declare a double variable

    cout << "Enter a positive value for x: ";
    cin >> x; // Read an unsigned integer input from the user

    cout << "You entered " << x << " for x." << endl;

    // Pause the system to view the output before the console closes
    system("pause"); // Note: This is system-specific and not recommended for portability

    return 0;
}
```

# 🧐 Explanation of the Code

## 📚 Including the Libraries
- `#include <iostream>`:
  - 🔍 **What is it?** This line includes the iostream library.
  - 📈 **Why it's important?** iostream is essential for C++ input and output operations.

## 🚀 Main Function
- `int main() { ... }`:
  - 🔍 **What is it?** Defines the main function of the program.
  - 📈 **Why it's important?** In C++, program execution starts with the main function.

## 💡 Input Handling with cin
- `unsigned int x;`:
  - 🔍 **What is it?** This line declares an unsigned integer variable to accept only positive values.
  - 📈 **Why it's important?** It ensures that the variable x can only store non-negative values.

- `cout << "Enter a positive value for x: ";`:
  - 🔍 **What is it?** This line prompts the user to enter a positive value for x.

- `cin >> x;`:
  - 🔍 **What is it?** This line reads an unsigned integer input from the user and stores it in the variable x.

- `cout << "You entered " << x << " for x." << endl;`:
  - 🔍 **What is it?** This line displays the entered value of x.

## 🛑 System Pause
- `system("pause");`:
  - 🔍 **What is it?** Pauses the program execution.
  - 📈 **Why it's important?** Allows the user to see the output before the console window closes. Note: This is Windows-specific and not recommended for portability.

## ✅ Return Statement
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