#include<stdio.h>
#include<locale.h>

int item, qtd;
float total;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("==========================================\n");
	printf("                LANCHONETE                \n");
	printf("==========================================\n");
	printf("__________________________________________\n");
	printf("|  CODIGO   |     PRODUTO     |   PRECO  |\n");
	printf("|    1      | Cachorro-Quente |  R$ 4,00 |\n");
	printf("|    2      | X-Salada        |  R$ 4,50 |\n");
	printf("|    3      | X-Bacon         |  R$ 5,00 |\n");
	printf("|    4      | Torrada Simples |  R$ 2,00 |\n");
	printf("|    5      | Refrigerante    |  R$ 4,00 |\n");
	printf("|________________________________________|\n\n");
	printf("Digite o codigo: ");
	scanf("%d",&item);
	printf("Digite a quantidade desejada: ");
	scanf("%d",&qtd);
	
	if (item == 1 || item == 2 || item == 3 || item == 4 || item == 5){
		
		if (item == 1){
			total = (qtd * 4.00);
			printf("Total: R$ %.2f",total);
		}
		
		else if (item == 2){
			total = (qtd * 4.50);
			printf("Total: R$ %.2f",total);
		}
		
		else if (item == 3){
			total = (qtd * 5.00);
			printf("Total: R$ %.2f",total);
		}
		
		else if (item == 4){
			total = (qtd * 2.00);
			printf("Total: R$ %.2f",total);
		}
		
		else if (item == 5){
			total = (qtd * 1.50);
			printf("Total: R$ %.2f",total);
		}
	}
	
	else {
		printf("O codigo digitado nao pertence ao cardapio");
	}
	
	return 0;	
}

