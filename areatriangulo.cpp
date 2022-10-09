#include<stdio.h>

float area, base, h;

int main(){
	
	printf("======================\n");
	printf("CALCULO DA AREA DE UM TRIANGULO\n");
	printf("Digite a base do triangulo: ");
	scanf("%f",&base);
	printf("Digite a altura do triangulo: ");
	scanf("%f",&h);
	
	area = ((base * h)/2);
	
	printf("======================\n");
	printf("RESULTADOS\n");
	printf("Area do triangulo: %.2f",area);
	
	return 0;
}
