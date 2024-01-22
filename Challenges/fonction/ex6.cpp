//#include<stdio.h>
//
//int add(int a , int b){
//	
//	return a+b;
//}
//
//int soustr(int a , int b){
//	
//	return a-b;
//}
//
//int mult(int a , int b){
//	
//	return a*b;
//}
//
//int main(){
//	
//	int x,y;
//	printf("entrer deux nombres:\n"); scanf("%d %d",&x , &y);
//	
////	printf("choisit l'opération à afficher (+ or - or x)"); scanf("%",&);
//	
//	printf("%d + %d = %d:\n" , x , y,  add(x,y));
//	printf("%d - %d = %d:\n" , x , y, soustr(x,y));
//	printf("%d x %d = %d:\n" , x , y, mult(x,y));
//	
//}


#include <stdio.h>

float addition(float a, float b) {
    return a + b;
}

float soustraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

int main() {
    float nbr1, nbr2, resultat;
    char choix;
	
    printf("Entrez le premier nombre : ");
    scanf("%f", &nbr1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &nbr2);

    printf("Choisissez l'operation (+ pour addition, - pour soustraction, * pour multiplication) : ");
    scanf(" %c", &choix);

    switch (choix) {
        case '+':
            resultat = addition(nbr1, nbr2);
            printf("Le resultat de l'addition est : %.2f\n", resultat);
            break;
        case '-':
            resultat = soustraction(nbr1, nbr2);
            printf("Le resultat de la soustraction est : %.2f\n", resultat);
            break;
        case '*':
            resultat = multiplication(nbr1, nbr2);
            printf("Le resultat de la multiplication est : %.2f\n", resultat);
            break;
        default:
            printf("Operation non valide.\n");
    }

    return 0;
}

