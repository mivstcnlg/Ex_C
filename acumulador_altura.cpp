#include<stdio.h>

int i, cont;
float media, alt;

float acum = 0;

int main(){
	for(i=0;i<=2;i++){
		printf("Digite a altura: ");
		scanf("%f",&alt);
		
		if (alt >= 1.50){
		    cont++;
		}
		
		acum += alt;
	}
	media = acum/3;
	printf("\n Media das alturas: %.2f \n",media);
	printf("Alturas maior que 1.50: %d \n",cont);
	printf("Soma das alturas: %.2f \n",acum);
	
	return 0;
}
