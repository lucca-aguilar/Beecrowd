#include <stdio.h>

int main() {
    // declara as variáveis
    int dimension, initialLine, initialColumn, ballLine, ballColumn, totalFlags = 0, direction;

    // lê a dimensão, a linha inicial e a coluna inicial
    scanf("%d", &dimension);
    scanf("%d %d", &initialLine, &initialColumn);

    // declara as matrizes
    int studentsNumbers[dimension + 2][dimension + 2];
    int flags[dimension + 2][dimension + 2];
    int previousPosition[dimension + 2][dimension + 2][2];

    // lê a matriz dos números com padding
    for (int i = 0; i <= dimension + 1; i++) {
        for (int j = 0; j <= dimension + 1; j++) {
            studentsNumbers[i][j] = 0;
        }
    }
    for (int i = 1; i <= dimension; i++) {
        for (int j = 1; j <= dimension; j++) {
            scanf("%d", &studentsNumbers[i][j]);
        }
    }

    // zera a matriz das bandeiras
    for (int i = 0; i < dimension + 2; i++) {
        for (int j = 0; j < dimension + 2; j++) {
            flags[i][j] = 0;
        }
    }

    // zera a matriz das posições prévias
    for (int i = 0; i < dimension + 2; i++) {
        for (int j = 0; j < dimension + 2; j++) {
            for (int k = 0; k < 2; k++) {
                previousPosition[i][j][k] = 0;
            }
        }
    }

    // define a bandeira como levantada na posição inicial, a posição prévia da inicial como (0, 0)
    flags[initialLine][initialColumn] = 1;
    previousPosition[initialLine][initialColumn][0] = 0;
    previousPosition[initialLine][initialColumn][1] = 0;
    ballLine = initialLine;
    ballColumn = initialColumn;

    while (1) {
        if (studentsNumbers[ballLine][ballColumn + 1] >= studentsNumbers[ballLine][ballColumn] && flags[ballLine][ballColumn + 1] == 0) { // verifica leste
            // movimentação é possível, logo, a posição atual se torna a anterior da próxima
            previousPosition[ballLine][ballColumn + 1][0] = ballLine;
            previousPosition[ballLine][ballColumn + 1][1] = ballColumn;
            // passa para o próximo e o próximo levanta a bandeira
            ballColumn++;
            flags[ballLine][ballColumn] = 1;
        } else if (studentsNumbers[ballLine + 1][ballColumn] >= studentsNumbers[ballLine][ballColumn] && flags[ballLine + 1][ballColumn] == 0) { // verifica sul
            // movimentação é possível, logo, a posição atual se torna a anterior
            previousPosition[ballLine + 1][ballColumn][0] = ballLine;
            previousPosition[ballLine + 1][ballColumn][1] = ballColumn;
            // passa para o próximo e o próximo levanta a bandeira
            ballLine++;
            flags[ballLine][ballColumn] = 1;
        } else if (studentsNumbers[ballLine][ballColumn - 1] >= studentsNumbers[ballLine][ballColumn] && flags[ballLine][ballColumn - 1] == 0) { // verifica oeste
            // movimentação é possível, logo, a posição atual se torna a anterior
            previousPosition[ballLine][ballColumn - 1][0] = ballLine;
            previousPosition[ballLine][ballColumn - 1][1] = ballColumn;
            // passa para o próximo e o próximo levanta a bandeira
            ballColumn--;
            flags[ballLine][ballColumn] = 1;
        } else if (studentsNumbers[ballLine - 1][ballColumn] >= studentsNumbers[ballLine][ballColumn] && flags[ballLine - 1][ballColumn] == 0) { // verifica norte
            // movimentação é possível, logo, a posição atual se torna a anterior
            previousPosition[ballLine - 1][ballColumn][0] = ballLine;
            previousPosition[ballLine - 1][ballColumn][1] = ballColumn;
            // passa para o próximo e o próximo levanta a bandeira
            ballLine--;
            flags[ballLine][ballColumn] = 1;
        } else {
            // movimentação não é possível, logo, retorna para a pessoa que o passou inicialmente
            int previousBallLine = previousPosition[ballLine][ballColumn][0];
            int previousBallColumn = previousPosition[ballLine][ballColumn][1];

            if (previousBallLine == 0 && previousBallColumn == 0) {
                break;
            }

            ballLine = previousBallLine;
            ballColumn = previousBallColumn;


        }
    }

    // conta as bandeiras levantadas e imprime
    totalFlags = 0;
    for (int i = 0; i < dimension + 2; i++) {
        for (int j = 0; j < dimension + 2; j++) {
            //printf("%d ", flags[i][j]);
            if (flags[i][j] == 1) {
                totalFlags++;
            }
        }
        //printf("\n");
    }

    printf("%d\n", totalFlags);

    return 0;
}