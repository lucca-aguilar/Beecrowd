#include <stdio.h>

int main() {
    // declara as variáveis
    int numStickers, numSpecialStickers, numBoughtStickers, specialsBought = 0;

    // lê a quantidade de espaços, figurinhas carimbadas e figurinhas compradas
    scanf("%d %d %d", &numStickers, &numSpecialStickers, &numBoughtStickers);

    // declara os vetores 
    int specialStickers[numSpecialStickers];
    int boughtStickers[numBoughtStickers];

    // lê as identificações das figurinhas carimbadas e das figurinhas compradas e armazena nos vetores
    for (int i = 0; i < numSpecialStickers; i++) {
        scanf("%d", &specialStickers[i]);
    } 
    for (int i = 0; i < numBoughtStickers; i++) {
        scanf("%d", &boughtStickers[i]);
    }

    // verifica quantas figurinhas carimbadas possui 
    for (int i = 0; i < numSpecialStickers; i++) {
        int found = 0; // reseta a variável found para cada figurinha carimbada
        for (int j = 0; j < numBoughtStickers; j++) {
            if (boughtStickers[j] == specialStickers[i]) { // verifica se uma figurinha comprada é carimbada
                found = 1; // marca que encontrou a figurinha carimbada
                for (int l = 0; l < j; l++) {
                    if (boughtStickers[l] == boughtStickers[j]) { // verifica se a figurinha é repetida
                        found = 0; 
                        break;
                    }
                }
                if (found == 1) { // se não for repetida, adiciona um às figurinhas carimbadas compradas
                    specialsBought++;
                    break; // sai do loop depois de encontrar uma figurinha carimbada não repetida
                }
            }
        }
    }

    // calcula quantas figurinhas carimbadas faltam e imprime o resultado
    int missingSpecials = numSpecialStickers - specialsBought;
    printf("%d\n", missingSpecials);

    return 0;
}
