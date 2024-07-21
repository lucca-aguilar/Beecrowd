#include <stdio.h>
#include <string.h>
#include <math.h>

void char_int_Convert(char charBinary[4], int intBinary[3]) {
    for (int i = 0; i < 3; i++) {
        if (charBinary[i] == '*') {
            intBinary[i] = 1; 
        } else {
            intBinary[i] = 0;
        }
    }
}

int binary_int_Convert(int intBinary[3]) {
    int intNumber = 0;

    for (int i = 0; i < 3; i++) {
        if (intBinary[i] == 1) {
            intNumber += pow(2, 2 - i);
        }
    }

    return intNumber;
}

int main() {
    // declara as variáveis
    int sum = 0;
    char input[8];

    while (fgets(input, sizeof(input), stdin) != NULL) {
        // lê a entrada

        // se o corvo grita, o programa imprime a soma dos números anteriores e redefine os parâmetros
        if (strcmp(input, "caw caw") == 0) {
            printf("%d\n", sum);
            sum = 0;
            continue;
        }

        // declara as variáveis
        int decimal;
        int intBinary[3];

        // converte de char para vetor de int
        char_int_Convert(input, intBinary);

        // converte de int binário para int decimal
        decimal = binary_int_Convert(intBinary);

        // adiciona o último número à soma
        sum += decimal;
    }

    return 0;
}