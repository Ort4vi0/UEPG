#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Autor: Otavio de Quadros Sonnenstrahl
//Data: 25/08/25
//RA: 25119823
//Lista: ALGORITIMOS

void ex1(int a, int b, int c){
    int d = 0;
    for(int i = b; i <=c; i++){
        if (i % a == 0){
             d += i;
        }
    }
    printf("Resultado pos soma: %d", d);
}

void ex2(int h, int m, int s){
    if(h< 0|| m< 0|| s< 0 || h> 24 || m >60 || s> 60){
        printf("Horario INVALIDO inserido");
    } else {
        h = h * 3600;
        m = m * 60;
        s = s + m + h;
        printf("Total de segundos: %d", s);
    }
}

int ex3(int n){
    int pt1, pt2;
    pt1 = n / 100;
    pt2 = n % 100;
    int resultado = pt1 + pt2;
    if(resultado * resultado == n){
        return 1;
    } else {
        return 0;
    }
}

float ex4(int nota1, int nota2, int nota3, int operacao){
    float resultato;
    if(operacao == 'A' || operacao == 'a'){
        resultato = (nota1 + nota2 + nota3) / 3;
    }
    else if(operacao == 'P' || operacao == 'p'){
        float peso1 = 5, peso2 = 3, peso3 = 2;
        float totalpeso = peso1 + peso2 + peso3;
        resultato = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3);
        resultato = resultato / totalpeso;
    }
    else if(operacao != 'P'|| operacao != 'A'){
        printf("Operacao INVALIDA");
    }
    return resultato;
}

int ex5(int n){
    int res = 0;
    for(int i=n; i>0; i--){
        res += n * i;
    }
    return printf("%d fatorado resulta em: %d", n, res);
}

int main(){
    int escolha = 0;
    printf("Digite o numero do exercio para executa-lo: ");
    scanf("%d", &escolha);
    switch(escolha){
        case 1: 
        {
        printf("Escolha 3 numeros: o primeiro(sendo o divisor): ");
        int a=0, b=0 ,c=0;
        scanf("%d %d %d", &a, &b, &c);
        ex1(a, b, c);
        break;
        }
        case 2:
        {
        int h=0,m=0,s=0;
        printf("Digite um horario (ex 09 10 33): ");
        scanf("%d %d %d", &h, &m, &s);
        ex2(h, m, s);
        break;
        }
        case 3:
        {
        int n;
        printf("Digite um numero de 4 digitos ex:(3025): ");
        scanf("%d",&n);
        int ret = ex3(n);
        printf("%d", ret);
        break;
        }
        case 4:
        {
        float n1, n2, n3;
        char operacao;
        printf("Digite as 3 notas do aluno: ");
        scanf("%f %f %f",&n1,&n2,&n3);
        printf("Digite o tipo de operacao A = Aritimetica P = Ponderada: ");
        fflush(stdin);
        scanf("%c", &operacao);
        float ret = ex4(n1, n2, n3, operacao);
        printf("%.2f", ret);
        break;
        }
        case 5:
        {
        int n;
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);
        ex5(n);
        }
    }
}