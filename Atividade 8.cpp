#include <stdio.h>
#include <math.h>

int main(void){
	float n;
	
	printf("Insira uma nota:");
	scanf("%f",&n);

	if( n >= 0 && n < 7.0){
		printf("Tem direito a exame");
	}else{
		printf("Não tem direito a exame");
	}

	return 0;
}
