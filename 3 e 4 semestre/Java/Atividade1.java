/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package OtavioSonnenstrahl;

import java.awt.Dimension;
import java.awt.Toolkit;
import java.util.Date;
import java.util.Locale;

/**
 *
 * @author PC
 */
public class Atividade1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        System.out.println("\nOlá mundo - Otávio Sonnenstrahl");
        System.out.println("Atividade 1\n");
        linha();
        Date relogio = new Date();
        System.out.println("A hora do sistema é: " + relogio.toString());
        
        Locale loc = Locale.getDefault();
        System.out.println("O idioma atual do sistema é: " + loc.getDisplayLanguage());
        
        Toolkit tk = Toolkit.getDefaultToolkit();
        Dimension d = tk.getScreenSize();
        System.out.println("A resoulução da tela é de: " + d.width + "x" + d.height);
        linha();
    }
    
    public static void linha() {
        System.out.println("-".repeat(50));
    }
    
}
