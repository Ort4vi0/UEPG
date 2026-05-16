/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package otaviosonnenstrahl;

import javax.swing.JOptionPane;

/**
 *
 * @author PC
 */
public class Aula12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int n;
        var s = 0;
        var total = -1;
        var pares = 0;
        var impar = 0;
        var adc = 0;
        var media = 0;
        do {
            n = Integer.parseInt(JOptionPane.showInputDialog(null, "<html>Informe um numero:" + "<br><em>Digite 0 para sair</em>" + "</html>"));
            total++;
            if(n != 0 && n%2 == 0) 
                pares++;
            else if (n != 0 && n%2 == 1)
                impar++;
            if(n > 100)
                adc++;
            s += n;
        }while(n !=0 );
        media = s / total;
        JOptionPane.showMessageDialog(null, "<html>Resultado: <br>---------------" + "<br>Total de Valores: " + total + "<br>Total de Pares: "  + pares + "<br>Total de Impares: " + impar + "<br>Acima de 100: " + adc + "<br>Media dos valores: " + media + "</html>", "Resultado Final", JOptionPane.INFORMATION_MESSAGE);
    }
}
