#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

//NOME: OTAVIO DE QUADROS SONNENSTRAHL
//RA: 25119823
//Lista: Ponteiros3
// Data: 02/10/2025

int main(void) {
    // 1)
    float a1[10];
    for (int i = 0; i < 10; ++i) {
        printf("1) a1[%d]: %p\n", i, (void *)&a1[i]);
    }

    // 2)
    float m[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("2) m[%d][%d]: %p\n", i, j, (void *)&m[i][j]);
        }
    }

    // 3)
    int v3[5];
    int *p;
    for (p = v3; p < v3 + 5; ++p) {
        if (scanf("%d", p) != 1) return 1;
    }
    for (p = v3; p < v3 + 5; ++p) {
        printf("3) %d\n", (*p) * 2);
    }

    // 4)
    int v4[5];
    for (int i = 0; i < 5; ++i) {
        if (scanf("%d", &v4[i]) != 1) return 1;
    }
    for (int i = 0; i < 5; ++i) {
        if (v4[i] % 2 == 0) {
            printf("4) v4[%d]: %p\n", i, (void *)&v4[i]);
        }
    }

    return 0;
}