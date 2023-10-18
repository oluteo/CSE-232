// WRITE YOUR CODE HERE
#include "header.hpp"

int Repeat(int x) {
    return x * 2;
}

std::string Repeat(char c) {
    return std::string(2, c);
}

std::string Repeat(const std::string &s) {
    return s + " " + s;
}