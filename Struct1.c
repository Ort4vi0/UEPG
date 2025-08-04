#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Autor: Otavio de Quadros Sonnenstrahl
//Data: 28/07/25
//RA: 25119823
//Lista: STRUCTS

// 1)
/*typedef struct Cadastro {
    char nome[40];
    int idade;
    char endereco [100];
}pessoa;

int main(){
    pessoa x;
    printf("Insira o NOME: ");
    fgets(x.nome, 40, stdin);
    fflush(stdin);
    printf("Insira a IDADE: ");
    scanf("%d", &x.idade);
    fflush(stdin);
    printf("Insira o ENDERECO: ");
    fgets(x.endereco, 100, stdin);
    printf("Nome: %s, Idade: %d, Endereco: %s", x.nome, x.idade, x.endereco);
    return 0;
}*/
//------------------------------------------------------------------------------
 
// 2)

/* typedef struct {
    float x;
    float y;
} Coordenada;

int main(){
    Coordenada c;
    float dis;

    printf("Digite a Coordenada x do ponto: ");
    scanf("%f", &c.x);

    printf("Digite a coordenada y do ponto: ");
    scanf("%f", &c.y);

    dis = sqrt(pow(c.x, 2) + pow(c.y, 2));

    printf("A distancia do ponto (%.2f, %.2f) ate a origem %.2f\n", c.x, c.y, dis);

    return 0;
} */

//------------------------------------------------------------------------------

// 3)

/*typedef struct {
    float x;
    float y;
} Coordenada;

float CD(Coordenada c1, Coordenada c2){
    float dx = c2.x - c1.x;
    float dy = c2.y - c1.y;
    return sqrt(dx * dx + dy * dy);
}

int main(){
    Coordenada coord1, coord2;
    printf("Digite a COORDENADA do primeiro ponto ex(34 86): ");
    scanf("%f %f", &coord1.x, &coord2.y);

    printf("Digite as COORDENADAS do segundo ponto ex(56 34): ");
    scanf("%f %f", &coord2.x, &coord2.y);

    float distancia = CD(coord1, coord2);
    printf("A distancia entre os pontos e de: %.2f\n", distancia);
    return 0;
}*/

//------------------------------------------------------------------------------

// 4)

// struct Pepinos {
//     float x;
//     float y;
// };

// struct Pepino {
//     struct Pepinos supEsq;
//     struct Pepinos infDir;
// };

// int main(){
//     struct Pepino XR;
//     float largura, altura, area, perimetro, diagonal;
//     printf("==== Calculo de Propiedades ===\n");

//     printf("Digite a COORDENADA do ponto SUP ESQ");
//     printf("x: ");
//     scanf("%f", &XR.supEsq.x);
//     printf("y: ");
//     scanf("%f", &XR.supEsq.y);

//     printf("Digite a COORDENADA do ponto INF DIR");
//     printf("x: ");
//     scanf("%f", &XR.infDir.x);
//     printf("y: ");
//     scanf("%f", &XR.infDir.y);

//     largura = fabs(XR.infDir.x - XR.supEsq.x);
//     altura = fabs(XR.supEsq.y - XR.infDir.y);
//     area = largura * altura;
//     perimetro = 2* (largura + altura);
//     diagonal = sqrt(pow(largura, 2) * pow(altura, 2));

//     printf("\n=== RESULTADO ===\n");
//     printf("Largura do RETANGULO: %2.f\n", largura);
//     printf("Area do retangulo: %.2f\n", area);
//     printf("Perimetro do retangulo %.2f\n", perimetro);
//     printf("Comprimento da diagonal do retangulo: %.2f\n", diagonal);
//     return 0;
// }

//5)

// struct Pepinos {
//     float x;
//     float y;
// };

// struct Pepino {
//     struct Pepinos supEsq;
//     struct Pepinos infDir;
// };

// int main(){
//     struct Pepino XR;
//     float largura, altura, area, perimetro, diagonal, xpontoc, ypontoc;
//     printf("==== Calculo de Propiedades ===\n");

//     printf("Digite a COORDENADA do ponto SUP ESQ");
//     printf("\nx: ");
//     scanf("%f", &XR.supEsq.x);
//     printf("y: ");
//     scanf("%f", &XR.supEsq.y);

//     printf("Digite a COORDENADA do ponto INF DIR");
//     printf("\nx: ");
//     scanf("%f", &XR.infDir.x);
//     printf("y: ");
//     scanf("%f", &XR.infDir.y);

//     printf("Digite uma coordenada para um ponto: ");
//     printf("\nx: ");
//     scanf("%f", &xpontoc);
//     printf("\ny: ");
//      scanf("%f", &ypontoc);

//     largura = fabs(XR.infDir.x - XR.supEsq.x);
//     altura = fabs(XR.supEsq.y - XR.infDir.y);
//     area = largura * altura;
//     perimetro = 2* (largura + altura);
//     diagonal = sqrt(pow(largura, 2) * pow(altura, 2));

//     printf("\n=== RESULTADO ===\n");
//     printf("Largura do RETANGULO: %2.f\n", largura);
//     printf("Area do retangulo: %.2f\n", area);
//     printf("Perimetro do retangulo %.2f\n", perimetro);
//     printf("Comprimento da diagonal do retangulo: %.2f\n", diagonal);
//     if(xpontoc < XR.supEsq.x || xpontoc > XR.infDir.x || ypontoc > XR.supEsq.y || ypontoc < XR.infDir.y ){
//         printf("O ponto de Coordenada x: %2.f y: %2.f esta Fora do Retangulo", xpontoc, ypontoc);
//     } else {
//         printf("O ponto de Coordenada x: %2.f y: %2.f esta Dentro do Retangulo", xpontoc, ypontoc);
//     }
//     return 0;
//}

//------------------------------------------------------------------------------

// 6)

typedef struct Aluno {
    int matricula;
    char nome[30];
    float nota[3];
} Aluno;

int main(){

float mediax;

struct Aluno x;
printf("Digite o nome do aluno: ");
fgets(x.nome, 30, stdin);
fflush(stdin);
printf("Digite o RA do aluno");
scanf("%d", &x.matricula);
printf("Digite as notas do aluno: ");
scanf("%f %f %f", &x.nota[0], &x.nota[1], &x.nota[2]);
mediax = (x.nota[0] + x.nota[1] + x.nota[2]) / 3;
printf("Matricula: %d Aluno: %s Recebeu de média: %f" ,x.matricula, x.nome, mediax);
}