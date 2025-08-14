#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//Autor: Otavio de Quadros Sonnenstrahl
//Data: 28/07/22
//RA: 25119823
//Lista: STRUCTS II

// 1)

struct data {
    int dia;
    int mes;
    int ano;
};

struct pessoa {
    char nome[50];
    struct data nascimento;
};

int main() {
    struct pessoa pessoas[6];
    int i;

    int ivelho = 0;
    int inova = 0;

    for (i = 0; i < 6; i++) {
        printf("\n--- Pessoa numero %d ---\n", i + 1);

        printf("Digite o nome: ");
        scanf("%s", pessoas[i].nome);

        printf("Digite a Data de Nascimento (DD MM AAAA): ");
        scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);

        if (i == 0) {
            ivelho = 0;
            inova = 0;
        } else {
            if (pessoas[i].nascimento.ano < pessoas[ivelho].nascimento.ano) {
                ivelho = i;
            }
            else if (pessoas[i].nascimento.ano == pessoas[ivelho].nascimento.ano) {
                if (pessoas[i].nascimento.mes < pessoas[ivelho].nascimento.mes) {
                    ivelho = i;
                }
                else if (pessoas[i].nascimento.mes == pessoas[ivelho].nascimento.mes) {
                    if (pessoas[i].nascimento.dia < pessoas[ivelho].nascimento.dia) {
                        ivelho = i;
                    }
                }
            }
            if (pessoas[i].nascimento.ano > pessoas[inova].nascimento.ano) {
                inova = i;
            }
            else if (pessoas[i].nascimento.ano == pessoas[inova].nascimento.ano) {
                if (pessoas[i].nascimento.mes > pessoas[inova].nascimento.mes) {
                    inova = i;
                }
                else if (pessoas[i].nascimento.mes == pessoas[inova].nascimento.mes) {
                    if (pessoas[i].nascimento.dia > pessoas[inova].nascimento.dia) {
                        inova = i;
                    }
                }
            }
        }
    }
    printf("\n--- Resultados ---\n");
    printf("Pessoa mais velha: %s, nascida em %02d/%02d/%d\n",
           pessoas[ivelho].nome,
           pessoas[ivelho].nascimento.dia,
           pessoas[ivelho].nascimento.mes,
           pessoas[ivelho].nascimento.ano);

    printf("Pessoa mais nova: %s, nascida em %02d/%02d/%d\n",
           pessoas[inova].nome,
           pessoas[inova].nascimento.dia,
           pessoas[inova].nascimento.mes,
           pessoas[inova].nascimento.ano);

    return 0;
}

//-------------------------------------------------------------------------------------------------------------

//2)

#define TAM 5

struct atleta {
    char nome[40];
    char esporte[40];
    int idade;
    float altura;
};

int main(){
    struct atleta atletas[TAM];
    int i, maisvelho, maisalto;
    for(i=0; i<TAM; i++){
        printf("\n --- Atleta numero: %d --- \n", i + 1);
        printf("Nome do atleta: ");
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);
        fflush(stdin);
        printf("Esporte praticado: ");
        fgets(atletas[i].esporte, sizeof(atletas[i].esporte), stdin);
        fflush(stdin);
        printf("Idade do atleta: ");
        scanf("%d", &atletas[i].idade);
        fflush(stdin);
        printf("Altura do atleta (em metros): ");
        scanf("%f", &atletas[i].altura);
        fflush(stdin);

        if(i==0){
            maisvelho = 0;
        } else {
            if(atletas[i].idade > atletas[maisvelho].idade){
                maisvelho = i;
            }
        }
        if(i==0){
            maisalto = 0;
        } else {
            if(atletas[i].altura > atletas[maisalto].idade){
                maisalto = i;
            }
        }
    }        
    system("cls");
    printf("Dados dos atletas:\n");
    for(i=0; i<TAM; i++){
        printf("================== ATLETA %d ==================\n", i+1);
        printf("Nome: %s", atletas[i].nome);
        printf("Esporte: %s", atletas[i].esporte);
        printf("Idade: %d\n", atletas[i].idade);
        printf("Altura: %2.f\n", atletas[i].altura);
    }
    printf("------------------------------------------------------------------\n");
    printf("================== ATLETA MAIS VELHO ==================\n");
        printf("Nome: %s", atletas[maisvelho].nome);
        printf("Esporte: %s", atletas[maisvelho].esporte);
        printf("Idade: %d\n", atletas[maisvelho].idade);
        printf("Altura: %2.f\n", atletas[maisvelho].altura);
    printf("------------------------------------------------------------------\n");
    printf("================== ATLETA MAIS ALTO ==================\n");
        printf("Nome: %s", atletas[maisalto].nome);
        printf("Esporte: %s", atletas[maisalto].esporte);
        printf("Idade: %d\n", atletas[maisalto].idade);
        printf("Altura: %2.f\n", atletas[maisalto].altura);
    printf("------------------------------------------------------------------");
}

//-------------------------------------------------------------------------------------------------------------

//3)

#define TAM 5

struct atleta {
    char nome[40];
    char esporte[40];
    int idade;
    float altura;
};

int main(){
    struct atleta atletas[TAM];
    int i, j;
    for(i=0; i<TAM; i++){
        printf("\n --- Atleta numero: %d --- \n", i + 1);
        printf("Nome do atleta: ");
        fgets(atletas[i].nome, sizeof(atletas[i].nome), stdin);
        fflush(stdin);
        printf("Esporte praticado: ");
        fgets(atletas[i].esporte, sizeof(atletas[i].esporte), stdin);
        fflush(stdin);
        printf("Idade do atleta: ");
        scanf("%d", &atletas[i].idade);
        fflush(stdin);
        printf("Altura do atleta (em metros): ");
        scanf("%f", &atletas[i].altura);
        fflush(stdin);     
    }
        struct atleta temp;

        for(i = 0; i < TAM; i++){
            for(j=0; j < TAM - i - 1;j++){
                if(atletas[j].idade < atletas[j + 1].idade){
                    temp = atletas[j];
                    atletas[j] = atletas[j + 1];
                    atletas[j + 1] = temp;
                }
            }
        }
    
    system("cls");
    printf("Dados dos atletas (MAIS VELHO > MAIS NOVO):\n");
    for(i=0; i<TAM; i++){
        printf("================== ATLETA %d ==================\n", i+1);
        printf("Nome: %s", atletas[i].nome);
        printf("Esporte: %s", atletas[i].esporte);
        printf("Idade: %d\n", atletas[i].idade);
        printf("Altura: %2.f\n", atletas[i].altura);
    }
    printf("------------------------------------------------------------------\n");
    return 0;
}

// -------------------------------------------------------------------------------------------------------------

// 4)

#define TAM 2

typedef struct data{
    int dia;
    int mes;
    int ano;
} data;


int main() {
    data datas[TAM];
    int i, difano, difmes, difdia;

    for (i = 0; i < TAM; i++){
        printf("Digite a Data %d: (DD MM AAAA): ", i + 1);
        scanf("%d %d %d", &datas[i].dia, &datas[i].mes, &datas[i].ano);
    }
    
    difano = datas[1].ano - datas[0].ano;
    if (difano < 0) {
        difano = -difano;
    }
    difmes = datas[1].mes - datas[0].mes;
    if (difmes < 0) {
        difmes = -difmes;
    }
    difdia = datas[1].dia - datas[0].dia;
    if (difdia < 0) {
        difdia = -difdia;
    }

    difano = difano * 365;
    difmes = difmes * 30;

    int diftotal = difano + difmes + difdia;

    printf("%d DIA(S) DE DIFERENCA ENTRE AS DATAS FORNECIDAS", diftotal);

}

//-------------------------------------------------------------------------------------------------------------

//6)

#define TAMS 50
#define QNT 20

typedef struct Cadastro {
    int codigo;
    char titulo[TAMS];
    char autor[TAMS];
    char area[TAMS];
    int ano;
    char editora[TAMS];
    int cadastrado;
} Cadastro;

Cadastro livros[QNT];
int totalCadastrados = 0;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void RNL(char *str) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void Cadastrar() {
    if (totalCadastrados >= QNT) {
        printf("\nERRO: Limite maximo de livros cadastrados atingido!\n");
        return;
    }

    int i = totalCadastrados;

    livros[i].codigo = i + 1;
    printf("\n--- CADASTRANDO NOVO LIVRO (Codigo: %d) ---\n", livros[i].codigo);

    printf("Digite o Titulo do Livro: ");
    fgets(livros[i].titulo, TAMS, stdin);
    RNL(livros[i].titulo);

    printf("Digite o nome do(a) Autor(a) do Livro: ");
    fgets(livros[i].autor, TAMS, stdin);
    RNL(livros[i].autor);

    printf("Digite a Area do Livro: ");
    fgets(livros[i].area, TAMS, stdin);
    RNL(livros[i].area);

    printf("Digite o nome da Editora do Livro: ");
    fgets(livros[i].editora, TAMS, stdin);
    RNL(livros[i].editora);

    printf("Digite o Ano do Livro: ");
    scanf("%d", &livros[i].ano);
    limparBuffer();

    livros[i].cadastrado = 1;
    totalCadastrados++;

    printf("\nLivro cadastrado com sucesso!\n");
}

void Listar() {
    printf("\n===== CATALOGO DE LIVROS CADASTRADOS =====\n");
    if (totalCadastrados == 0) {
        printf("Nenhum livro cadastrado ainda.\n");
        return;
    }

    for (int i = 0; i < totalCadastrados; i++) {
        printf("----------------------------------------\n");
        printf("LIVRO NUMERO %d\n", i + 1);
        printf("Codigo: %d\n", livros[i].codigo);
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Area: %s\n", livros[i].area);
        printf("Ano: %d\n", livros[i].ano);
        printf("Editora: %s\n", livros[i].editora);
        printf("----------------------------------------\n");
    }
}

void FiltrarPorID() {
    if (totalCadastrados == 0) {
        printf("\nNenhum livro cadastrado para filtrar.\n");
        return;
    }

    int id_busca;
    printf("\nDigite o codigo do livro que deseja buscar: ");
    scanf("%d", &id_busca);
    limparBuffer();

    int encontrado = 0;
    for (int i = 0; i < totalCadastrados; i++) {
        if (livros[i].codigo == id_busca) {
            printf("\n--- LIVRO ENCONTRADO ---\n");
            printf("Codigo: %d\n", livros[i].codigo);
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Area: %s\n", livros[i].area);
            printf("Ano: %d\n", livros[i].ano);
            printf("Editora: %s\n", livros[i].editora);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nLivro com o codigo %d nao encontrado.\n", id_busca);
    }
}
// CHATGPT ME AJUDOU AQUI
int compararLivrosPorAno(const void *a, const void *b) {
    Cadastro *livroA = (Cadastro *)a;
    Cadastro *livroB = (Cadastro *)b;
    return livroA->ano - livroB->ano;
}
// CHATGPT ME AJUDOU AQUI
void OrdenarLivrosPorAno() {
     if (totalCadastrados == 0) {
        printf("\nNenhum livro para ordenar.\n");
        return;
    }
    qsort(livros, totalCadastrados, sizeof(Cadastro), compararLivrosPorAno);
    printf("\nLivros ordenados com sucesso por ano!\n");
    Listar();
}


int main() {
    int escolha;
    for(int i = 0; i < QNT; i++) {
        livros[i].cadastrado = 0;
    }
    do {
        printf("\n===== MENU BIBLIOTECA =====\n");
        printf("1. Cadastrar Livro\n");
        printf("2. Listar todos os Livros\n");
        printf("3. Buscar Livro por Codigo\n");
        printf("5. Ordenar Livros por Ano\n");
        printf("0. Sair\n");
        printf("===========================\n");
        printf("Escolha a opcao desejada: ");
        scanf("%d", &escolha);
        limparBuffer();
        switch (escolha) {
            case 1:
                Cadastrar();
                break;
            case 2:
                Listar();
                break;
            case 3:
                FiltrarPorID();
                break;
            case 4:
                OrdenarLivrosPorAno();
                break;
            case 0:
                printf("\nSaindo do sistema...\n");
                break;
            default:
                printf("\nOpcao invalida! Por favor, tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}