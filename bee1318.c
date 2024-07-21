#include <stdio.h>

int main () {

    while (1) {
        // declara as variaveis
        int numOriginalTickets, peopleAttending, index, totalCopied = 0;

        // le a quantidade de bilhetes originais e pessoas na festa
        scanf("%d %d", &numOriginalTickets, &peopleAttending);

        if (numOriginalTickets == 0 && peopleAttending == 0) {
            break;
        }

        // declara, zera e le o vetor de contagem de bilhetes e declara e zera o vetor de bilhetes falsificados
        int tickets[numOriginalTickets + 1];
        for (int i = 0; i <= numOriginalTickets; i++) {  
            tickets[i] = 0;
        }
        for (int i = 0; i < peopleAttending; i++) {
            scanf("%d", &index);
            tickets[index]++;
        } 

        // verifica se existe mais de uma pessoa usando o mesmo numero de bilhete
        for (int i = 0; i < numOriginalTickets; i++) {
            if (tickets[i] > 1) {
                totalCopied++;
            }
        }

        // printa o resultado
        printf("%d\n", totalCopied);
        }

    return 0;
}