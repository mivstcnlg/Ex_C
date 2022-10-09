#include<stdio.h>

float lado_a, lado_b, lado_c;

int main() {
	printf("========================\n");
	printf("TIPO DE TRIANGULO\n");
	printf("========================\n");
	printf("Digite o lado A do triangulo: ");
	scanf("%f",&lado_a);
	printf("Digite o lado B do triangulo: ");
	scanf("%f",&lado_b);
	printf("Digite o lado C do triangulo: ");
	scanf("%f",&lado_c);
	
	if (lado_a + lado_b > lado_c && lado_b + lado_c > lado_a && lado_a + lado_c > lado_b){
	    
    	if (lado_a == lado_b && lado_b == lado_c){
    		printf("\nTriangulo: EQUILATERO");
    	}
        	else if (lado_a == lado_b || lado_c == lado_a || lado_b == lado_c) {
        		printf("\nTriangulo: ISOCELES");
        	}
            	else {
            		printf("\nTriangulo: ESCALENO");
            	}
	}
	
	else {
	    printf("\nINVALIDO!");
	}
	
	return 0;
}
