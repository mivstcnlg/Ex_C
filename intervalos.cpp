#include<stdio.h>
#include<locale.h>

float num;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("=====================================\n");
	printf("             INTERVALOS              \n");
	printf("=====================================\n");
	printf("Digite um numero: ");
	scanf("%f",&num);
	
	if (num >= 0 && num <= 100){
		
		if (num >= 0 && num <= 25){
			printf("Intervalo [0,25]");
		}
		
		else if (num >= 25.01 && num <= 50){
			printf("Intervalo (25,50]");
		}
		
		else if (num >= 50.01 && num <= 75){
			printf("Intervalo (50,75]");
		}
		else if (num >= 75.01 && num <= 100){
			printf("Intervalo (75,100]");
		}
	}
	
	else {
		printf("Numero digitado fora do intervalo.");
	}
	
	return 0;
}

