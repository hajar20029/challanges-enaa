#include<stdio.h>

int estImpair(int nb){
	return (nb % 2 == 0 );
	
}
int main(){
	
	int n ;
	printf("entrer un nombre :"); scanf("%d", &n);
	
	if (estImpair(n)){
		printf("le nombre est pair");
	}
	else printf("le nombre est impair");
	
}
