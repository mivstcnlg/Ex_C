#include<stdio.h>

int i, num, j;

int main(){
	for (i=0;i<31;i++){
		printf("Digite um numero: ");
		scanf("%d",num);
	}
	if(num >= 5 && num <= 100){
		j++;
	}
	
	printf("%d",j);
	
	return 0;
}
