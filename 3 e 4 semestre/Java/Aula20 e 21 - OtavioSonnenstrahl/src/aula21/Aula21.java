package aula21;
public class Aula21 {
    public static void main(String[] args) {
        // TODO code application logic here
        Lutador l[] = new Lutador[6];
        
        l[0] = new Lutador("A", "Japao", 18, 1, 1 ,1,70.2f,1.80f);
        l[1] = new Lutador("B", "Brasil", 30, 20, 1, 4, 90.0f, 1.88f);
        l[2] = new Lutador("C", "Japao", 34, 23, 0, 5, 85.0f, 1.85f);
        l[3] = new Lutador("D", "Brasil", 24, 12, 3, 1, 80.3f, 1.73f);
        l[4] = new Lutador("E", "Japao", 33, 15, 0, 8, 65.5f, 1.75f);
        l[5] = new Lutador("F", "Brasil", 23, 18, 2, 3, 68.0f, 1.70f);

        Luta UEC01 = new Luta();
        UEC01.marcarLuta(l[0], l[4]);
        UEC01.lutar();
    } 
}
