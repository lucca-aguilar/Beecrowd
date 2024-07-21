#include <stdio.h>
#include <string.h>
#define MAX 100

int main () {
    // declara as variaveis
    int numCases;

    // le a quantidade de casos
    scanf("%d", &numCases);
    getchar();

    // inicia o loop
    for (int j = 0; j < numCases; j++) {
        // declara a string
        char string[MAX];

        // le a string
        scanf("%[^\n]%*c", string);
        
        // imprime a primeira metade da string ao contrário
        int len = strlen(string);
        for (int i = (len/2) - 1; i >= 0; i--) {
            printf("%c", string[i]);
        }
        
        // imprime a segunda metade da string ao contrário
        for (int i = len - 1; i >= (len/2); i--) {
            printf("%c", string[i]);
        }

        // imprime um espaço em branco
        printf("\n");
    }
    return 0;
}