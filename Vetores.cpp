#include <stdio.h>
#include <math.h>


int main(void){
	
	int vet[3][3] = {{0,0,0},
					 {0,0,0},
					 {0,0,0}};
	int i,j;//Variavel de intera��o
		
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t %d",vet[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
