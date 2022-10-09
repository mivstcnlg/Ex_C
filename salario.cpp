#include<stdio.h>

float sal_atual, sal_novo;

int main(){
	
	printf("=========================\n");
	printf("CALCULO DE SALARIO\n");
	printf("Digite o valor do seu salario atual: ");
	scanf("%f",&sal_atual);
	
	sal_novo = (sal_atual + (sal_atual * 0.25));
	
	printf("\n=========================\n");
	printf("RESULTADOS\n");
	printf("Salario antigo: %.2f\n R$",sal_atual);
	printf("Salario novo: %.2f\n R$",sal_novo);
	
	return 0;
}
