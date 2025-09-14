#include <iostream>
#include <string>

#include "greeting_utils.h"

int main(void) {
    std::string name;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);
    std::cout << std::endl;

    const std::string greeting = GreetingUtils::create_message(name);

    const char* c_greeting = GreetingUtils::format_as_c_string(greeting);

    std::cout << c_greeting << std::endl;

    delete[] c_greeting;
}
