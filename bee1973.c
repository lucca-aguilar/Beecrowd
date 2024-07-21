#include <stdio.h>

int main () {
    long long int stars, currentStar = 0, totalAttacked = 0, totalLambs = 0, robbed = 0;

    // le a quantidade de estrelas
    scanf("%lld", &stars);

    // declara os vetores
    int lambs[stars];
    int attacked[stars];

    // le os vetores e zera o vetor de ataque (1 = atacada, 0 = n atacada)
    for (int i = 0; i < stars; i++) {
        scanf("%lld", &lambs[i]);
        attacked[i] = 0;
    }

    // inicia a movimentacao
    while (1) {
        // se a estrela não foi atacada antes, marca como atacada
        if (attacked[currentStar] == 0) {
            attacked[currentStar] = 1;
            totalAttacked++;
        }
        
        // rouba um carneiro, se houver
        if (lambs[currentStar] > 0) {
            lambs[currentStar]--;
            robbed = 1;
        } else {
            robbed = 0;
        }

        // verifica se o numero anterior de carneiros era par ou impar
        if (robbed == 1) {
            if ((lambs[currentStar] + 1) % 2 == 0) { // numero par
                if (currentStar - 1 < 0) {
                    break; // sai do loop se não há estrela à esquerda
                } else {
                    currentStar--; // vai para a estrela à esquerda
                }
            } else { // numero impar
                if (currentStar + 1 >= stars) {
                    break; // sai do loop se não há estrela à direita
                } else {
                    currentStar++; // vai para a estrela à direita
                }
            }
        } else {
            break; // sai do loop se não há roubo e não há mais carneiros para roubar
        }
    }

    // conta a quantidade de carneiros não roubados
    for (int i = 0; i < stars; i++) {
        totalLambs += lambs[i];
    }

    // mostra a quantidade de estrelas atacadas e de carneiros não roubados
    printf("%lld %lld\n", totalAttacked, totalLambs);
    return 0;
}