#include <stdio.h>
#include <string.h>
#define MAX_L 1000

int main() {
    int numCases;
    char strNumberSequence[MAX_L];

    while (1) {
        // lê o número de casos
        scanf("%d", &numCases);

        if (numCases == 0) { // quebra o loop se o numero de casos eh nulo
            break;
        }

        for (int i = 0; i < numCases; i++) {
            // lê a string com os caracteres
            scanf("%s", strNumberSequence);
            
            // declara um vetor de inteiros
            int intNumberSequence[strlen(strNumberSequence)];

            // converte a string em um vetor de inteiros
            for (int j = 0; j < strlen(strNumberSequence); j++) {
                intNumberSequence[j] = strNumberSequence[j] - '0';
            }

            // calcula o dígito descompactador
            int digit = 0;
            for (int j = 0; j < strlen(strNumberSequence); j++) {
                digit += intNumberSequence[j];
            }

            // reduz a soma dos números até que seja um único dígito
            while (digit >= 10) {
                int sum = 0;
                while (digit > 0) {
                    sum += digit % 10;
                    digit /= 10;
                }
                digit = sum;
            }

            // printa o dígito descompactador
            printf("%d\n", digit);
        }
    }

    return 0;
}