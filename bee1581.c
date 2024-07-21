#include <stdio.h>
#include <string.h>
#define MAX_L 20

int main () {
    // declara as variveis
    int numCases, numPeople;
    char commonLanguage[MAX_L + 1];

    // le o numero de casos 
    scanf("%d", &numCases);

    // inicia um loop para a quantidade de numero de casos
    for (int i = 0; i < numCases; i++) {
        // le a quantidade de pessoas na conversa
        scanf("%d", &numPeople);

        // declara um vetor para armazenar as linguas faladas pelas pessoas da conversa
        char languages[numPeople][MAX_L + 1];

        // le a lingua falada por cada pessoa da conversa
        for (int j = 0; j < numPeople; j++) {
            scanf("%s", languages[j]);
            getchar(); // se livra do \n ao fim da string
        }

        // define a linguagem comum como sendo a primeira
        strcpy(commonLanguage, languages[0]);

        for (int k = 1; k < numPeople; k++) { // analisa a lingua falada por cada pessoa e verifica se corresponde a lingua comum
            if (strcmp(languages[k], commonLanguage) != 0) { // se nao for igual, a linguagem comum eh definida como ingles 
                strcpy(commonLanguage, "ingles");
                break;
            } else {
                strcpy(commonLanguage, languages[0]);
            }
        }

        printf("%s\n", commonLanguage);
    }
    return 0;
}