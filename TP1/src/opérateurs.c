#include <stdio.h>
#include <stdbool.h> // Pour utiliser le type booléen
int main() {
    int a = 16;
    int b = 3;
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;
    bool egal = (a == b);  
    bool superieur = (a > b); 
    printf("Valeurs initiales : a = %d, b = %d\n\n", a, b);
    printf("Addition (a + b)         : %d\n", addition);
    printf("Soustraction (a - b)     : %d\n", soustraction);
    printf("Multiplication (a * b)   : %d\n", multiplication);
    printf("Division (a / b)         : %d\n", division);
    printf("Modulo (a %% b)           : %d\n\n", modulo); // %% pour afficher %
    printf("a est-il égal à b ?      : %s\n", egal ? "true" : "false");
    printf("a est-il supérieur à b ? : %s\n", superieur ? "true" : "false");
    return 0;
}
