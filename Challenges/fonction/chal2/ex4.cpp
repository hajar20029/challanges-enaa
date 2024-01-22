#include<stdio.h>
#include <stdbool.h>
int divededby(int n,int a ){
	int d;
	d=n/a;
	 
	if (d < 1 ) {
        return false;
		  
	}
	    bool p = true;
	
		for(int i=2 ; i<= d; i++){
			if( d % i == 0){
				p=false;
			break;
			}
				}printf(" %d / %d = ", n,a,d);
				
				
		 if(p==true){
     	printf("%d est un nombre entier premier.\n",d);
	 }else 
	 
	    printf("%d n'est un nombre entier premier.\n",d);	
}
int main(){
	
	int a,n ;
	printf("entrer le premier nombre:"); 
	scanf("%d",&a);
	printf("entrer la deuxieme nombre:");
	 scanf("%d",&n);
	divededby(a,n);

	return 0;
}
