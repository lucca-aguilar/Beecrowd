#include <stdio.h>
#define MAX_GP 100
#include <stdio.h>
#define MAX_GP 100
#define MAX_PILOTS 100
#define MAX_SYS 10

int main() {
    int greatPrizes, pilots, numSystems, scoringPilots;
    int positions[MAX_GP][MAX_PILOTS];
    int sys[MAX_SYS][MAX_PILOTS];
    int totalPoints[MAX_PILOTS];
    int maxPoints, pos;

    while(1){
        scanf("%d %d", &greatPrizes, &pilots);
        if (pilots == 0 && greatPrizes == 0) {
            break;
        }

        for(int i = 0; i < greatPrizes; i++){
            for(int j = 0; j < pilots; j++){
                scanf("%d", &positions[i][j]);
            }
        }

        scanf("%d", &numSystems);
        int scoring[MAX_SYS];
        for(int i = 0; i < numSystems; i++){
            scanf("%d", &scoringPilots);
            scoring[i] = scoringPilots; 
            for(int j = 0; j < scoringPilots; j++){
                scanf("%d", &sys[i][j]);
            }
        }

        for(int s = 0; s < numSystems; s++){
            for(int i = 0; i < pilots; i++){
                totalPoints[i] = 0;
            }

            for(int i = 0; i < greatPrizes; i++){
                for(int j = 0; j < pilots; j++){
                    pos = positions[i][j] - 1;
                    if(pos < scoring[s]){
                        totalPoints[j] += sys[s][pos];
                    }
                }
            }

            maxPoints = 0;
            for(int i = 1; i < pilots; i++){
                if(totalPoints[i] > totalPoints[maxPoints]){
                    maxPoints = i;
                }
            }

            int first = 1;
            for(int i = 0; i < pilots; i++){
                if(totalPoints[i] == totalPoints[maxPoints]){
                    if(!first){
                        printf(" ");
                    }
                    printf("%d", i + 1);
                    first = 0;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
