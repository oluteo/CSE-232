# Function Repeater

This C++ program demonstrates function overloading by defining multiple `Repeat` functions. These functions accept different types of input and return a modified version of the input, repeated twice.

## Table of Contents
- [Introduction](#introduction)
- [Implementation](#implementation)
- [Usage](#usage)
- [File Structure](#file-structure)
- [License](#license)

## Introduction<a name="introduction"></a>
This C++ program showcases function overloading, which allows you to define multiple functions with the same name but different parameter types. In this program, we have three `Repeat` functions, each tailored to work with specific input types.

## Implementation<a name="implementation"></a>
The program consists of three `Repeat` functions implemented in the [header.hpp](header.hpp) file:

1. **Repeat(int x)**: This function takes an integer `x` and returns `x` repeated twice.

2. **Repeat(char c)**: This function takes a character `c` and returns a string containing `c` repeated twice.

3. **Repeat(const std::string &s)**: This function takes a string `s` and returns a new string containing `s` followed by a space and `s` again.

## Usage<a name="usage"></a>
1. Include the [header.hpp](header.hpp) file in your C++ program to access the `Repeat` functions.

2. Call any of the `Repeat` functions with appropriate input according to the desired behavior.

File Structure<a name="file-structure"></a>
[header.hpp](header.hpp) : The header file containing the declarations of the Repeat functions.
[implementation.cpp](implementation.cpp) : A sample C++ program that demonstrates the use of the Repeat functions.

## License<a name="license"></a>
This project is provided under an open-source license. You can view the full license details in the [License.md](../../License.md) file.

Please feel free to use, modify, and distribute this code according to the terms of the license.

For questions or support, contact the author at [ibukunoluwaolutayo@gmail.com](mailto:ibukunoluwaolutayo@gmail.com).

Enjoy simulating the operation of Function Repeater with this C++ program!
