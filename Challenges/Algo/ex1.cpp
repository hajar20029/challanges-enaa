#include <stdio.h>

int main() {
    int a, b, c, max;
    
    printf("Entrez trois entiers : ");
    scanf("%d %d %d", &a, &b, &c);
    
    max = a; 
    
    if (b >= max) {
        max = b; 
    }
    
    else if (c >= max) {
        max = c; 
    }
    
    printf("Le plus grand des trois entiers est : %d\n", max);
    
    return 0;
}

