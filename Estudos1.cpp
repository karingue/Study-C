#include <stdio.h>

int main(void){
	
	
	int n1, n2;
	
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero:");
	scanf("%d",&n2);
	
	int soma = n1 + n2;
	int multiplica = n1 * n2;
	int divisao = n1 / n2;

	printf("A soma desses numeros e:%2.d \n",soma);
	printf("A soma desses numeros e:%2.d \n",multiplica);	
	printf("A soma desses numeros e:%2.d \n",divisao);	
	return 0;
}


