#include<stdio.h>

int ano_atual, ano_nasc, idade, idade_2030;

int main(){
	
	printf("CALCULO DE IDADE\n");
	printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);
	
	printf("Digite o ano de nascimento: ");
	scanf("%d",&ano_nasc);
	
	//calculo idade atual
	idade = (ano_atual - ano_nasc);
	
	//calculo idade em 2030
	idade_2030 = (2030 - ano_nasc);
	
	//saida
	printf("\n==========================\n");
	printf("RESULTADOS\n");      
	printf("Idade atual: %d\n",idade);
	printf("Idade em 2030: %d",idade_2030);
	
	return 0;

}
