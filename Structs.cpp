#include <stdio.h>
#include <math.h>

struct novo_tipo{
	int dado;
	float valor;
};

int main (void){
	struct novo_tipo variavel;
	
	variavel.dado = 10;
	variavel.valor = 22.22;
	
	printf("%d %f",variavel.dado, variavel.valor);   
}
