#include <stdio.h>
#include <math.h>

/*Par ou �mpar. Escreva um programa que leia um inteiro, determine e imprima se ele � par ou �mpar. [Dica:
use o operador m�dulo. Um n�mero par � um m�ltiplo de dois. Qualquer m�ltiplo de dois gera resto zero
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
