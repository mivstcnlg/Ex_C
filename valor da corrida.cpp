#include<stdio.h>

float km, result, km_rodados;

int main(){
	
	//entrada de dados
	printf("============================\n");
	printf("CALCULO DE VALOR DA CORRIDA DE TAXI\n");
	printf("============================\n");
	printf("Digite o numero de km que ira percorrer: ");
	scanf("%f",&km);
	
	//calculo
	km_rodados = (km * 3.00);
	result = (km_rodados + 4.90);
	
	//saida de dados
	printf("\n============================\n");
	printf("RESULTADOS\n");
	printf("Valor da corrida: %.2f",result);
	
	return 0;
}
