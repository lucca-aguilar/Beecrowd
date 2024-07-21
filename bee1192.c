#include <stdio.h>
#include <string.h>

int main () {
    // declara as variaveis
    int firstDigit, secondDigit, result, numCases;
    char operator;
    
    // le o numero de casos
    scanf("%d", &numCases);

    for (int i = 0; i < numCases; i++) {
        // le as variaveis
        scanf("%d%c%d", &firstDigit, &operator, &secondDigit);

        // realiza a operacao de acordo com o operador
        if (firstDigit == secondDigit) { // digitos iguais
            result = firstDigit*secondDigit;
        } else if (operator > 96) { // letra minuscula
            result = firstDigit + secondDigit;
        } else { // letra maiuscula
            result = secondDigit - firstDigit;
        }

        // printa o resultado
        printf("%d\n", result);
        }
    return 0;
}