#include<stdio.h>
#include<locale.h>

int qtd_morangos, qtd_maca, soma_qtd;
float t_morangos, t_maca, total, total_desc;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("==========================================\n");
	printf("                HORTI-FRUTI                \n");
	printf("==========================================\n");
	printf("______________________________________________\n");
	printf("|          |     ATE 5Kg    |   ACIMA DE 5Kg  |\n");
	printf("| MORANGOS | R$ 2,50 por Kg |  R$ 2,20 por Kg |\n");
	printf("|  MACAS   | R$ 1,80 por Kg |  R$ 1,50 por Kg |\n");
	printf("|_____________________________________________|\n\n");
	printf("Digite a quantidade(kg) de morangos: ");
	scanf("%d",&qtd_morangos);
	printf("Digite a quantidade(kg) de macas: ");
	scanf("%d",&qtd_maca);
	
	//calculo dos totais
	//morangos
	if (qtd_morangos <= 5){
		t_morangos = (qtd_morangos * 2.50);
	}
	
	else if (qtd_morangos > 5){
		t_morangos = (qtd_morangos * 2.20);
	}
	
	//macas
	if (qtd_maca <= 5){
		t_maca = (qtd_maca * 1.80);
	}
	
	else if (qtd_maca > 5){
		t_maca = (qtd_maca * 1.50);
	}
	
	soma_qtd = (qtd_morangos + qtd_maca);
	total = (t_morangos + t_maca);
	
	if (soma_qtd > 8 || total > 25.00){
		total_desc = total - (total * 0.10);
		printf("Total: R$ %.2f",total_desc);
	}
	else{
		printf("Total: R$ %.2f",total);
	}
	
	return 0;
}

