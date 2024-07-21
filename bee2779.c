#include <stdio.h>

int main() {
    // declara as variaveis
    int numStickers, numBoughtStickers, index, missing = 0;

    // le a quantidade de figurinhas total e a quantidade de figurinhas compradas
    scanf("%d %d", &numStickers, &numBoughtStickers);

    // declara e zera o vetor de figurinhas compradas
    int boughtStickers[numStickers + 1];
    for (int i = 0; i <= numStickers; i++) {
        boughtStickers[i] = 0;
    }

    // le as figurinhas compradas
    for (int i = 0; i < numBoughtStickers; i++) {
        scanf("%d", &index);
        boughtStickers[index]++;
    }

    // calcula quantas figurinhas faltam
    for (int i = 1; i <= numStickers; i++) {
        if (boughtStickers[i] == 0) {
            missing++;
        }
    }

    // imprime quantas figurinhas faltam
    printf("%d\n", missing);

    return 0;
}