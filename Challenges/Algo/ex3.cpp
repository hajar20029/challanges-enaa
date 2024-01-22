#include <stdio.h>
#include <math.h>
int main() {
   float base , expo, result ;
   printf("Entrez la base:");
   scanf("%f", &base);
   printf("Entrez l'exposant:");
   scanf("%f", &expo);
   
   result = pow(base , expo);
   printf(" %.2f ^ %.2f = %.2f  " , base , expo , result );

    return 0;
}

