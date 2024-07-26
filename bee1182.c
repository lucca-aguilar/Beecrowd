#include <stdio.h>
#define MAX 12

int main () {
    // declara as variaveis
    int operationColumn;
    double sum = 0, average = 0;
    char operation;

    // escaneia a linha de operacao e a operacao a ser realizada
    scanf("%d\n%c", &operationColumn, &operation);

    // declara a matriz a ser analizada
    double matrix[MAX][MAX];

    // le os numeros da matriz
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // faz a soma dos caracteres na linha indicada
    for (int j = 0; j < MAX; j++) {
        sum += matrix[j][operationColumn];
    }

    // faz a media dos caracteres na linha indicada
    average = sum/12;

    // printa o valor correto de acordo com a operacao correspondente ao caracter lido
    if (operation == 'S') {
        printf("%.1lf\n", sum);
    } else {
        printf("%.1lf\n", average);
    }

    return 0;
}