#include <iostream>

union SignedShort {
    signed short value;
    struct {
        unsigned short magnitude : 15;
        unsigned short sign : 1;
    } parts;
};

int main() {
    SignedShort num;
    std::cout << "Введіть ціле число: ";
    std::cin >> num.value;

    std::cout << "Значення: " << num.parts.magnitude << std::endl;
    std::cout << "Знак: " << (num.parts.sign ? "-" : "+") << std::endl;

    return 0;
}