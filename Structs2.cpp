#include <stdio.h>
#include <locale.h>

struct produto{
	int cod;
	float valor;
};

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	struct produto p;
	
	printf("Digite o Codigo do produto: \n");
	scanf("%d",&p.cod);
	
	printf("Digite o Valor do produto: \n");
	scanf("%f",&p.valor);
	
	printf("Os codigos são: \n");
	printf("Código: %d\n",p.cod);
	printf("Valor: %.2f\n",p.valor);
	
}
