#include<stdio.h>
int facto(int n ){
	 int f = 1;
	for(int i=1 ; i<= n; i++){
	f *= i;		
	}
	return f;
}

int main(){
	
  int n , ruslt;
  printf("entrer un nombre\n"); scanf("%d", &n);
  ruslt = facto(n);
 printf("%d! = %d",n,ruslt);

   return 0;	
	
}
