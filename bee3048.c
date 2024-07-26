#include <stdio.h>
#define MAX 500

int main () {
    // declara as variaveis e o vetor sequencia
    int counter = 0, numNumbers, lastCounted = 0;
    int numberSequence[MAX];

    // le o numero de casos
    scanf("%d", &numNumbers);

    // le a sequencia
    for (int i = 0; i < numNumbers; i++) {
        scanf("%d", &numberSequence[i]);
    }

    // conta a quantidade maxima de numeros que podem ser marcados
    for (int i = 0; i < numNumbers; i++) {
        if (lastCounted == 0) {
            lastCounted = numberSequence[i];
            counter++;  // conta o primeiro número
        } else {
            if (numberSequence[i] != lastCounted) {
                lastCounted = numberSequence[i];
                counter++;
            }
        }
    }

    // imprime o resultado
    printf("%d\n", counter);

    return 0;
}
