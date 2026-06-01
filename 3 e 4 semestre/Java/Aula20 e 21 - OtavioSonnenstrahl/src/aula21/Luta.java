package aula21;

import java.util.Random;

public class Luta {
    //Atributos
    private Lutador desafiado;
    private Lutador desafiante;
    private int rounds;
    private boolean aprovada;
    
    public void marcarLuta(Lutador l1, Lutador l2){
        if(l1.getCategoria().equals(l2.getCategoria()) && l1 != l2){
            this.aprovada = true;
            this.desafiado = l1;
            this.desafiante = l2;
        } else {
            this.aprovada = false;
            this.desafiado = null;
            this.desafiante = null;
        }; 
    }
    public void lutar(){
        if(this.aprovada){
            System.out.println("## DESAFIADO ##");
            this.desafiado.apresentar();
            System.out.println("## DESAFIANTE ##");
            this.desafiante.apresentar();
            
            Random aleatorio = new Random();
            int vencedor = aleatorio.nextInt(3);
            System.out.println("========== Resultado da Luta ==========");
            switch(vencedor){
                case 0: //Emapate
                    System.out.println("Emapatou");
                    this.desafiado.empatatLuta();
                    this.desafiante.empatatLuta();
                    break;
                case 1: //Desafiado vence
                    System.out.println(this.desafiado.getNome() + " Venceu o ruim do " + this.desafiante.getNome());
                    this.desafiado.ganharLuta();
                    this.desafiante.perderLuta();
                    break;
                case 2: //Desafiante vence
                    System.out.println(this.desafiante.getNome() + " Venceu do pessimo do " + this.desafiado.getNome());
                    this.desafiado.perderLuta();
                    this.desafiante.ganharLuta();
                    break;
            }
            System.out.println("========================================");
            
        } else {
            System.out.println("Luta não aprovada!");
        }
    }
    
    //Metodos especiais

    public Lutador getDesafiado() {
        return desafiado;
    }

    public void setDesafiado(Lutador desafiado) {
        this.desafiado = desafiado;
    }

    public Lutador getDesafiante() {
        return desafiante;
    }

    public void setDesafiante(Lutador desafiante) {
        this.desafiante = desafiante;
    }

    public int getRounds() {
        return rounds;
    }

    public void setRounds(int rounds) {
        this.rounds = rounds;
    }

    public boolean isAprovada() {
        return aprovada;
    }

    public void setAprovada(boolean aprovada) {
        this.aprovada = aprovada;
    }
    
}
