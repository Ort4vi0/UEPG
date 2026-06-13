package aula24;
public class Aula24 {
    public static void main(String[] args) {
    Bolsista b1 = new Bolsista();
    b1.setNome("Claudio");
    b1.setIdade(22);
    b1.setSexo("M");
    b1.fazerAniversario();
    b1.setMatricula(111);
    b1.setBolsa(15.5f);
    b1.setCurso("Informatica");
    b1.pagarMensalidade();
    System.out.println(b1.toString());
    }
    
}
