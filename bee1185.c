#include <stdio.h>
#define MAX 12

int main () {
    // declara as variaveis
    char operation;
    double sum = 0, average = 0;
    
    // le a operacao a ser realizada
    scanf("%c", &operation);

    // declara a matriz
    double matrix[MAX][MAX];

    // le os numeros da matriz
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // realiza a soma dos numeros acima 
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (i + j < 11) {
                sum += matrix[i][j];
            }
        }
    }

    // define a media
    average = sum/66;

    // imprime o resultado de acordo com a operacao lida
    if (operation == 'S') {
        printf("%.1lf\n", sum);
    } else {
        printf("%.1lf\n", average);
    }

    return 0;
}