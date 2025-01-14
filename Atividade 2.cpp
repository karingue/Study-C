#include <stdio.h>
#include <math.h>



/*Comparando inteiros. Escreva um programa que
peça ao usuário que digite dois inteiros, obtenha os números e depois imprima o maior número seguido das
palavras ‘é maior’. Se os números forem iguais, imprima a mensagem “Esses números são iguais”. Use
apenas a forma de seleção única da instrução if que
você aprendeu neste capítulo.*/

int main (void){
	int n1,n2;
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);	
	printf("\n Digite o segundo numero:");
	scanf("%d",&n2);
	
	if(n1 > n2){
	printf("O primeiro numero e maior: %d",n1);
	}else if(n1 < n2){
	printf("O segundo numero e maior: %d",n2);	
	}else{
	printf("Os numeros sao iguais");
	}
	return 0;
}
