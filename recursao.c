#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//NOME: OTAVIO DE QUADROS SONNENSTRAHL
//RA: 25119823
//Lista: Recursao
// Data:01/09/2025

#include <stdio.h>

// --- seus exercícios aqui (mantive iguais) ---

int exercicio1(int n){
    if (n ==  1){
        return 1;
    }
    return (n) + exercicio1(n-1);
}

void exercicio2(int n){
    if (n > 0){
        printf("colocando na pilha %d \n", n);
        exercicio2(n - 1);
    }
    printf("desempilhando %d\n", n);
}

void exercicio3(int n){
    if (n == 0){
        return;
    }
    printf("%d ", n);
    exercicio3(n-1);
}

int exercicio6(int n, int i){
    if (n ==  (i - 1)){
        return 1;
    }
    return (n) * exercicio6(n-1, i);
}

int exercicio7(int n, int i){
    if (i == 0){
        return 0;
    }
    return n + (exercicio7(n, i-1));
}

int exercicio8(int n){
    if (n ==  1){
        return 1;
    }
    return (n) * exercicio8(n - 1);
}

int exercicio9(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return exercicio9(n - 1) + exercicio9(n - 2);
}

int exercicio10(int num, int reverso) {
    if (num == 0) {
        return reverso;
    }
    return exercicio10(num / 10, (reverso * 10) + (num % 10));
}

int exercicio11(int num) {
    if (num == 0){
        return 0;   
    }
    return (num % 2) + 10 * exercicio11(num / 2); 
}

float exercicio12(float num) {
    if (num == 1) {
        return 2.0f;
    }
    return ((1 + ((num) * (num)))/num) + exercicio12(num - 1);
}

// -------- MAIN COM SWITCH ---------
int main() {
    int escolha;
    printf("Escolha o exercicio (1-12): ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1: {
            int n;
            printf("Digite um numero: ");
            scanf("%d", &n);
            printf("Resultado: %d\n", exercicio1(n));
            break;
        }
        case 2: {
            int n;
            printf("Digite um numero: ");
            scanf("%d", &n);
            exercicio2(n);
            break;
        }
        case 3: {
            int n;
            printf("Digite um numero: ");
            scanf("%d", &n);
            exercicio3(n);
            printf("\n");
            break;
        }
        case 6: {
            int n, i;
            printf("Digite um numero: ");
            scanf("%d", &n);
            printf("Digite outro numero (menor que o anterior): ");
            scanf("%d", &i);
            printf("Resultado: %d\n", exercicio6(n, i));
            break;
        }
        case 7: {
            int n, i;
            printf("Digite um numero: ");
            scanf("%d", &n);
            printf("Digite outro numero: ");
            scanf("%d", &i);
            printf("Resultado: %d\n", exercicio7(n, i));
            break;
        }
        case 8: {
            int n;
            printf("Digite um numero: ");
            scanf("%d", &n);
            printf("Resultado: %d\n", exercicio8(n));
            break;
        }
        case 9: {
            int n;
            printf("Digite um numero inteiro (>= 0): ");
            scanf("%d", &n);
            printf("Fibonacci(%d) = %d\n", n, exercicio9(n));
            break;
        }
        case 10: {
            int numero, reverso = 0;
            printf("Digite um numero inteiro: ");
            scanf("%d", &numero);
            printf("Numero invertido: %d\n", exercicio10(numero, reverso));
            break;
        }
        case 11: {
            int numero;
            printf("Digite um numero inteiro: ");
            scanf("%d", &numero);
            printf("Binario: %d\n", exercicio11(numero));
            break;
        }
        case 12: {
            int numero;
            printf("Digite um numero inteiro: ");
            scanf("%d", &numero);
            printf("Resultado: %f\n", exercicio12(numero));
            break;
        }
        default:
            printf("Exercicio invalido!\n");
    }

    return 0;
}
