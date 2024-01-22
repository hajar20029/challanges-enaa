#include<stdio.h>
#include<stdbool.h>

bool isValide(int a){
	while(a<=1){
	printf("entrer un nombre valide");
	break;
	
	}
	
}
bool isPremier( int a){
	isValide(a);
	scanf("%d",&a);
		for(int i=2 ; i<a ; i++){
			if( a % i == 0){
				return false;
			}   	
		}
	return true;	
}
int main(){
	
	int n ;
	printf("entrer un nombre:"); scanf("%d",&n);
     
     if(isPremier(n)){
     	printf("%d est un nombre premier.\n",n);
	 }else 
	    printf("%d n'est un nombre premier.\n",n);
	return 0;
}
