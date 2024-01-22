#include <stdio.h>

// Déclaration de la fonction Permuter
void Permuter(float *a, float *b) {
   float p = *a;
   *a = *b;
   *b = p;
}

int main() {
 	
	float x , y;
	
	//printf("entrere deux nombres : \n"); scanf("%.2f %.2f", &x ,&y);
	printf("entrez 2 nombres : \n"); scanf("%f %f",&x , &y);
	 
    
   printf("Avant la permutation : x = %.2f, y = %.2f\n", x, y);

    Permuter(&x, &y);

  printf("Après la permutation : x = %.2f, y = %.2f\n", x, y);

    return 0;
}

