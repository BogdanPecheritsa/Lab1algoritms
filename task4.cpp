#include <iostream>
#include <bitset>

union FloatRepresentation {
    float value;
    struct {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } parts;
};

int main() {
    FloatRepresentation num;
    num.value = 123.45f;

    std::bitset<32> bits(*reinterpret_cast<unsigned int*>(&num.value));
    std::cout << "Значення побитово: " << bits << std::endl;

    unsigned char* bytePtr = reinterpret_cast<unsigned char*>(&num.value);
    std::cout << "Значення побайтово: ";
    for (int i = 0; i < sizeof(float); ++i) {
        std::cout << std::bitset<8>(*bytePtr++) << ' ';
    }
    std::cout << std::endl;

    std::cout << "Знак: " << num.parts.sign << std::endl;
    std::cout << "Мантиса: " << std::bitset<23>(num.parts.mantissa) << std::endl;
    std::cout << "Ступінь: " << std::bitset<8>(num.parts.exponent) << std::endl;

    std::cout << "Обсяг пам'яті: " << sizeof(num) << " байт" << std::endl;

    return 0;
}