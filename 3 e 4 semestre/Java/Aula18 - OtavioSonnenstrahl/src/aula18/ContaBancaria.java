package aula18;

public class ContaBancaria{
    private String numConta;
    private String tipo;
    private String dono;
    private float saldo;
    private boolean status;
    
    public ContaBancaria(){
        this.saldo = 0f;
        this.status = false;
    }

    public String getNumConta() {
        return numConta;
    }

    public void setNumConta(String numConta) {
        this.numConta = numConta;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public Boolean getStatus() {
        return status;
    }

    public void setStatus(Boolean status) {
        this.status = status;
    }
    
    public void abrirConta(String t){
        this.setTipo(t);
        this.setStatus(true);
        
        if(t.equals("CC")){
            this.setSaldo(50f);
        } else if(t.equals("CP")){
            this.setSaldo(150f);
        }
        System.out.println("Conta do tipo: " + t + " aberta com seucesso!");
    }
    
    public void fecharConta(){
        if(getSaldo() != 0){
            System.out.println("Você não pode fechar a conta pois o saldo e diferente de zero.");
        } else {
            System.out.println("Conts fechada");
            setStatus(false);
        }
    }
    
    public void depositar(float valor){
        if(this.getStatus()){
            this.setSaldo(this.getSaldo() + valor);
            System.out.println("Foi depositado R$: " + valor + " em sua conta!");
        } else {
            System.out.println("Conta fechada");
        }
    }
    
    public void sacar(float valor){
        if(this.getStatus()){
            if(this.getSaldo() >= valor){
                this.setSaldo(this.getSaldo() - valor);
                System.out.println("Saque de R$: " + valor + " Realizado");
            } else {
                System.out.println("Saldo insuficiente");
            }
        } else {
            System.out.println("Conta fechada nao foi possivel sacar");
        }
    }
    
    public void pagarMensal(){
        float v = 0;
        
        if(this.getTipo().equals("CC")){
            v = 12f;
        } else if(this.getTipo().equals("CP")){
            v = 20f;
        }
        
        if(this.getStatus()){
            if(this.getSaldo() >= v){
                this.setSaldo(this.getSaldo() - v);
                System.out.println("Mensalidade paga");
            } else {
                System.out.println("Saldo insuficiente");
            }
        } else {
            System.out.println("Conta fechada");
            }
    }
    
    public void buscarConta() {
        System.out.println("-----------------------------");
        System.out.println("Conta: " + this.getNumConta());
        System.out.println("Tipo: " + this.getTipo());
        System.out.println("Dono: " + this.getDono());
        System.out.println("Saldo: " + this.getSaldo());
        System.out.println("Status: " + (this.getStatus() ? "Aberta" : "Fechada"));
        System.out.println("-----------------------------");
    }
}
