#include<stdio.h>

float n1, n2, media;

int main(){
	
	printf("=======================\n");
	printf("CALCULO DE MEDIA \n");
	printf("=======================\n");
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	
	if (n1 > 0 && n1 <= 10 && n2 > 0 && n2 <= 10){
	
	media = ((n1+n2)/2);
	
	
	if (media >= 7 && media <= 10){
		printf("Aluno APROVADO!");
	}
		else if(media >= 3 && media < 7){
			printf("Aluno em EXAME!");
		}
			else if (media >= 0 && media < 3){
				printf("Aluno REPROVADO!");
			}
			
	}
	
	else {
		printf("INVALIDO!");
	}
	
	return 0;
}
