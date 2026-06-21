package aula28;
public class Aula28 {
    public static void main(String[] args) {
        Video v[] = new Video[3];
        
        v[0] = new Video("Video 1");
        v[1] = new Video("Video 2");
        v[2] = new Video("Video 3");
        System.out.println(v[0].toString());
        
        Gafanhoto g[] = new Gafanhoto[2];
        g[0] = new Gafanhoto("Thiago", 22, "M", "M4rginal");
        g[1] = new Gafanhoto("Anaconda", 45, "F", "Anaconda");
        
        System.out.println(g[0].toString());
        System.out.println(g[1].toString());
        
        System.out.println();
        
        Visualizacao vis[] = new Visualizacao[5];
        
        vis[0] = new Visualizacao(g[0], v[2]);
        vis[0].avaliar();
        System.out.println(vis[0].toString());
        
        vis[0] = new Visualizacao(g[0], v[1]);
        vis[0].avaliar(87.0f);
        System.out.println(vis[0].toString());
    
    }
}
