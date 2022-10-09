#include<math.h>
#include<stdio.h>

float num, quad, cub, raizq, raizc, rpow;

int main(){
	
	printf("=================================\n");
	printf("Digite um numero: ");
	scanf("%f",&num);
	
	
	quad = pow(num,2);
	cub = pow(num,3);
	raizq = sqrt(num);
	raizc = cbrt(num);
	rpow = pow(num,(4.0/7.0));
	
	printf("\n=================================\n");
	printf("RESULTADOS\n");
	printf("=================================\n");
	printf("Ao quadrado: %.2f \n",quad);
	printf("Ao cubo: %.2f \n",cub);
	printf("Raiz quadrado: %.2f \n",raizq);
	printf("Raiz cubica: %.2f \n",raizc);
	printf("Raiz com potencia: %.2f",rpow);
	
	
	return 0;
}
