#include <stdio.h>
int main() {
    signed char s_char = -9;
    unsigned char u_char = 99;
    signed short s_short = -9;
    unsigned short u_short = 99;
    signed int s_int = -9;
    unsigned int u_int = 99;
    signed long int s_long = -9L;
    unsigned long int u_long = 99UL;
    signed long long int s_llong = -9LL;
    unsigned long long int u_llong = 99ULL;
    float f = 3.1f;
    double d = 2.7;
    long double ld = 1.6L;
    printf("Valeurs des variables de types de base :\n\n");
    printf("signed char           : %d\n", s_char);
    printf("unsigned char         : %u\n", u_char);
    printf("signed short          : %d\n", s_short);
    printf("unsigned short        : %u\n", u_short);
    printf("signed int            : %d\n", s_int);
    printf("unsigned int          : %u\n", u_int);
    printf("signed long int       : %ld\n", s_long);
    printf("unsigned long int     : %lu\n", u_long);
    printf("signed long long int  : %lld\n", s_llong);
    printf("unsigned long long int: %llu\n", u_llong);
    printf("float                 : %.1f\n", f);
    printf("double                : %.1f\n", d);
    printf("long double           : %.1Lf\n", ld);
    return 0;
}
