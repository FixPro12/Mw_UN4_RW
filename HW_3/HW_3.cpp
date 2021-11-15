#include <iostream>
#include <string>

int main()
{
    std::string str1 = "hello skillbox";

    int Characters = str1.length();

    std::cout << str1 << "\n";
    std::cout << "The first character: " << str1[0] << "\n";
    std::cout << "Last character: "<< str1[Characters - 1] << '\n';
    std::cout << "Number of characters:" << Characters << "\n";
}