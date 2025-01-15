#include <stdio.h>

int main(void) {
    int alunos[100];  // Array para armazenar até 100 notas
    int soma = 0;     // Variável para somar as notas
    int i;            // Variável de iteração

    // Entrada das notas
    for (i = 0; i < 10; i++) { // Limite de 10 notas
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &alunos[i]); // Armazena a nota na posição i
        soma += alunos[i];       // Soma a nota atual à variável soma
    }

    // Exibição das notas
    printf("Notas armazenadas:\n");
    for (i = 0; i < 10; i++) {
        printf("Nota %d: %d\n", i + 1, alunos[i]);
    }

    // Cálculo e exibição da média
    float media = (float)soma / 10; // Divisão da soma pelo total de notas
    printf("A media e: %.2f\n", media); // Imprime a média com 2 casas decimais

    return 0;
}

