#include <stdio.h>

int main() {
    signed char a = 5;
    signed char b = 127;
    signed char c = 2;
    signed char d = 3;
    signed char e = -120;
    signed char f = -34;
    signed char g = -5;
    signed char h = 56;
    signed char i = 38;

    printf("а) 5 + 127 = %d\n", a + b);
    printf("б) 2 - 3 = %d\n", c - d);
    printf("в) -120 - 34 = %d\n", e - f);
    printf("г) (unsigned char) (- 5) = %d\n", (unsigned char)g);
    printf("д) 56 & 38 = %d\n", h & i);
    printf("е) 56 | 38 = %d\n", h | i);

    return 0;
}