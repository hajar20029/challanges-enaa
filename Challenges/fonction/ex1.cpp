#include<stdio.h>
//#include <iostream>
//using namespace std;
void bjr(char nom[5]){
	printf("bonjour %s! \n",nom);
}
int main(){
	char nom[5];
	printf("entrer votre nom:"); scanf("%s",&nom);
	bjr(nom);
   
	return 0;
}
