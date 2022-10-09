#include<stdio.h>

float n1, n2, n3, media;

int main(){
	
	//entrada de dados
	printf("============================\n");
	printf("CALCULO DE MEDIA\n");
	printf("============================\n");
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	printf("Digite a terceira nota: ");
	scanf("%f",&n3);
	
	//calculo
	media = ( (n1*0.2) + (n2*0.3) + (n3*0.5) );
	
	//saida de dados
	printf("\n============================\n");
	printf("RESULTADOS\n");
	printf("Media do Aluno: %.2f",media);
	
	return 0;
}
