#include <stdio.h>
#include <math.h>

	

int main(void) {

	char nome[50];
	int idade;
	float altura;

	printf("Digite seu nome: \n");
	scanf("%s",&nome);
	printf("Digite sua idade: \n");
	scanf("%d",&idade);
	printf("Digite sua altura: \n");
	scanf("%f",&altura);
	
	printf("Seu nome e %s, voce tem %d  sua altura e %.2f", nome, idade, altura);

return 0;
}
