#include <stdio.h>

int main() {
    // int (integer type)
    int a = 10;       // 'a' is an integer variable with a value of 10

    // float (floating-point type)
    float b = 3.14f;  // 'b' is a float variable, representing a floating-point number with value 3.14

    // double (double-precision floating-point type)
    double c = 3.14159265359; // 'c' is a double variable, representing a floating-point number with higher precision

    // char (character type)
    char d = 'A';     // 'd' is a char variable, storing a single character 'A'

    // short (short integer type)
    short e = 32767;  // 'e' is a short integer variable, typically 2 bytes, with the value 32767

    // long (long integer type)
    long f = 1234567890; // 'f' is a long integer variable, typically 4 bytes (or 8 bytes on 64-bit systems)

    // unsigned int (unsigned integer type)
    unsigned int g = 4294967295; // 'g' is an unsigned integer, representing a positive number (0 to 4,294,967,295)

    // long long (long long integer type)
    long long h = 9223372036854775807; // 'h' is a long long integer, typically 8 bytes, for very large numbers
    
    // Print the values of the variables
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.11f\n", c);
    printf("d = %c\n", d);
    printf("e = %hd\n", e);
    printf("f = %ld\n", f);
    printf("g = %u\n", g);
    printf("h = %lld\n", h);

    return 0;
}
