#include <stdio.h>
#include <math.h>


int main(void){
	
	int vet[5] = {0,0,0,0,0};
	int i;//Variavel de interação
	
	for(i=0;i<5;i++){
		printf("Insira o elemento da posicao %d:",i);
		scanf("%d",&vet[i]);
	}
	
	 for(i=0;i<5;i++){
		printf("Os elementos sao %d \n",vet[i]);
	}	
	
	
		
	
	return 0;
}
