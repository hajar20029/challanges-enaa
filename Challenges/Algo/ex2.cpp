#include <stdio.h>

int main() {
    float Fahrenheit, c;
   printf("Entrez la température en degrés Celsius :");
   scanf("%f", &c);
   
   Fahrenheit = (c*9/5)+32 ;
   printf("%.2f Celsius= %.2f " , c, Fahrenheit);

    return 0;
}

