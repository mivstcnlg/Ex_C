#include<stdio.h>
#include<math.h>

int num1, num2;
float num3, calc_a, calc_b, calc_c;


int main() {
	
	//entrada de dados
	printf("============================\n");
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro numero sendo real: ");
	scanf("%f",&num3);
	
	//calculos
	calc_a = ((num1*2) * (num2/2));
	calc_b = ((num1*3) + num3);
	calc_c = pow(num3,3);
	
	//saida de dados
	printf("\n============================\n");
	printf("RESULTADOS\n");	
	printf("Produto do dobro do primeiro com a metade do segundo: %.2f",calc_a);
	printf("\n--------------------------------------------------------------\n");
	printf("Soma do triplo do primeiro com o terceiro: %.2f",calc_b);
	printf("\n--------------------------------------------------------------\n");
	printf("Terceiro numero ao cubo: %.2f",calc_c);
	printf("\n--------------------------------------------------------------\n");
	
	
	return 0;
}
