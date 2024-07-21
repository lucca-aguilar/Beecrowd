#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i, j, l, m, n, number, even[5], uneven[5], last_even_position, last_uneven_position;
    last_even_position = last_uneven_position = 0;
    for(i = 0; i < 15; i++){
        scanf("%d", &number);
        if(number % 2 == 0){
            even[last_even_position] = number;
            last_even_position++;
            if(last_even_position == 5){
                for(j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, even[j]);
                }
                last_even_position = 0;
            }
        }else{
            uneven[last_uneven_position] = number;
            last_uneven_position++;
            if(last_uneven_position == 5){
                for(l = 0; l < 5; l++){
                    printf("impar[%d] = %d\n", l, uneven[l]);
                }
                last_uneven_position = 0;
            }
        }
    }
    for(n = 0; n < last_uneven_position ; n++){
        printf("impar[%d] = %d\n", n, uneven[n]);
    }
    for(m = 0; m < last_even_position ; m++){
        printf("par[%d] = %d\n", m, even[m]);
    }
    return 0;
}
