#include <iostream>
#include <string>

char * Sandwich(std::string & line, char * bread_ptr) {

// WRITE YOUR CODE HERE
if (line.empty() || bread_ptr == nullptr) {
        return nullptr; 
    }

    for (size_t i = 1; i < line.length() - 1; i++) {
        if (line[i - 1] == *bread_ptr && line[i + 1] == *bread_ptr) {
            return &line[i];
        }
    }

    return nullptr;
}

int main() {
	std::string line = "Char is a character";
	char bread = 'a';
	char * filling_ptr = Sandwich(line, &bread);
	std::cout << *filling_ptr << std::endl; // Should be r
}
