#include <iostream>
#include <string>

using namespace std;

const int TAM=4;

int fila[TAM];

int inicioF = 0, fimF =0;

int contador = 0;

bool vazia() {
    if (contador == 0)
        return true;
    else
        return false;
}

void enqueue(int valor){
    if(contador == TAM){
        cout << "Fila cheia!" << endl;
    } else {
        contador++;
        fila[fimF] = valor;
        if(fimF == TAM-1){
            fimF = 0;
        } else {
            fimF++;
        }
            cout << "Valor " << valor << " adicionado à fila!" << endl;
    }
}

void dequeue(){
    if(vazia()){
        cout << "Fila vazia!" << endl;
    } else {
        contador--;
        int valor = fila[inicioF];
        if(inicioF == TAM-1){
            inicioF = 0;
        } else {
            inicioF++;
        }
            cout << "Valor " << valor << " removido da fila!" << endl;
    }
}

void imprimir(){
    if(vazia()){
        cout << "Fila vazia!" << endl;
    } else {
        cout << "Fila: ";
        for(int i = 0; i < contador; i++){
            int index = (inicioF + i) % TAM;
            cout << fila[index] << " ";
        }
        cout << endl;
    }
}

void fim(){
    if(vazia()){
        cout << "Fila vazia!" << endl;
    } else {
        int valor = fila[(fimF - 1 + TAM) % TAM];
        cout << "Valor no fim da fila: " << valor << endl;
    }
}



int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    imprimir();

    dequeue();
    imprimir();
    
    enqueue(50);
    imprimir();
    
    dequeue();
    dequeue();
    imprimir();
    fim();
    
    return 0;
}



