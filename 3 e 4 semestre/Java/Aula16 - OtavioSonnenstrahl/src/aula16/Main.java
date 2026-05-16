/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula16;

/**
 *
 * @author PC
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Caneta c1 = new Caneta();
        c1.marca = "NIO";
        c1.cor = "Azul";
        c1.ponta = 0.5f;
        c1.carga = 30;
        c1.tampar();
        c1.status();
        System.out.println("");
        Caneta c2 = new Caneta();
        c2.marca = "LULE";
        c2.cor = "PRETO";
        c2.ponta = 0.7f;
        c2.carga = 100;
        c2.destampar();
        c2.status();
    }
    
}
