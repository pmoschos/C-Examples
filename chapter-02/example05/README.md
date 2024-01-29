# 🌟 Displaying ASCII Character Differences in C++
This program demonstrates how to calculate and display the differences between ASCII characters in C++. It also converts the resulting ASCII value to its corresponding character.

## 📝 Program Code

```cpp
#include <iostream>
// http://www.asciitable.com/
using namespace std;

int main(void)
{
    cout << 'a' - 'A' << endl; // Calculate the difference between lowercase 'a' and uppercase 'A'.
    
    cout << 'd' - ('a' - 'A') << endl; // Calculate the difference between 'd' and the difference between 'a' and 'A'.
    
    cout << (char)('d' - ('a' - 'A')) << endl; // Convert the calculated difference to its corresponding character.
    
    system("pause");   
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

## 💡 Calculating and Displaying ASCII Character Differences
- `cout << 'a' - 'A' << endl;`:
  - 🔍 What is it? This line calculates and displays the difference between lowercase 'a' and uppercase 'A'.
  - 📈 Why it's important? It shows how to compute the ASCII character difference.

- `cout << 'd' - ('a' - 'A') << endl;`:
  - 🔍 What is it? This line calculates and displays the difference between 'd' and the difference between 'a' and 'A'.
  - 📈 Why it's important? It demonstrates more complex calculations involving ASCII characters.

- `cout << (char)('d' - ('a' - 'A')) << endl;`:
  - 🔍 What is it? This line converts the calculated difference to its corresponding character and displays it.
  - 📈 Why it's important? It shows how to convert an ASCII value to a character and output it.

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