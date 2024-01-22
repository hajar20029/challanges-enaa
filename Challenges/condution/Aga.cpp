#include<stdio.h>
int main(){
	float age;
	
	printf("enter l'age d'un enfant "); scanf("%f", &age);
	if(age >=6 && age <= 7) {
		printf("l'enfant est poussin");
	}
	else if(age >=8 && age <= 9) {
	    	printf("l'enfant est pupille");

	}
	else if(age >=10 && age <=11){
			    printf("l'enfant est minime");

	}
    else if (age >=12) {
    		    printf("l'enfant est cadet");

	}
}
