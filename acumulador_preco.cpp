#include<stdio.h>

int i, cod, aux = 0, id = 0;
float preco, media, acum = 0;

int main(){
	for(i=0;i<5;i++){
		printf("Digite o codigo do produto: ");
		scanf("%d",&cod);
		printf("Digite o preco do produto: ");
		scanf("%f",&preco);
		
		acum += preco;
		
		if (preco > aux){
			aux = preco;
			id = cod;
		}	
		
	}
	
	media = acum/5;
	printf("Media dos precos dos produtos: %.2f",media);
	printf("Produto com maior valor %d: R$ %.2f",id,aux);
	
	return 0;
}
