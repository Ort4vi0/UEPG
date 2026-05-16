/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula17;

/**
 *
 * @author PC
 */
public class Caneta {
    
    private String marca;
    private String modelo;
    private String cor;
    private float ponta;
    private int carga;
    private boolean tampada;

    //CONSTRUTOR
    public Caneta() {
    }
    //CONSTRUTOR
    public Caneta(String marca, String modelo, String cor, float ponta, int carga, boolean tampada) {
        this.marca = marca;
        this.modelo = modelo;
        this.cor = cor;
        this.ponta = ponta;
        this.carga = carga;
        this.tampada = tampada;
    }
    //Geters, Seters, personalizados
    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public float getPonta() {
        return ponta;
    }

    public void setPonta(float ponta) {
        this.ponta = ponta;
    }

    public int getCarga() {
        return carga;
    }

    public void setCarga(int carga) {
        this.carga = carga;
    }

    public String isTampada() {
        return this.tampada ? "SIM" : "NÃO";
    }

    public void setTampada(boolean tampada) {
        this.tampada = tampada;
    }
    
    public void destampar(){
        this.tampada = false;
    }
    
    public void escrever(){
        if(this.tampada){
            System.out.println("Caneta tampada");
        }
    }
    
    public void status(){
        System.out.println("Marca: " + this.marca);
        System.out.println("Cor: " + this.cor);
        System.out.println("Ponta: " + this.ponta);
        System.out.println("Carga: " + this.carga);
        System.out.println("Está tampada?: " + isTampada());
    }
    
    public Boolean getTampada(){
        return this.tampada;
    }
}
