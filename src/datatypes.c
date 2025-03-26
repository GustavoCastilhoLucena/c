#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'a'; // single character %c
    char b[] = "bazinga"; // array of characters %s
    float c = 3.141592653589793; // 4 bytes (32 bytes of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bytes of precision) 15 - 16 digits %lf
    bool e = true; // boolean, true or false, 1 byte %d

    char f = 81; // 1 byte (-128 to 127) %d or %c
    unsigned char g = 247; // 1 byte (0 to 255) %d or %c

    short int h = 1243; // 2 bytes (-32,768 to 32,767) %d
    unsigned short int i = 4000; // 2 bytes (0 to 65,535) %d

    int j = 987654321; // 4 bytes (-2,147,483,648 to 2,147,483,647) %d
    unsigned int k = 987654321; // 4 bytes (0 to 4,294,967,295) %u

    long long int l = 987654321987654321; // 8 bytes (-9 quintillion to 9 quintillion) %lld
    unsigned long long int m = 987654321987654321; // 8 bytes (0 to 18 quintillion) %llu

/* ------------------------------------------------------------------------------------------ */

    printf("%c\n", a);
    printf("%s\n", b);
    printf("%0.15f\n", c); // float
    printf("%0.15lf\n", d); // double
    printf("%d\n", e); // boolean

    printf("%d\n", f);
    printf("%c\n", f);

    printf("%d\n", g);
    printf("%c\n", g);

    printf("%d\n", h);
    printf("%d\n", i);

    printf("%d\n", j);
    printf("%u\n", k);

    printf("%lld\n", l);
    printf("%llu\n", m);

    return 0;
}