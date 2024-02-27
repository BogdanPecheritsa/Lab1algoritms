#include <iostream>

int main() {
    signed short num;
    std::cout << "Введіть ціле число: ";
    std::cin >> num;

    unsigned short magnitude = num & 0x7FFF;
    unsigned short sign = num >> 15 & 1;

    std::cout << "Значення: " << magnitude << std::endl;
    std::cout << "Знак: " << (sign ? "-" : "+") << std::endl;

    return 0;
}