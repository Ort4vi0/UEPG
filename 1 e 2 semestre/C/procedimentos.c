#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//NOME: OTAVIO DE QUADROS SONNENSTRAHL
//RA: 25119823
//Lista: Procedimentos
// Data: 18/09/2025

void ImparPar(int v){
    if(v % 2 == 0){
        printf("O numero e PAR");
    } else {
        printf("O numero e IMPAR");
    }
}

int main(){
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);
    ImparPar(valor);
}
//-------------------------------------------
//2)
void ConversorMes(int v){
    switch(v){
        case 1:
        printf("Voce DIGITOU 1 = JANEIRO");
        break;
        case 2:
        printf("Voce DIGITOU 2 = FEVEREIRO");
        break;
        case 3:
        printf("Voce DIGITOU 3 = MARÇO");
        break;
        case 4:
        printf("Voce DIGITOU 4 = ABRIL");
        break;
        case 5:
        printf("Voce DIGITOU 5 = MAIO");
        break;
        case 6:
        printf("Voce DIGITOU 6 = JUNHO");
        break;
        case 7:
        printf("Voce DIGITOU 7 = JULHO");
        break;
        case 8:
        printf("Voce DIGITOU 8 = AGOSTO");
        break;
        case 9:
        printf("Voce DIGITOU 9 = SETEMBRO");
        break;
        case 10:
        printf("Voce DIGITOU 10 = OUTUBRO");
        break;
        case 11:
        printf("Voce DIGITOU 11 = NOVEMBRO");
        break;
        case 12:
        printf("Voce DIGITOU 12 = DEZEMBRO");
        break;
        default:
        printf("Voce digitou um numero INVALIDO");
    }
}

int main(){
    int valor;
    printf("Digite um numero: (1-12)");
    scanf("%d", &valor);
    ConversorMes(valor);
}

//-------------------------------------------
//3)
void Bagulho(int v){
    for(int i = 1; i <= v; i++){
        for(int j = 1; j<=i; j++){
            printf("%d", j);   
        }
        printf("\n");
    }
}

int main(){
    int valor = 0;
    printf("Digite um valor INTEIRO: ");
    scanf("%d", &valor);
    Bagulho(valor);
}
//-------------------------------------------
//4)
void DesenharRetangulo(int v, int h){
    printf("+");
    for(int k = h; k > 0; k--){
        printf("-");
    }
    printf("+\n");
    for(int j = v; j > 0; j--){
        if(j == v){
            printf("|");
        } else {
            printf("|\n|");
            };
        for(int e = h; e > 0; e--){
            printf(" ");
        }
    }
    printf("|\n+");
    for(int k = h; k > 0; k--){
        printf("-");
    }
    printf("+");
}

int main(){
    int vertical = 0, horizontal = 0;
    printf("Digite a area do Retangulo que deseja EX(2 5)");
    scanf("%d %d", &vertical, &horizontal);
    DesenharRetangulo(vertical, horizontal);
}
//-------------------------------------------
//5)
int x[4], y[4], i;
float perimetro, largura, altura;

void CalculoPerimetro(){

    largura = fabs(x[1] - x[0]);
    altura = fabs(y[0] - y[3]);

    perimetro = (largura * 2) + (altura * 2);
    printf("O perimetro do retangulo e de %.2f\n", perimetro);
}

void INPCoordenadas(){
    printf("(1 = SUP ESQ 2 = SUP DIREITO 3 = INF DIREITO 4 = INF ESQUERDO)\n");
    for(i = 0; i< 4; i++){
    printf("Digite a coordenada numero %d (x y): ", i + 1);
    scanf("%d %d", &x[i], &y[i]);
}
CalculoPerimetro();
}

int main(){
    INPCoordenadas();
    return 0;
}


//-------------------------------------------
//6)
void Converter(int v){
    int horas, minutos, segundos, resto;
    horas = v / 3600;
    resto = v % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    printf(" Total de HORAS %d\n Total de MINUTOS %d \n Total de Segundos %d", horas, minutos, segundos);
}

int main(){
    int INPsegundos = 0;
    printf("Digite os segundos ex:(6000): ");
    scanf("%d", &INPsegundos);
    Converter(INPsegundos);
}
//-------------------------------------------
//7)
void Bagulho(int v){
    for(int i = 1; i <= v; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ", j * i);   
        }
        printf("\n");
    }
}

int main(){
    int valor = 0;
    printf("Digite um valor INTEIRO: ");
    scanf("%d", &valor);
    Bagulho(valor);
}
//-------------------------------------------
//8)
void Bagulho(int v){
    for(int i = 1; i <= v; i++){
        for(int j = 1; j<=i; j++){
            printf("*");   
        }
        printf("\n");
    }
    for(int i = v - 1; i > 0; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int valor = 0;
    printf("Digite um valor INTEIRO: ");
    scanf("%d", &valor);
    Bagulho(valor);
}