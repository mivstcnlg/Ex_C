#include<stdio.h>

int ano_nasc, ano_atual, idade;

int main(){
	
	printf("=================================\n");
	printf("VOTAR OU NAO\n");
	printf("=================================\n");
	printf("Digite o ano de seu nascimento: ");
	scanf("%d",&ano_nasc);
	printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);
	printf("\n========================\n");
	
	idade = (ano_atual - ano_nasc);
	
	if (idade >= 16){
		printf("PODE VOTAR!");
	}
	else{
		printf("NAO PODE VOTAR!");
	};
		
	return 0;
}
