
package aula21;
public class Lutador {
    //Atributos
    private String nome, nacionalidade, categoria;
    private int idade, vitorias, derrotas, empates;
    private float peso, altura;

    Lutador(String gojo, String japao, int i, int i0, int i1, int i2) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
    //metodos publicos
    public void apresentar(){
        System.out.println("-------------------------------------------------------");
        System.out.println("Chegou a hora apresentamos o lutador " + this.getNome()) ;
        System.out.println("Diretamente de: " + this.getNacionalidade());
        System.out.println("com " + this.getIdade() + " anos e " + this.getAltura() + "m");
        System.out.println("Pesando seus " + this.getPeso() + "Kg");
        System.out.println(this.getVitorias() + " vitórias");
        System.out.println(this.getEmpates() + " empates");
        System.out.println(this.getDerrotas() + " derrotas");
    }
    public void status(){
        System.out.println(this.getNome() + " e um peso " + this.getCategoria());
        System.out.println("Ganhou " + this.getVitorias() + " vezes");
        System.out.println("Perdeu " + this.getDerrotas() + " vezes");
        System.out.println("Empatatou" + this.getEmpates() + " vezes");
    }
    public void ganharLuta(){
        this.setVitorias(this.getVitorias() + 1);
    }
    public void perderLuta(){
        this.setDerrotas(this.getDerrotas() + 1);
    }
    public void empatatLuta(){
        this.setEmpates(this.getEmpates() + 1);
    }
    //metodos especias
    public Lutador(String no, String na, int id, int vi, int de, int em, float pe, float al) {
        this.nome = no;
        this.nacionalidade = na;
        this.idade = id;
        this.vitorias = vi;
        this.derrotas = de;
        this.empates = em;
        this.setPeso(pe);
        this.altura = al;
    }
    
    //getter and setter

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNacionalidade() {
        return nacionalidade;
    }

    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    public String getCategoria() {
        return categoria;
    }

    private void setCategoria() {
        if(this.peso < 52.2) this.categoria = "invalido";
        else if(this.peso <= 70.3) this.categoria = "Leve";
        else if(this.peso <=83.9) this.categoria = "Medio";
        else if(this.peso <= 120.2) this.categoria = "Pesado";
        else {this.categoria = "Invalido";}
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public int getVitorias() {
        return vitorias;
    }

    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public int getDerrotas() {
        return derrotas;
    }

    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }

    public int getEmpates() {
        return empates;
    }

    public void setEmpates(int empates) {
        this.empates = empates;
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
        this.setCategoria();
    }

    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }
    
    
}
