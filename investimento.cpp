#include<stdio.h>

int tipo;
float valor, valor_total;

int main(){
	printf("|==============================================|\n");
	printf("| Tipo |      Descricao      | Redimento Mensal|\n");
	printf("|  1   |       Poupanca      |         3%      |\n");
	printf("|  2   | Fundo de renda fixa |         4%      |\n");
	printf("|==============================================|\n");
	
	printf("Digite o numero correspondente ao tipo de investimento: ");
	scanf("%d",&tipo);
	
	printf("Digite o valor que deseja investir: ");
	scanf("%f",&valor);
	
	if (tipo == 1 || tipo == 2){
		if (tipo == 1){
			valor_total = (valor + (valor *0.30));
			printf("Seu rendimento mensal sera de: R$ %.2f",valor_total);
		}
		
		else if (tipo == 2){
			valor_total = (valor + (valor *0.40));
			printf("Seu rendimento mensal sera de: R$ %.2f",valor_total);
		}
	}
	
	else {
		printf("\n Digite um tipo correspondente com a tabela!");
	}
	
	return 0;
}
