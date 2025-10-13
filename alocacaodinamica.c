#include <stdio.h>
#include <stdlib.h>

//NOME: OTAVIO DE QUADROS SONNENSTRAHL
//RA: 25119823
//Lista: AlocacaoDinamica
// Data: 12/10/2025

void Exercicio1(){
    printf("Tamanho dos tipos de dados em bytes:\n");
    printf("char: %zu bytes\n", sizeof(char));
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
}

void Exercicio2(){
    struct Aluno {
        char nome[50];
        int matricula;
        float nota[3];
    };
    struct Aluno aluno;
    printf("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno.matricula);
    printf("Digite a nota do aluno: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &aluno.nota[i]);
    }
    printf("Tamanho da estrutura Aluno: %zu bytes\n", sizeof(struct Aluno));
    printf("Dados do aluno:\n");
    printf("Nome: %s", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Notas: ");
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", aluno.nota[i]);
    }
    printf("\n");
}

void Exercicio3(){
    struct Cadastro {
        char nome[50];
        int idade;
        char endereco[100];
    };
    struct Cadastro *cadastro = (struct Cadastro *)malloc(sizeof(struct Cadastro));

    printf("Quantos cadastros deseja fazer? ");
    int n;
    scanf("%d", &n);
    cadastro = (struct Cadastro *)realloc(cadastro, n * sizeof(struct Cadastro));

    for (int i = 0; i < n; i++) {
        printf("Digite o nome: ");
        fflush(stdin);
        fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
        printf("Digite a idade: ");
        scanf("%d", &cadastro[i].idade);
        printf("Digite o endereco: ");
        fflush(stdin);
        fgets(cadastro[i].endereco, sizeof(cadastro[i].endereco), stdin);
        
    }
    
    printf("\nDados do cadastro:\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s", cadastro[i].nome);
        printf("Idade: %d\n", cadastro[i].idade);
        printf("Endereco: %s\n", cadastro[i].endereco);
    }
    printf("\nTamanho da estrutura Cadastro: %zu bytes\n", sizeof(struct Cadastro) * n);
    printf("O total de pessoas cadastradas e de: %d\n", n);
    free(cadastro);
}

void Exercicio4(){
    printf("Qual vai ser o tamanho do vetor? ");
    int n;
    scanf("%d", &n);
    int *vetor = (int *)malloc(n * sizeof(int));
    printf("Vetor alocado com sucesso. Tamanho: %d elementos.\n", n);
    free(vetor);

    printf("Digite o conteudo do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Conteudo do vetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    free(vetor);
}

void Exercicio5(){
    int v;
    do{ 
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &v);
    } while(v < 0);
    printf("Digite o conteudo do vetor: (valores >= 2)\n");
    int *vetor = (int *)malloc(v * sizeof(int));
    for (int i = 0; i < v; i++) {
        do {
            printf("Digite o valor %d: ", i + 1);
            scanf("%d", &vetor[i]);
        } while(vetor[i] < 2);
    }
    printf("Conteudo do vetor: ");
    for (int i = 0; i < v; i++) {
        printf("%d ", vetor[i]);
    }
    free(vetor);
}

int main() {
    printf("Escolha um exercicio (1-5): ");
    int escolha;
    scanf("%d", &escolha);
    switch (escolha) {
        case 1:
            Exercicio1();
            break;
        case 2:
            Exercicio2();
            break;
        case 3:
            Exercicio3();
            break;
        case 4:
            Exercicio4();
            break;
        case 5:
            Exercicio5();
            break;
        default:
            printf("Exercicio invalido.\n");
            break;
    }
}