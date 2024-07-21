#include <stdio.h>
#define MAX 2000

int main () {
    // declara as variaveis
    int numNumbers, index;

    // declara o vetor de repeticao de numeros e zera ele
    int numbersRepetition[MAX + 1];
    for (int i = 0; i <= MAX; i++) {
        numbersRepetition[i] = 0;
    }

    // le a quantidade de numeros que sera analisada
    scanf("%d", &numNumbers);

    // le os numeros e armazena quantas vezes cada um foi repetido
    for (int i = 0; i < numNumbers; i++) {
        scanf("%d", &index);
        numbersRepetition[index]++;
    }

    // imprime, na ordem crescente, quantas vezes cada numero foi repetido
    for (int i = 0; i <= MAX; i++) {
        if (numbersRepetition[i] >= 1) {
            printf("%d aparece %d vez(es)\n", i, numbersRepetition[i]);
        }
    }

    return 0;
}