#include<stdio.h>

int n1, n2;

int main(){
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	
	if (n1 != n2){
		
		if (n1 > n2) {
			printf("Maior: %d \n",n1);
			printf("Menor: %d \n",n2);
		}
		
		else if (n2 > n1){
			printf("Maior: %d \n",n2);
			printf("Menor: %d \n",n1);
		}
		
	}
	
	else {
		printf("Digite numeros diferentes.");
	}
	
	return 0;	
}
