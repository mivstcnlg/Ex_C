#include<stdio.h>
#include<locale.h>

int ddd;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("=====================================\n");
	printf("                 DDD                 \n");
	printf("=====================================\n");
	printf("Digite o numero do DDD: ");
	scanf("%d",&ddd);
	
	if (ddd == 61 || ddd == 71 || ddd == 11 || ddd == 21 || ddd == 32 || ddd == 19 || ddd == 27 || ddd == 31) {
		
		if (ddd == 61){
			printf("Brasilia");
		}
		
		else if (ddd == 71){
			printf("Salvador");
		}
		
		else if (ddd == 11){
			printf("Sao Paulo");
		}
		
		else if (ddd == 21){
			printf("Rio de Janeiro");
		}
		
		else if (ddd == 32){
			printf("Juiz de Fora");
		}
		
		else if (ddd == 19){
			printf("Campinas");
		}
		
		else if (ddd == 27){
			printf("Vitoria");
		}
		
		else if (ddd == 31){
			printf("Belo Horizonte");
		}
	}
	
	else {
		printf("DDD digitado nao cadastrado.");
	}


	return 0;	
}
