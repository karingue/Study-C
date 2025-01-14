#include <stdio.h>
#include <math.h>

/*3 Maiores e menores inteiros. Escreva um programa
que leia cinco inteiros e depois determine e imprima o
maior e o menor inteiro no grupo. Use apenas as técnicas
de programação que você aprendeu neste capítulo.*/

	
	
#include <stdio.h>

int main(void) {
    int a, b, c, d, e;
    int maior, menor;

    // Entrada dos números
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);
    printf("Digite o quarto numero: ");
    scanf("%d", &d);
    printf("Digite o quinto numero: ");
    scanf("%d", &e);

    // Inicializando maior e menor com o primeiro número
    maior = menor = a;

    // Comparações para encontrar o maior número
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;
    if (e > maior) maior = e;

    // Comparações para encontrar o menor número
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;
    if (e < menor) menor = e;

    // Exibindo os resultados
    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

    return 0;
}

