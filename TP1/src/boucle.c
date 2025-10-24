#include <stdio.h>

int main() {
    int compteur = 5;
    if (compteur >= 10) {
        printf("Le compteur doit être < à 10.\n");
        return 1;
    }
    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i == compteur) {
                printf("* ");
                j++;
                continue;
            }
            if (j % 2 == 0) {
                printf("# ");
            } else {
                printf("* ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
