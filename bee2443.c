#include <stdio.h>

int simplify(int numerator, int denominator) { // funcao usa o algoritmo de euclides para determinar o maximo divisor comum
    while (denominator != 0) {
        int temporaryDenominator = denominator;
        denominator = numerator % denominator;
        numerator = temporaryDenominator;
    }
    return numerator;
}

int main () {
    // declara as variaveis
    int frac1Numerator, frac1Denominator, frac2Numerator, frac2Denominator, numerator, denominator;

    // le os valores
    scanf("%d %d %d %d", &frac1Numerator, &frac1Denominator, &frac2Numerator, &frac2Denominator);

    // calcula a fracao diferenca
    denominator = frac1Denominator*frac2Denominator;
    numerator = frac2Denominator*frac1Numerator + frac1Denominator*frac2Numerator;

    // transforma em irredutivel
    int greatestCommonDivisor = simplify(numerator, denominator);
    numerator = numerator / greatestCommonDivisor;
    denominator = denominator / greatestCommonDivisor;

    // mostra o resultado
    printf("%d %d\n", numerator, denominator);

    return 0;
}