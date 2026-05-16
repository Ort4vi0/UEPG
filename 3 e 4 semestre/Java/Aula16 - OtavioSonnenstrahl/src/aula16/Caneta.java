/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula16;

/**
 *
 * @author OTAVIO DE QUADROS SONNENSTRAHL
 */
public class Caneta {

    String marca;
    String modelo;
    String cor;
    float ponta;
    int carga;
    boolean tampada;
    
    void status(){
        System.out.println("Marca: " + this.marca);
        System.out.println("Cor: " + this.cor);
        System.out.println("Ponta: " + this.ponta);
        System.out.println("Carga: " + this.carga);
        System.out.println("Está tampada?: " + this.tampada);
    }
    
    void tampar(){
        this.tampada = true;
    }
    
    void destampar(){
        this.tampada = false;
    }
    
    void rabiscar(){
        if(this.tampada == true){
            System.out.println("Caneta ainda tampada");
        }
        System.out.println("Rabiscado com sucesso");
    }
    
}

