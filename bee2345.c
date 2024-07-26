#include <stdio.h>
#include <stdlib.h>

int main () {
    // declara as variaveis
    int skillPlayer1, skillPlayer2, skillPlayer3, skillPlayer4, smallerDifference = 10000;
    
    // le a habilidade de cada jogador
    scanf("%d %d %d %d", &skillPlayer1, &skillPlayer2, &skillPlayer3, &skillPlayer4);

    // calcula as diferencas possiveis e determina a menor
    if (abs(skillPlayer1 + skillPlayer2 - skillPlayer3 - skillPlayer4) < smallerDifference) {
        smallerDifference = abs(skillPlayer1 + skillPlayer2 - skillPlayer3 - skillPlayer4);
    } else if (abs(skillPlayer1 + skillPlayer3 - skillPlayer2 - skillPlayer4) < smallerDifference) {
        smallerDifference = abs(skillPlayer1 + skillPlayer3 - skillPlayer2 - skillPlayer4);
    } else if (abs(skillPlayer1 + skillPlayer4 - skillPlayer2 - skillPlayer4) < smallerDifference) {
        smallerDifference = abs(skillPlayer1 + skillPlayer4 - skillPlayer2 - skillPlayer4);
    }

    // mostra o resultado
    printf("%d\n", smallerDifference);

    return 0;
}