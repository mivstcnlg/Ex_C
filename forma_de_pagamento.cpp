#include<stdio.h>

int pag;
float valor, vf;

int main(){
	printf("Digite o valor do produto: ");
	scanf("%f",&valor);
	printf("Formas de pagamento\n");
	printf("1: a vista\n");
	printf("2: a prazo\n");
	printf("Digite a forma de pagamento: ");
	scanf("%d",&pag);
	
	switch(pag){
		case 1:
			vf = valor - (valor * 0.10);
			printf("Valor final: R$ %.2f",vf);
		break;
		
		case 2:
			printf("Valor final: R$ %.2f",valor);
		break;
		
		default: 
			printf("Forma de pagamento invalida.");
	}
	return 0;
}
