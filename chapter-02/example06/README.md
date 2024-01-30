# 🌟 Calculating and Displaying Digits of an Integer in C++
This program demonstrates how to calculate and display the individual digits of an integer in C++. It uses the modulo operator (%) to extract the last digit of the integer, and then it divides the integer by 10 to remove the last digit and continue the process. The digits are displayed one by one.

## 📝 Program Code

```cpp
#include <iostream>
using namespace std;

int main(void)
{
    int x = 83894; // Declare an integer variable and initialize it with 83894
    
    // Calculate and display the last digit of x
    cout << x % 10 << endl;
    
    // Remove the last digit from x
    x = x / 10;
    
    // Calculate and display the next digit of x
    cout << x % 10 << endl;
    
    // Remove the next digit from x
    x = x / 10;
    
    // Calculate and display the next digit of x
    cout << x % 10 << endl;
    
    // Remove the next digit from x
    x = x / 10;
    
    // Calculate and display the next digit of x
    cout << x % 10 << endl;
    
    // Remove the last remaining digit from x
    x = x / 10;
    
    // Calculate and display the final digit of x
    cout << x % 10 << endl;
    
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

## 🚀 Main Function
- `int main(void)`:
  - 🔍 What is it? Defines the main function of the program.
  - 📈 Why it's important? In C++, program execution starts with the main function.

## 💡 Calculating and Displaying the Digits of an Integer
- `int x = 83894;`:
  - 🔍 What is it? This line declares an integer variable x and initializes it with the value 83894.
  - 📈 Why it's important? It sets the initial value of x.

- `cout << x % 10 << endl;`:
  - 🔍 What is it? This line calculates and displays the last digit of the integer x using the modulo operator (%).
  - 📈 Why it's important? It demonstrates how to extract and display the last digit of a number.

- `x = x / 10;`:
  - 🔍 What is it? This line divides the integer x by 10, effectively removing its last digit.
  - 📈 Why it's important? It updates the value of x to exclude the last digit, allowing the process to continue.

- `cout << x % 10 << endl;`:
  - 🔍 What is it? This line calculates and displays the new last digit of x after dividing it by 10.
  - 📈 Why it's important? It shows how to repeat the process to extract and display other digits.

- The process of dividing x by 10 and displaying its last digit is repeated several times until all the digits have been displayed.

## 🛑 System Pause
- `system("pause");`:
  - 🔍 What is it? Pauses the program execution.
  - 📈 Why it's important? Allows the user to see the output before the console window closes. Note: This is Windows-specific and not recommended for portability.

## ✅ Return Statement
- `return 0;`:
  - 🔍 What is it? The last line of the main function.
  - 📈 Why it's important? Returning 0 signifies successful execution.

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