#include <stdio.h>
#include <stdlib.h>

// void ImparPar(int v){
//     if(v % 2 == 0){
//         printf("O numero e PAR");
//     } else {
//         printf("O numero e IMPAR");
//     }
// }

// int main(){
//     int valor;
//     printf("Digite um numero: ");
//     scanf("%d", &valor);
//     ImparPar(valor);
// }
//-------------------------------------------


//2)

// void ConversorMes(int v){
//     switch(v){
//         case 1:
//         printf("Voce DIGITOU 1 = JANEIRO");
//         break;
//         case 2:
//         printf("Voce DIGITOU 2 = FEVEREIRO");
//         break;
//         case 3:
//         printf("Voce DIGITOU 3 = MARÇO");
//         break;
//         case 4:
//         printf("Voce DIGITOU 4 = ABRIL");
//         break;
//         case 5:
//         printf("Voce DIGITOU 5 = MAIO");
//         break;
//         case 6:
//         printf("Voce DIGITOU 6 = JUNHO");
//         break;
//         case 7:
//         printf("Voce DIGITOU 7 = JULHO");
//         break;
//         case 8:
//         printf("Voce DIGITOU 8 = AGOSTO");
//         break;
//         case 9:
//         printf("Voce DIGITOU 9 = SETEMBRO");
//         break;
//         case 10:
//         printf("Voce DIGITOU 10 = OUTUBRO");
//         break;
//         case 11:
//         printf("Voce DIGITOU 11 = NOVEMBRO");
//         break;
//         case 12:
//         printf("Voce DIGITOU 12 = DEZEMBRO");
//         break;
//         default:
//         printf("Voce digitou um numero INVALIDO");
//     }
// }

// int main(){
//     int valor;
//     printf("Digite um numero: (1-12)");
//     scanf("%d", &valor);
//     ConversorMes(valor);
// }

//-------------------------------------------


//3)

// void Bagulho(int v){
//     for(int i = 1; i <= v; i++){
//         for(int j = 1; j<=i; j++){
//             printf("%d", j);   
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int valor = 0;
//     printf("Digite um valor INTEIRO: ");
//     scanf("%d", &valor);
//     Bagulho(valor);
// }
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
    printf("+");
}

int main(){
    int vertical = 0, horizontal = 0;
    printf("Digite a area do Retangulo que deseja EX(2 5)");
    scanf("%d %d", &vertical, &horizontal);
    DesenharRetangulo(vertical, horizontal);
}