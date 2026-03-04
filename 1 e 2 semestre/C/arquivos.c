#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Autor: Otavio de Quadros Sonnenstrahl
//Data: 03/11/2025
//RA: 25119823
//Lista: ARQUIVOS

// 1) Escreva um programa que leia do usuário o nome de um arquivo texto. 
// Em seguida, mostre na tela quantas linhas esse arquivo possui.
void exercicio1() {
    char nomeArquivo[100];
    FILE *arquivo;
    int linhas = 0;
    char ch;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    while ((ch = fgetc(arquivo)) != EOF) {
        if (ch == '\n') {
            linhas++;
        }
    }

    fclose(arquivo);
    printf("O arquivo possui %d linhas.\n", linhas);
}
//------------------------------------------------------------------------------
// 2) Escreva um programa que leia do usuário os nomes de dois arquivos texto.
// Crie um terceiro arquivo texto com o conteúdo dos dois primeiros juntos 
// (o conteúdo do primeiro seguido do conteúdo do segundo).
void exercicio2() {
    char arquivo1[100], arquivo2[100], arquivo3[100];
    FILE *arq1, *arq2, *arq3;
    char ch;

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", arquivo1);
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", arquivo2);
    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", arquivo3);

    arq1 = fopen(arquivo1, "r");
    if (arq1 == NULL) {
        printf("Erro ao abrir o primeiro arquivo!\n");
        return;
    }

    arq2 = fopen(arquivo2, "r");
    if (arq2 == NULL) {
        printf("Erro ao abrir o segundo arquivo!\n");
        fclose(arq1);
        return;
    }

    arq3 = fopen(arquivo3, "w");
    if (arq3 == NULL) {
        printf("Erro ao criar o arquivo de saida!\n");
        fclose(arq1);
        fclose(arq2);
        return;
    }

    while ((ch = fgetc(arq1)) != EOF) {
        fputc(ch, arq3);
    }

    while ((ch = fgetc(arq2)) != EOF) {
        fputc(ch, arq3);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    printf("Arquivos concatenados com sucesso em %s!\n", arquivo3);
}
//------------------------------------------------------------------------------
// 3) Escreva um programa para converter o conteúdo de um arquivo texto em
// caracteres maiúsculos. O programa deverá ler do usuário o nome do arquivo 
// a ser convertido e o nome do arquivo a ser salvo.
void exercicio3() {
    char arquivoEntrada[100], arquivoSaida[100];
    FILE *entrada, *saida;
    char ch;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", arquivoEntrada);
    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", arquivoSaida);

    entrada = fopen(arquivoEntrada, "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada!\n");
        return;
    }

    saida = fopen(arquivoSaida, "w");
    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saida!\n");
        fclose(entrada);
        return;
    }

    while ((ch = fgetc(entrada)) != EOF) {
        fputc(toupper(ch), saida);
    }

    fclose(entrada);
    fclose(saida);

    printf("Arquivo convertido para maiusculas com sucesso!\n");
}
//------------------------------------------------------------------------------
// 4) Elabore um programa no qual o usuário informe o nome de um arquivo texto
// e uma palavra, e o programa informe o número de vezes que aquela palavra
// aparece dentro do arquivo.
void exercicio4() {
    char nomeArquivo[100], palavra[50], palavraArquivo[50];
    FILE *arquivo;
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    printf("Digite a palavra a ser procurada: ");
    scanf("%s", palavra);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    while (fscanf(arquivo, "%s", palavraArquivo) != EOF) {
        if (strcmp(palavra, palavraArquivo) == 0) {
            contador++;
        }
    }

    fclose(arquivo);
    printf("A palavra '%s' aparece %d vezes no arquivo.\n", palavra, contador);
}
//------------------------------------------------------------------------------
// 5) Faça um programa que leia números positivos e os converta em binário.
// Cada número binário deverá ser salvo em uma linha de um arquivo texto. 
// O programa termina quando o usuário digitar um número negativo.
void exercicio5() {
    char nomeArquivo[100];
    FILE *arquivo;
    int numero;
    int binario[32];
    int i;

    printf("Digite o nome do arquivo para salvar os binarios: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return;
    }

    printf("Digite numeros positivos (numero negativo para sair):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (numero == 0) {
            fprintf(arquivo, "0\n");
            continue;
        }

        i = 0;
        int temp = numero;
        while (temp > 0) {
            binario[i] = temp % 2;
            temp = temp / 2;
            i++;
        }

        for (int j = i - 1; j >= 0; j--) {
            fprintf(arquivo, "%d", binario[j]);
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
    printf("Numeros binarios salvos com sucesso em %s!\n", nomeArquivo);
}
//------------------------------------------------------------------------------
int main() {
    int opcao;

    printf("Digite qual exercicio deseja executar (1-5): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            exercicio1();
            break;
        case 2:
            exercicio2();
            break;
        case 3:
            exercicio3();
            break;
        case 4:
            exercicio4();
            break;
        case 5:
            exercicio5();
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}