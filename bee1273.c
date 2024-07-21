#include <stdio.h>
#include <string.h>
#define MAX_L 50

int main() {
    // declara as variáveis
    int numWords, difference, counter = 0;

    while (1) {      
        // declara a maior string como sendo nula
        char longest[MAX_L + 1] = "";

        // le o número de palavras a serem analisadas
        scanf("%d", &numWords);
        getchar();

        if (numWords == 0) { // encerra o programa caso a entrada seja 0
            break;
        }

        // define a matriz de strings
        char strings[numWords][MAX_L + 1];

        // le as entradas de strings
        for (int i = 0; i < numWords; i++) {
            scanf("%[^\n]s", strings[i]);
            getchar();
        }

        // printa uma linha em branco entre os casos de teste (se n for o primeiro)
        if (counter != 0) {
            printf("\n");
        }

        // verifica qual é a maior string
        for (int i = 0; i < numWords; i++) {
            if (strlen(strings[i]) > strlen(longest)) {
                strcpy(longest, strings[i]);
            }
        }

        // adiciona espaços à esquerda para cada string
        for (int i = 0; i < numWords; i++) {
            difference = strlen(longest) - strlen(strings[i]);
            if (difference > 0) {
                char temporaryString[MAX_L + 1] = ""; // string temporária
                for (int j = 0; j < difference; j++) {
                    strcat(temporaryString, " ");
                }
                strcat(temporaryString, strings[i]);
                strcpy(strings[i], temporaryString);
            }
        }

        // printa o resultado
        for (int i = 0; i < numWords; i++) {
            printf("%s\n", strings[i]);
        }
        counter++;
    }

    return 0;
}
