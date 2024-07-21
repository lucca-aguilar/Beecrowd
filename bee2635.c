#include <stdio.h>
#include <string.h>
#define MAX_L 100

int main () { 
    // declara a variável de quantidade de palavras pesquisadas anteriormente
    int numSearchedWords;

    while (scanf("%d", &numSearchedWords) != EOF) { // lê o número de palavras pesquisadas anteriormente
        getchar();  // remove o '\n' deixado pelo scanf

        // declara o vetor de palavras pesquisadas (possíveis correspondências)
        char searchedWords[numSearchedWords][MAX_L + 1];

        // lê as palavras já pesquisadas
        for (int i = 0; i < numSearchedWords; i++) {
            scanf("%[^\n]s", searchedWords[i]);
            getchar();
        }

        // lê a quantidade de palavras a serem pesquisadas
        int numWordsToSearch;
        scanf("%d", &numWordsToSearch);
        getchar();  // Remove o caractere '\n' deixado pelo scanf

        // lê as palavras a serem pesquisadas
        char wordsToSearch[numWordsToSearch][MAX_L + 1];
        for (int i = 0; i < numWordsToSearch; i++) {
            scanf("%[^\n]s", wordsToSearch[i]);
            getchar();
        }

        // verifica quais palavras devem aparecer a cada pesquisa
        for (int i = 0; i < numWordsToSearch; i++) {
            int counter = 0; // define um contador para armazenar o número de correspondências
            char longest[MAX_L + 1] = ""; // define uma string para armazenar a maior palavra correspondente

            for (int j = 0; j < numSearchedWords; j++) {
                if (strstr(searchedWords[j], wordsToSearch[i]) != NULL && searchedWords[j][0] == wordsToSearch[i][0]) { // se a palavra a pesquisar é substring de uma palavra pesquisada, soma 1
                    counter++;
                    if (strlen(searchedWords[j]) > strlen(longest)) { // se o comprimento da palavra pesquisada correspondente é maior do que o da string longest, copia para a string longest
                        strcpy(longest, searchedWords[j]);
                    }
                }
            }

            // calcula o comprimento da maior palavra 
            int lenLongest = strlen(longest);

            // imprime o resultado
            if (counter == 0) {
                printf("-1\n");
            } else {
                printf("%d %d\n", counter, lenLongest);
            }
        }
    }
    return 0;
}
