#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main () {
    // declara as variáveis
    int numCases, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, robot_x, robot_y, robot_in;

    // le o numero de casos
    scanf("%d", &numCases);

    // inicia o loop para o numero de casos
    for (int i = 0; i < numCases; i++) {
        // le as coordenadas do retangulo
        scanf("%d %d %d %d %d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy, &Dx, &Dy, &robot_x, &robot_y);

        // verifica se o robo esta dentro da area
        if (robot_x > Ax && robot_x < Bx && robot_y > Ay && robot_y < Dy) {
            robot_in == TRUE;
        } else {
            robot_in == FALSE;
        }

        if (robot_in == TRUE) {
            printf("1\n");
        }
    }
    
    return 0;
}