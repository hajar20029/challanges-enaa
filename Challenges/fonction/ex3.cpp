#include<stdio.h>
// function 1	
 int Max_2(int a,int b){
 	
 	return (a>b ? a : b);
 }
 // function 2 
 int Max_4( int a , int b , int c, int d){
 	
 	int max1 = Max_2(a,b);
 	
 	int max2 = Max_2(c,d);
 	
 	return Max_2(max1 , max2);
 }
int main(){
	 int num1 , num2 , num3 , num4;
	 
	 printf("entrez 4 nombre : \n"); scanf("%d %d %d %d" , &num1 , &num2 , &num3 , &num4);
	 
	 int max = Max_4(num1 , num2 , num3 , num4);
	 
	 printf(" le max de 4 entier est : %d", max);
	
	return 0;
	
}
