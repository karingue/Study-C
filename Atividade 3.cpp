#include <stdio.h>
#include <math.h>

/*Aritm�tica, maior e menor valor. Escreva um programa que leia tr�s inteiros diferentes do teclado, depois
apresente a soma, a m�dia, o produto, o menor e o maior
desses n�meros. Use apenas a forma de sele��o �nica da
instru��o if que voc� aprendeu neste cap�tulo.*/

int main(void){
	
	int n1,n2,n3;
	int maior, menor;
	printf("Digite tres numeros: ");
	scanf("%d  %d  %d",&n1,&n2,&n3);
	printf("%d %d %d \n", n1,n2,n3);
	
	int soma = n1 + n2 + n3;
	printf("A soma dos tres numeros e: %d \n",soma);
	
	int media = soma / 3;
	printf("A media dos tres numeros e: %d \n",media);
	
	int produto = n1 * n2 * n3;
	printf("O produto dos tres numeros e: %d \n",produto);
	
	
	if(n1 > n2 || n1 > n3) {
		maior = n1;
	}else if(n2 > n1 || n2 > n3){
		maior = n2;
	}else{
		maior = n3;
	}
	
	printf("O maior numero e: %d\n",maior);
	
	if(n1 < n2 || n1 < n3) {
		menor = n1;
	}else if(n2 < n1 || n2 < n3){
		menor = n2;
	}else{
		menor = n3;
	}
	
	printf("O menor numero e: %d",menor);
	
	
	return 0;
}
