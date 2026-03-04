#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//NOME: OTAVIO DE QUADROS SONNENSTRAHL
//RA: 25119823
//Lista: Ponteiros
// Data: 23/09/2025

void Atividade1 (int *abela, int *balao){
    printf("%p\n", (void *)abela);
    printf("%p\n", (void *)balao);
}

void Atividade2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

void Atividade3(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

void Atividade4(int *a, int *b){
    int temp = *a;
    *a = temp + *b;
}

void Atividade5(float R, float *area, float *volume){
    float PI = 3.14;
    *area = 4.0*PI*(R*R);
    *volume = 4.0/3.0*PI*((R*R)*R);
}



int main(){
    int pepino;
    printf("Digite qual atividade deseja: ");
    scanf("%d", &pepino);
    switch (pepino){
            default:{
                printf("Nao foi selecionada uma opcao valida!!");
                break;
            }
            case 1:{
                int a, b;
                printf("Digite 2 numeros int para comparar seu end de memoria");
                scanf("%d %d", &a,&b);
                Atividade1(&a,&b);
                break;
            }
            case 2:{
                int valor1, valor2;
                printf("Digite 2 valores: ");
                scanf("%d %d", &valor1, &valor2);
                printf("\nValores originais: \n");
                printf("Valor 1: %d \nValor 2: %d", valor1,valor2);
                Atividade2(&valor1, &valor2);
                printf("\nValores Trocados: \n");
                printf("Valor 1: %d\nValor 2: %d", valor1, valor2);
                break;
            }
            case 3:{
                char strplv[201];
                printf("Digite uma palavra ou frase ate 200 caracteres: ");
                getchar();
                fgets(strplv, sizeof(strplv), stdin);
                size_t len = strlen(strplv);
                if (len > 0 && strplv[len - 1] == '\n') {
                    strplv[len - 1] = '\0';
                }
                Atividade3(strplv);
                printf("String invertida: %s\n", strplv);
                break;
            }
            case 4:{
                int a, b;
                printf("Digite dois numeros inteiros: ");
                scanf("%d %d", &a, &b);
                printf("\nNumeros antes da soma: %d e %d", a,b);
                Atividade4(&a, &b);
                printf("\nNumeros depois da soma: %d e %d", a,b);
                break;
            }
            case 5:{
                float R=0.0, A=0.0, V=0.0;
                float *area = &A;
                float *volume = &V;
                printf("Digite o Raio da Esfera");
                scanf("%f", &R);
                Atividade5(R, area, volume);
                printf("Para uma esfera de Raio: %2.f temos area: %2.f e volume %2.f", R, *area, *volume);
            }
    }
}
