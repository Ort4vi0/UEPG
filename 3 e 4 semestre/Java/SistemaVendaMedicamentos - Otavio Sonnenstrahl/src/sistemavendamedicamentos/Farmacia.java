package sistemavendamedicamentos;

import java.util.ArrayList;
import java.util.List;

public class Farmacia {
    
    private List<Medicamento> carrinho;
    
    public Farmacia() {
        this.carrinho = new ArrayList<>();
    }
    
    public void adicionarMedicamento(Medicamento m) {
        carrinho.add(m);
    }
    
    public double calcularTotalSemDesconto() {
        double total = 0;
        for (Medicamento m : carrinho) {
            total += m.getValor();
        }
        return total;
    }
    
    public double calcularTotalComDesconto() {
        double total = 0;
        for (Medicamento m : carrinho) {
            total += m.calcularDesconto();
        }
        return total;
    }
    
    public void finalizarVenda() {
        System.out.println("***** RESUMO DA VENDA *****");
        
        for (Medicamento m : carrinho) {
            if (m instanceof MedicamentoMarca) {
                MedicamentoMarca marca = (MedicamentoMarca) m;
                System.out.printf("%s (%s)\n", marca.getNome(), marca.getMarca());
            } else {
                System.out.println(m.getNome());
            }
            System.out.printf("R$ %.2f -> R$ %.2f\n", m.getValor(), m.calcularDesconto());
        }
        
        System.out.println("***************************");
        System.out.printf("VALOR TOTAL SEM DESCONTO: R$ %.2f\n", calcularTotalSemDesconto());
        System.out.printf("VALOR TOTAL COM DESCONTO: R$ %.2f\n", calcularTotalComDesconto());
        System.out.println("***************************");
    } 
}
