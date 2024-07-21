#include <stdio.h>
#include <stdlib.h>

#define MAX_N 90

int main() {
    int number, numBalls;

    while (1) {
        // le o numero maximo e numero de bolas no globo
        scanf("%d %d", &number, &numBalls);
        if (number == 0 && numBalls == 0) {
            break;
        }

        // cria o array do numero das bolas no globo
        int balls[numBalls];
        for (int i = 0; i < numBalls; i++) {
            scanf("%d", &balls[i]);
        }

        // cria o array das diferencas
        int possible[MAX_N + 1] = {0};
        for (int i = 0; i < numBalls; i++) {
            for (int j = 0; j < numBalls; j++) {
                int diff = abs(balls[i] - balls[j]);
                possible[diff] = 1;
            }
        }

        // verifica se todos os numeros de 0 ateh o numero maximo sao possiveis
        int allPossible = 1;
        for (int i = 0; i <= number; i++) {
            if (possible[i] == 0) {
                allPossible = 0;
                break;
            }
        }

        // printa o resultado
        if (allPossible) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}
