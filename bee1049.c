#include <stdio.h>
#include <string.h>

int main () {
    // declaras as palavras de identificacao
    char word1[15];
    char word2[15];
    char word3[15];

    // le as palavras
    scanf("%s", word1);
    getchar();
    scanf("%s", word2);
    getchar();
    scanf("%s", word3);
    getchar();

    // verifica qual o animal
    if (strcmp(word1, "vertebrado") == 0) {
        if (strcmp(word2, "ave") == 0) {
            if (strcmp(word3, "carnivoro") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if (strcmp(word3, "onivoro") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if (strcmp(word2, "inseto") == 0) {
            if (strcmp(word3, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if (strcmp(word3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}