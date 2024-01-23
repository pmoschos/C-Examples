# 🌟 Basic Printf Usage in C++

This program demonstrates the usage of `printf` in C++ for formatted output, showcasing various data types and formatting options.

## 📝 Program Code

```cpp
#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main(void)
{
    int x = 12;
    int y = 8939;
    char xaraktiras = 'a';

    // Basic output using printf
    printf("Hello\n"); // Equivalent to cout << "Hello" << endl;

    // Displaying integer values
    printf("x=%d \n", x);

    // Displaying floating-point values
    printf("%f \n", 67.9876);
    printf("%1.10f \n", 97.93274);

    // Combined integer output
    printf("x is equat %d and y is equal to %d\n", x, y);
    printf("%d+%d=%d\n", x, y, x + y);

    // Displaying a character
    printf("Value of c is: %c \n", xaraktiras);
    printf("%c-%c-%c\n", 'a', 'b', 'c');

    // Pause the system to view the output before the console closes
    system("pause");
    return 0;
}
```

## 🧐 Explanation of the Code

### 📚 Including the Libraries
- `#include <iostream>`, `#include <cstdlib>`, and `#include <stdio.h>`:
  - 🔍 **What is it?** These lines include the iostream, cstdlib, and stdio libraries.
  - 📈 **Why it's important?** iostream is essential for C++ input and output operations, cstdlib is used for system commands, and stdio.h is the C standard input and output library, useful for `printf`.

### 🚀 Main Function
- `int main() { ... }`:
  - 🔍 **What is it?** Defines the main function of the program.
  - 📈 **Why it's important?** In C++, program execution starts with the main function. It is of type int, indicating that it returns an integer.

### 🔢 Using printf for Output
- Various `printf` statements:
  - 🔍 **What are they?** These lines demonstrate the use of the `printf` function for formatted output.
  - 📈 **Why it's important?** `printf` allows more control over output formatting compared to `cout`, which is useful in scenarios requiring specific output layouts.

### 🛑 System Pause
- `system("pause");`:
  - 🔍 **What is it?** Pauses the program execution.
  - 📈 **Why it's important?** Allows the user to see the output before the console window closes. Note: This is Windows-specific and not recommended for portable code.

### ✅ Return Statement
- `return 0;`:
  - 🔍 **What is it?** The last line of the main function.
  - 📈 **Why it's important?** Returning 0 signifies successful execution.

## 🎉 Conclusion
- 🌐 **What happens?** This program showcases the effectiveness of `printf` for different types of formatted outputs in C++.
- 🔑 **Key Takeaway:** Enhances understanding of data type representation and formatting in C++ using `printf`.

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