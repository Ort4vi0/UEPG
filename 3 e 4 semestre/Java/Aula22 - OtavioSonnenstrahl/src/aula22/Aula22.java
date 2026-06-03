package aula22;
public class Aula22 {
    public static void main(String[] args) {
        Pessoa[] p = new Pessoa[2];
        Livro[] l = new Livro[3];
        
        p[0] = new Pessoa("Otavio", 19, "M");
        p[1] = new Pessoa("Rogerio", 19, "F");
        
        l[0] = new Livro("Witch hat", "José Silva", 3000, p[0]);
        l[1] = new Livro("Witch hat 2", "José Silva", 2320, p[1]);
        
        l[0].abrir();
        l[0].folhear(50);
        l[0].avancarPag();
        System.out.println(l[0].detalhes());
        System.out.println(l[1].detalhes());
     }
    
}
 