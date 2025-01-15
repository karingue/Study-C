#include <stdio.h>

int main(void) {
    int alunos[100];  // Array para armazenar at� 100 notas
    int soma = 0;     // Vari�vel para somar as notas
    int i;            // Vari�vel de itera��o

    // Entrada das notas
    for (i = 0; i < 10; i++) { // Limite de 10 notas
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &alunos[i]); // Armazena a nota na posi��o i
        soma += alunos[i];       // Soma a nota atual � vari�vel soma
    }

    // Exibi��o das notas
    printf("Notas armazenadas:\n");
    for (i = 0; i < 10; i++) {
        printf("Nota %d: %d\n", i + 1, alunos[i]);
    }

    // C�lculo e exibi��o da m�dia
    float media = (float)soma / 10; // Divis�o da soma pelo total de notas
    printf("A media e: %.2f\n", media); // Imprime a m�dia com 2 casas decimais

    return 0;
}

