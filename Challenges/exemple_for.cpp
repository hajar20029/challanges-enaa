#include<stdio.h>

int main(){
	

	
	float note;
	do{
		printf("Donner une note entre 0 et 20: \n");
		scanf("%f",&note);
	
		
	}
	while (note<0 || note >20);
	
	printf("La note saisie est %f \n",note);

}
