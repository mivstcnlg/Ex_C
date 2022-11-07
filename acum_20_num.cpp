#include<stdio.h>

int i;
float num, acum_cin = 0, acum = 0, media;

int main(){
	for(i=0; i<19; i++){
		printf("Digite um numero: ");
		scanf("%f",&num);
		acum += num;
		
		if (num < 50){
			acum_cin += num;
		}
	
	}
	
	media = acum/20;
	
	printf("Soma dos numeros maiores que 50: %.2f \n",acum_cin);
	printf("Media de todos os numeros: %.2f \n",media);
	
	return 0;
}
