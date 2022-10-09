#include<stdio.h>

int qtde;
float total;

int main(){
	
	printf("=================================\n");
	printf("SACOLAO\n");
	printf("Digite o numero de maças compradas: ");
	scanf("%d",&qtde);
	
	if (qtde < 12){
		total = (qtde * 1.30);
	}
	else {
		total = (qtde * 1.00);	
	};
	
	printf("\n=================================\n");
	printf("RESULTADO\n");
	printf("Total da compra: R$ %.2f\n",total);
	
	
	return 0;
}
