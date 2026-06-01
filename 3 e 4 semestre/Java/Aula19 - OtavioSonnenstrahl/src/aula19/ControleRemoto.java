package aula19;
public class ControleRemoto implements Controlador{
    //Atributos
    private int volume;
    private boolean ligado;
    private boolean tocando;
    //Constructor
    public ControleRemoto(){
        this.volume = 50;
        this.ligado = false;
        this.tocando = false;
    }
    //Getter Setter
    private int getVolume() {
        return volume;
    }

    private void setVolume(int volume) {
        this.volume = volume;
    }

    private boolean getLigado() {
        return ligado;
    }

    private void setLigado(boolean ligado) {
        this.ligado = ligado;
    }

    private boolean getTocando() {
        return tocando;
    }

    private void setTocando(boolean tocando) {
        this.tocando = tocando;
    }
    //Abstracts

    @Override
    public void Ligar() {
        this.setLigado(true);
    }

    @Override
    public void Desligar() {
        this.setLigado(false);
    }

    @Override
    public void abrirMenu() {
        System.out.println("----- MENU -----");
        System.out.println("Esta ligado? " + this.getLigado());
        System.out.println("Esta tocando? " + this.getTocando());
        System.out.print("Volume: " + this.getVolume() + " ");
        for (int i = 0; i <= this.getVolume(); i+=10){
            System.out.print("-");
        }
        System.out.println("");
    }

    @Override
    public void fecharMenu() {
        System.out.println("Fechando menu");
    }

    @Override
    public void maisVolume() {
        if(getLigado()){
            setVolume(getVolume() + 5);
        } else {
            System.out.println("Nao tem como aumentar o som fi, bagui ta desligado");
        }
    }

    @Override
    public void menosVolume() {
        if(getLigado()){
            setVolume(getVolume() - 5);
        } else {
            System.out.println("Nao tem como diminur o som fi, bagui ta desligado");
        }
    }

    @Override
    public void ligarMudo() {
        if(this.getLigado() && this.getVolume() > 0){
            this.setVolume(0);
        }
    }

    @Override
    public void desligarMudo() {
        if(this.getLigado() && this.getVolume() == 0){
            this.setVolume(50);
        }
    }

    @Override
    public void play() {
        if(this.getLigado() && !(this.getTocando())){
            this.setTocando(true);
        }
    }

    @Override
    public void pause() {
        if(this.getLigado() && !(this.getTocando())){
            this.setTocando(false);
        }
    }
    

}
