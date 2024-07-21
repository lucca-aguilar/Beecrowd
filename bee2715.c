#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int numAssignments;
    
    while (scanf("%lld", &numAssignments) != EOF) {
        long long int *assignmentsLevel = (long long int *)malloc(numAssignments * sizeof(long long int));
        long long int totalSum = 0, Rangel = 0, Gugu, difference;
        long long int smallerDifference = 100000000;

        // Leitura e soma total dos trabalhos
        for (int i = 0; i < numAssignments; i++) {
            scanf("%lld", &assignmentsLevel[i]);
            totalSum += assignmentsLevel[i];
        }

        // Calculo das diferenças possíveis
        for (int i = 0; i < numAssignments - 1; i++) {
            Rangel =  Rangel + assignmentsLevel[i];
            Gugu = totalSum - Rangel;
            difference = llabs(Rangel - Gugu);  

            if (difference < smallerDifference) {
                smallerDifference = difference;
            }
        }

        // Imprime a menor diferença
        printf("%lld\n", smallerDifference);

        // Libera a memória alocada
        free(assignmentsLevel);
    }

    return 0;
}
