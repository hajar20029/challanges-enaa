#include <stdio.h>
#include <stdbool.h>
int main() {
    int nbr, i, pr;
    printf("Donnez un entier : \n");
    scanf("%d", &nbr);

    if (nbr == 0 || nbr == 1) {
        printf("%d n'est pas premier.\n", nbr);
    } else {
        pr = (true);
        for (i = 2; i < nbr; i++) {
            if (nbr % i == 0) {
                pr = 0;
                break; 
            }
        }
        if (pr == true) {
            printf("%d est premier.\n", nbr);
        } else {
            printf("%d n'est pas premier.\n", nbr);
        }
    }
}
