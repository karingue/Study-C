#include <stdio.h>
#include <math.h>



/*Comparando inteiros. Escreva um programa que
pe�a ao usu�rio que digite dois inteiros, obtenha os n�meros e depois imprima o maior n�mero seguido das
palavras �� maior�. Se os n�meros forem iguais, imprima a mensagem �Esses n�meros s�o iguais�. Use
apenas a forma de sele��o �nica da instru��o if que
voc� aprendeu neste cap�tulo.*/

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
