#include <stdio.h>

int main(){

    struct data
    {
        int dia;
        int mes;
        int ano;
    };

    struct pessoa{
        char nome[10];
        struct data nascimento;
    };

    struct pessoa pessoas[6];
    int i, maisvelha = 0, maisnova = 0;

    for(i=0; i<6; i++){
        printf("Pessoa numero %d", i);
        printf("Digite o nome");
        scanf("%s", &pessoas[i].nome);
        printf("Digite a Data (DD MM AAAA)");
        scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
    }
}