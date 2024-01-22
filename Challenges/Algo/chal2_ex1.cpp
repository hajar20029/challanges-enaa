#include <stdio.h>

int main() {
    float l , L ; 
    printf("entrer la Longueur de rect : "); scanf ("%f" , &l);
    printf("enter la Largeur de rect :  "); scanf("%f" , &L);
    
    float aire = L * l ;
    
    printf("le Aire de rect : %.2f", aire);
    
    return 0;
}

