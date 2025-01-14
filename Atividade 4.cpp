#include <stdio.h>
#include <math.h>

/*Par ou ímpar. Escreva um programa que leia um inteiro, determine e imprima se ele é par ou ímpar. [Dica:
use o operador módulo. Um número par é um múltiplo de dois. Qualquer múltiplo de dois gera resto zero
quando dividido por 2.]*/

int main (void){
	int a;
	printf("Digite um numero:");
	scanf("%d",&a);
	
	if ( a%2 == 0){
		printf("O numero e par");
	}else{
		printf("O numero e impar");
	}
	return 0;	
}
