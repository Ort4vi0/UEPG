#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void Atividade1 (int x, int y){
    int *p1 = &x;
    int *p2 = &y;
    printf("Endereco de x: %p\n", p1);
    printf("Endereco de y: %p\n", p2);
}

void Atividade2 (int *a, int *b){
    int valortemporario = *a;
    *a = *b;
    *b = valortemporario;
}



int main(){
    int x,y,a,b;
    int escolha;
    printf("Escolha a atividade (1-5): ");
    scanf("%d", &escolha);
    switch (escolha){
        case 1:{
            printf("Atividade 1:\n\nDigite dois numeros inteiros: ");
            scanf("%d %d", &x, &y);
            Atividade1(x,y);
            break;
        }
        case 2:{
            printf("Atividade 2:\n\nDigite dois numeros inteiros: ");
            scanf("%d %d", &a, &b);

            printf("Valores antes de trocar: %d e %d\n", a, b);
            Atividade2(&a,&b);
            printf("Valores depois de trocar: %d e %d\n", a, b);
            break;
        }
        case 3:{
            
        }
        default:
            printf("Escolha invalida\n");
            return 0;
    }
}

