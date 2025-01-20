#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");	
	int contador, nota, total, media;
	
	total = 0;
	contador = 1;
	
	while (contador <= 10){
		printf("Digite sua nota: ");
		scanf("%d",&nota);
		total = total + nota;
		contador = contador + 1;
	} 
	media = total / 10;
	printf("A média da turma é: %d", media);
	
	return 0;
}
