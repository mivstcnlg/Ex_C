#include<stdio.h>

int num;

int main(){
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if (num >= -10 && num <= 25){
		if (num >= -10 && num <= 0){
			printf("Intervalo: [-10,0]");
		}
		else if (num >= 1 && num <= 11){
			printf("Intervalo: [1,11]");
		}
		else if (num >= 12 && num <= 24){
			printf("Intervalo: [12,24]");
		}
		else{
			printf("Numero igual a 25.");
		}
	}
	else{
		printf("O numero digitado nao esta dentros dos intervalos.");
	}
	
	return 0;
}
