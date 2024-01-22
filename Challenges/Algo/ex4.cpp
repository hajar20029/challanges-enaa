#include<stdio.h>

int a , b , s , p;

int main(){
printf("entrer le premier nombre :");  scanf("%d",&a);
printf("entrer la deuxieme nombre :"); scanf("%d",&b);
	
s= a+b;
p=a*b;

if (s > 0) 
printf("la somme est positif \n");
else if (s < 0 )
printf("la somme est negatif \n");
else printf("la somme egel zero\n");

if (p > 0)
printf("le preduit est positif \n");
else if (p < 0)
printf("le preduit est negatif \n");

}
