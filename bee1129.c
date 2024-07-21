#include <stdio.h>

int main () {
    // declara as variaveis
    int numQuestions, value;

    while (1) { // inicia o loop de processamento
        // le a quantidade de questoes
        scanf("%d", &numQuestions);

        if (numQuestions == 0) {
            break;
        }

        for (int i = 0; i < numQuestions; i++) { // analisa as questoes
            int question[5];

            // zera o vetor da questao
            for (int i = 0; i < 5; i++) {
                question[i] = 0;
            }
            // descobre a resposta de cada questao
            for (int j = 0; j < 5; j++) {
                scanf("%d", &value);
                if (value > 127) {
                    question[j] = 0;
                } else {
                    question[j] = 1;
                }
            }
            
            // imprime a resposta
            if (question[0] == 1 && question[1] == 0 && question[2] == 0 && question[3] == 0 && question[4] == 0) {
                printf("A\n");
            } else if (question[0] == 0 && question[1] == 1 && question[2] == 0 && question[3] == 0 && question[4] == 0) {
                printf("B\n");
            } else if (question[0] == 0 && question[1] == 0 && question[2] == 1 && question[3] == 0 && question[4] == 0) {
                printf("C\n");
            } else if (question[0] == 0 && question[1] == 0 && question[2] == 0 && question[3] == 1 && question[4] == 0) {
                printf("D\n");
            } else if (question[0] == 0 && question[1] == 0 && question[2] == 0 && question[3] == 0 && question[4] == 1) {
                printf("E\n");
            } else {
                printf("*\n");
            }
        }
    }

    return 0;
}