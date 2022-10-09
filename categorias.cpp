#include<stdio.h>

int idade;

int main(){
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if (idade >= 5 && idade <= 150){
		
		if (idade >= 5 && idade <= 7){
			printf("Categoria: Infantil");
		}
		else if (idade >= 8 && idade <= 10){
			printf("Categoria: Juvenil");
		}
		else if (idade >= 11 && idade <= 15){
			printf("Categoria: Adolescente");
		}
		else if (idade >= 16 && idade <= 30){
			printf("Categoria: Adulto");
		}
		else if (idade > 30){
			printf("Categoria: Senior");
		}
	}
	
	else {
		printf("IDADE INVALIDA!");
	}
	
	
	return 0;
}
