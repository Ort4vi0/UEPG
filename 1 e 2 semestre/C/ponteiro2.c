#include <stdio.h>
#include <string.h>

//NOME: OTAVIO DE QUADROS SONNENSTRAHL
//RA: 25119823
//Lista: Ponteiros2
// Data: 02/10/2025


void Atividade1() {
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    char *p;
    if ((p = strchr(str1, '\n'))) *p = '\0';
    if ((p = strchr(str2, '\n'))) *p = '\0';

    if (strstr(str1, str2))
        printf("A segunda string ocorre dentro da primeira.\n");
    else
        printf("A segunda string NAO ocorre dentro da primeira.\n");
}

void Atividade2() {
    int TAM = 0;
    printf("Escolha o tamanho do vetor a ser preenchido: ");
    scanf("%d", &TAM);
    int vetor[TAM], valor, *p, *fim;
    printf("Digite o valor para preencher o vetor: ");
    scanf("%d", &valor);

    p = vetor;
    fim = vetor + TAM;
    while (p < fim) {
        *p = valor;
        p++;
    }

    printf("Vetor preenchido:\n");
    for (p = vetor; p < fim; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}

void Atividade4() {
    int a, *b, **c, ***d;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf("Dobro: %d\n", 2 * (*b));
    printf("Triplo: %d\n", 3 * (**c));
    printf("Quadruplo: %d\n", 4 * (***d));
}

int main() {
    int opcao;
    do {
        printf("\nEscolha a atividade:\n");
        printf("1 - Verificar se uma string ocorre dentro de outra\n");
        printf("2 - Preencher Vetor\n");
        printf("4 - Multiplicacao de numeros com ponteiros\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                Atividade1();
                break;
            case 2:
                Atividade2();
                break;
            case 4:
                Atividade4();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}