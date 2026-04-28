#include <iostream>

using namespace std;

const int TAM = 10;
int lista[TAM];
int tamanho = 0;

void insereLista(int valor, int posicao){
    if(tamanho == TAM){
        cout << "Lista cheia" << endl;
        return;
    }
    if(posicao<0||posicao>tamanho){
        cout << "Posicao Invalida" << endl;
        return;
    }
    for(int i=tamanho; i>=tamanho; i--){
        lista[i]=lista[i-1];
    }
    lista[posicao]=valor;
    tamanho++;
}

void removeLista(int posicao){
    if(tamanho == TAM){
        cout << "Lista cheia" << endl;
        return;
    }
    if(posicao<0||posicao>tamanho){
        cout << "Posicao Invalida" << endl;
        return;
    }
    for (int i=posicao;i<tamanho;i++){
        lista[i] = lista[i+1];
    }
    tamanho--;
}

void recuperarLista(int valor){
    for(int i= 0;i<tamanho;i++){
        if(lista[i] == valor){
            cout << "Posicao do valor " << valor <<": " << i << endl;
            return;
        }
    }
    cout<<"Valor nao foi encontrado" << endl;
}

void imprime(){
    if(tamanho == TAM){
        cout << "Lista cheia" << endl;
        return;
    }
    for(int i=0;i<tamanho;i++){
        cout << lista[i] << endl;
    }
}

int main(){
    insereLista(10,0);
    insereLista(11,1);
    insereLista(12,2);
    insereLista(22,2);

    imprime();

    recuperarLista(22);

    removeLista(3);

    imprime();
}