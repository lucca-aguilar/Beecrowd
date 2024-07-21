#include <stdio.h>
#include <string.h>
#define MAX_L 100
#define TRUE 0
#define FALSE 1

int main () {
    // declara as variaveis
    int numCases;
    scanf("%d", &numCases);
    getchar();

    // inicia o loop para o numero de casos
    for (int i = 0; i < numCases; i++) {
        int failure = FALSE;
        char licensePlate[MAX_L + 1];
        scanf("%[^\n]s", licensePlate);
        getchar();

        // verifica se a string possui o tamanho permitido
        if (strlen(licensePlate) != 8) {
            failure = TRUE;
        }

        // verifica se os primeiros caracteres sao letras maiusculas
        for (int j = 0; j < 3; j++) {
            if (licensePlate[j] < 65 || licensePlate[j] > 90) {
                failure = TRUE;
            }
        }

        // verifica se possui um hifen na posicao correta
        if (licensePlate[3] != '-') {
            failure = TRUE;
        }

        // verifica se os ultimos caracteres sao digitos de 0 a 9
        for (int j = 4; j < 8; j++) {
            if (licensePlate[j] < 48 || licensePlate[j] > 57) {
                failure = TRUE;
            }
        }

        // caso nao seja valida, imprime "FAILURE"
        if (failure == TRUE) {
            printf("FAILURE\n");
            continue;
        } 

        // caso nao seja falha, verifica o ultimo digito e imprime o dia da semana corretamente
        if (licensePlate[7] == '1' || licensePlate[7] == '2') {
            printf("MONDAY\n");
        } else if (licensePlate[7] == '3' || licensePlate[7] == '4') {
            printf("TUESDAY\n");
        } else if (licensePlate[7] == '5' || licensePlate[7] == '6') {
            printf("WEDNESDAY\n");
        } else if (licensePlate[7] == '7' || licensePlate[7] == '8') {
            printf("THURSDAY\n");
        } else if (licensePlate[7] == '9' || licensePlate[7] == '0') {
            printf("FRIDAY\n");
        } 
    }
    return 0;
}