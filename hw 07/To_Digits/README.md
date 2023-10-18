# Digits Converter

This C++ program provides a simple utility to convert text representations of numbers to digits. It takes a string input and replaces words like "one" or "two" with their corresponding numerical digits, such as "1" or "2".

## Table of Contents
- [Introduction](#introduction)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Functions](#functions)
- [Installation](#installation)
- [File Structure](#file-structure)
- [License](#license)

## Introduction<a name="introduction"></a>
The Digits Converter is a C++ utility that allows you to convert text-based representations of numbers into their digit form. For example, it can replace the word "three" with the digit "3" in a given string. This can be useful when dealing with textual data that contains number words.

## Prerequisites<a name="prerequisites"></a>
- C++ compiler

## Usage<a name="usage"></a>
1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Input a string containing text representations of numbers (e.g., "two thousand and twenty-two").
4. The program will replace the text representations with numerical digits (e.g., "2022").

## Functions<a name="functions"></a>
The program provides two main functions for digit conversion:
1. **To_Single_Digits**: This function takes a string input, a digit string to find, and the corresponding digit. It finds and replaces all occurrences of the digit string with the specified digit.
2. **To_Digits**: This function uses the `To_Single_Digits` function to convert common number words in the input string to numerical digits.

## Installation<a name="installation"></a>
1. Download the provided C++ source code file [main.cpp](main.cpp).
2. Compile the code using a C++ compiler to create an executable.
3. Run the compiled executable.

## File Structure<a name="file-structure"></a>
- [main.cpp](main.cpp): The main C++ source code file containing the digit conversion functions.

## License<a name="license"></a>
This project is provided under an open-source license. You can view the full license details in the [License.md](../../License.md) file.

Please feel free to use, modify, and distribute this code according to the terms of the license.

For questions or support, contact the author at [ibukunoluwaolutayo@gmail.com](mailto:ibukunoluwaolutayo@gmail.com).

Enjoy converting text-based numbers to digits with this C++ utility!
