#include<stdio.h>

int i, cont_a, cont_e, cont_r;
float n1, n2, media;

int main(){
	for (i=0;i<=3;i++){
		printf("Digite a primeira nota: ");
		scanf("%f",&n1);
		printf("Digite a segunda nota: ");
		scanf("%f",&n2);
		
		media = (n1 + n2)/2;
		
		if (media >= 7 && media <= 10){
			cont_a++;
		}
		else if (media >= 3 && media <7){
			cont_e++;
		}
		else if (media >= 0 && media <3){
			cont_r++;
		}
	}
	printf("Aprovados: %d \n",cont_a);
	printf("Alunos para exame: %d \n",cont_e);
	printf("Reprovados: %d \n",cont_r);
	
	return 0;
}
