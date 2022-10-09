#include<stdio.h>
#include<math.h>

float raio, volume;

int main() {
	
	//entrada de dados
	printf("============================\n");
	printf("CACULO DO VOLUME DE UMA ESFERA\n");
	printf("============================\n");
	printf("Digite o valor do raio: ");
	scanf("%f",&raio);
	
	//cálculo
	volume = ((4.0/3.0)*3.14159*(pow(raio,3)));
	
	//saida de dados
	printf("\n============================\n");
	printf("RESULTADOS\n");
	printf("Valor do Volume: %.2f",volume);

	return 0;	
};
