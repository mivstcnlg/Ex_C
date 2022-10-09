#include<stdio.h>

char genero, nome[40], apelido[10];

int main(){
	
	printf("============================\n");
	printf("====CADASTRO DO PACIENTE====\n");
	printf("Digite seu nome: ");
	scanf("%[^\n]",&nome);
	printf("Como deseja ser chamado? ");
	scanf("%s",&apelido);
	printf("Digite seu genero: ");
	scanf(" %c",&genero);
	
	
	printf("=============================\n");
	printf("\n Nome: %s",nome);
	printf("\n Apelido: %s",apelido);
	printf("\n Genero: %c",genero);
	
	return 0;
}
