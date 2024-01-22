#include<stdio.h>

void  Permuter(float a , float b){
	
	float P = a;
	a = b;
	b = P;
	printf("Avant la permutation : x = %.2f, y = %.2f\n", a, b);
	
}

int main() {
 	
	float x , y;
	
	//printf("entrere deux nombres : \n"); scanf("%.2f %.2f", &x ,&y);
	printf("entrez 2 nombres : \n"); scanf("%f %f",&x , &y);
	 
    
   printf("Apres  la permutation : x = %.2f, y = %.2f\n", x, y);

    Permuter(x, y);

  

    return 0;
}

	
	
	
	

