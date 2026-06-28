package sistemavendamedicamentos;
public class MedicamentoGenerico extends Medicamento{

    public MedicamentoGenerico(String nome, double valor) {
        super(nome, valor);
    }
    
    @Override
    public double calcularDesconto(){
        return getValor() * 0.80;
    }
    
    
}
