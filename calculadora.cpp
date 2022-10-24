 #include<stdio.h>
 
float num1, num2, result;
char op;
 
 int main(){
 	printf("Digite o primeiro numero: ");
 	scanf("%f",&num1);
 	printf("Digite o segundo numero: ");
 	scanf("%f",&num2);
 	printf("Digite o sinal da operacao: ");
 	scanf(" %c",&op);
 	
 	switch(op){
 		case '+':
 		result = num1 + num2;
		printf("Resultado: %.2f",result);
		break;
	
		case '-':
		result = num1 - num2;
		printf("Resultado: %.2f",result);
		break;
		
		case '*':
		result = num1 * num2;
		printf("Resultado: %.2f",result);
		break;
		
		case '/':
		result = num1 / num2;
		printf("Resultado: %.2f",result);
		break;
		
		default:
			printf("Operacao invalida");
	 }
	 
	 return 0;
 }
