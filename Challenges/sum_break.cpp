#include<stdio.h>

int main(){
	
	int sum =0 , num;
	printf("enter les nombres:\n");
	while (true){
		
		scanf("%d",&num);
		if(num < 0){
			break;
		}
		sum+=num;	
	}
	printf("la somme des nombre est: %d\n", sum);
	
	return 0;	
}

