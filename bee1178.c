#include <stdio.h>

int main(){
    int i;
    double value;
    double halves[100];
    scanf("%lf", &value);
    halves[0] = value;
    printf("N[0] = %.4lf\n", value);
    for(i = 1; i < 100; i++){
        halves[i] = halves[i - 1]/2;
        printf("N[%d] = %.4lf\n", i, halves[i]);
    }
    return 0;
}