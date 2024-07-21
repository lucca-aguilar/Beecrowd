#include <stdio.h>

int main () {
    // declara as variaveis
    int aperture, numStars, totalVisible = 0;
    
    // le a abertura do telescopio
    scanf("%d", &aperture);

    // le o numero de estrelas 
    scanf("%d", &numStars);

    // declara e le o vetor de fluxos, declara e zera o vetor de visibilidade (0 = n visivel, 1 = visivel)
    int photonFlow[numStars];
    int visible[numStars];
    for (int i = 0; i < numStars; i++) {
        scanf("%d", &photonFlow[i]);
        visible[i] = 0;
    }

    // verifica se uma estrela eh visivel ou n
    for (int i = 0; i < numStars; i++) {
        if (photonFlow[i]*aperture >= 40000000) {
            visible[i] = 1;
        }
    }

    // conta quantas estrelas sao visiveis
    for (int i = 0; i < numStars; i++) {
        if (visible[i] == 1) {
            totalVisible++;
        }
    }

    // imprime quantidade de estrelas visiveis
    printf("%d\n", totalVisible);

    return 0;
}