#include<stdio.h>

int add(int a , int b){
	
	return a+b;
}

int main(){
	
	int x , y;
	printf("entrer le premier nombre: "); scanf("%d",&x);
	printf("entrer la deuxieme nombre:");  scanf("%d",&y);
	printf("%d + %d = %d", x,y,add(x,y));

	
	
}
