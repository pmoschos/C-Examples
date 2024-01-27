# 🌟 Calculating and Displaying the Last Digit in C++

This program demonstrates how to calculate and display the last digit of an integer in C++ using the modulo operator %.

📝 Program Code

```cpp
#include <iostream>

using namespace std;

int main(void)
{
    int x;
    
    // Prompt the user to enter an integer
    cout << "Enter an integer: ";
    
    // Read the integer input from the user
    cin >> x;
    
    // Calculate and display the last digit of the entered integer
    cout << "The last digit of " << x << " is " << x % 10 << endl;
    
    // Pause the program execution
    system("pause");
    
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

## 💡 Input with cin
- `int x;`:
  - 🔍 **What is it?** Declares an integer variable x.
  - 📈 **Why it's important?** It prepares a variable to store user input.

- `cout << "Enter an integer: ";`:
  - 🔍 **What is it?** Displays a prompt for the user to enter an integer.
  - 📈 **Why it's important?** It instructs the user on what input is expected.

- `cin >> x;`:
  - 🔍 **What is it?** Reads an integer input from the user and stores it in the variable x.
  - 📈 **Why it's important?** It captures the user's input for further processing.

## 🔢 Calculating the Last Digit
- `cout << x%10 << endl;`:
  - 🔍 **What is it?** Calculates and outputs the last digit of the entered integer using the modulo operator (%).
  - 📈 **Why it's important?** It demonstrates how to extract and display the last digit of a number.

- `cout << "You entered " << x << endl;`:
  - 🔍 **What is it?** Displays a message indicating the integer entered by the user.
  - 📈 **Why it's important?** It provides feedback to the user about their input.

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