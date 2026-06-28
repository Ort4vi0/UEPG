package sistemavendamedicamentos;
public class MedicamentoMarca extends Medicamento{
    private String marca;
    
    public MedicamentoMarca(String nome, double valor, String marca) {
        super(nome, valor);
        this.marca = marca;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }
    
    @Override
    public double calcularDesconto(){
        return getValor() * 0.90;
    }
}
