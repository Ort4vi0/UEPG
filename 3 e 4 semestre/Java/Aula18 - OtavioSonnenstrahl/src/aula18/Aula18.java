/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula18;

/**
 *
 * @author PC
 */
public class Aula18 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // CONTA 1
        System.out.println("---------------------------------\n");
        System.out.println("CONTA 1");
        ContaBancaria c1 = new ContaBancaria();
        c1.setNumConta("1");
        c1.setDono("Arthur Morgan");
        c1.abrirConta("CC");
        
        c1.depositar(100f);
        c1.sacar(30f);
        c1.pagarMensal();
        System.out.println("---------------------------------\n");
        // CONTA 2
        System.out.println("CONTA 2");
        ContaBancaria c2 = new ContaBancaria();
        c2.setNumConta("2");
        c2.setDono("Coco");
        c2.abrirConta("CP"); 
        
        c2.depositar(500f);
        c2.sacar(100f);
        c2.pagarMensal();
        System.out.println("---------------------------------\n");
        // CONTA 3
        System.out.println("CONTA 3");
        ContaBancaria c3 = new ContaBancaria();
        c3.setNumConta("3");
        c3.setDono("Pepino");
        c3.abrirConta("CC");
        
        System.out.println("\n--- Teste conta com saldo ---");
        c3.fecharConta(); 
        c3.sacar(50f);
        
        c3.fecharConta();
        System.out.println("---------------------------------\n");
        
        System.out.println("RESULTADO CONTAS");
        c1.buscarConta();
        c2.buscarConta();
        c3.buscarConta();
    }
    
}
