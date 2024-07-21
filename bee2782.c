#include <stdio.h>
#include <stdlib.h>

int main () {
    // declara as variaveis
    int sequenceSize, sequencesTotal = 1, new;

    // le o tamanho do vetor 
    scanf("%d", &sequenceSize);

    // declara os vetores
    int numbers[sequenceSize];
    int differences[sequenceSize - 1];

    // zera os vetores
    for (int i = 0; i < sequenceSize; i++) {
        numbers[i] = 0;
    }

    for (int i = 0; i < sequenceSize - 1; i++) {
        differences[i] = 0;
    }

    // le os numeros do vetor
    for (int i = 0; i < sequenceSize; i++) {
        scanf("%d", &numbers[i]);
    }

    // calcula as diferencas absolutas entre os numeros do vetor
    for (int i = 0; i < sequenceSize - 1; i++) {
        differences[i] = abs(numbers[i + 1] - numbers[i]);
    }

    // conta a quantidade de escadinhas
    for (int i = 1; i < sequenceSize - 1; i++) {
        for (int j = 0; j < i; j++) {
            if (differences[i] != differences[j]) {
                new = 1;
            } else {
                new = 0;
            }
        }
        if (new == 1) {
            sequencesTotal++;
        }
    }

    if (sequenceSize == 1) {
        sequencesTotal = 1;
    }

    // mostra a quantidade de escadinhas
    printf("%d\n", sequencesTotal);
    
    return 0;
}