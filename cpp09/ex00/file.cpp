#include <iostream>
#include <cstring>
#include <exception>

int main() {
    // char str[] = "Hello, world! This is a sample string.";
    // const char delimiters[] = " ,.!"; // Delimiters for tokenization

    // // Use strtok to tokenize the string
    // char *token = std::strtok(str, delimiters);

    // // Continue tokenizing until no more tokens are found
    // while (token != nullptr) {
    //     std::cout << "Token: " << token << std::endl;

    //     // Get the next token
    //     token = std::strtok(nullptr, delimiters);
    // }

    int x = 1;
    try
    {
        if (x == 1)
            throw   std::invalid_argument("Exception");
        std::cout << "Hello" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}
