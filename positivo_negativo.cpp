#include<stdio.h>

float num;

int main(){

	printf("Digite um numero: ");
	scanf("%f",&num);
	
	if (num >= 0){
		printf("Positivo");
	}
	else{
		printf("Negativo");
	};
		
	return 0;
};
