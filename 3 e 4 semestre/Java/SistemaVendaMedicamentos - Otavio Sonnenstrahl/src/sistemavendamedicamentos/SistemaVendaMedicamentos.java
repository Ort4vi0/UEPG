package sistemavendamedicamentos;
public class SistemaVendaMedicamentos {
    public static void main(String[] args) {
        Farmacia farmacia = new Farmacia();

        // Instanciando 3 medicamentos genéricos
        farmacia.adicionarMedicamento(new MedicamentoGenerico("Paracetamol", 10.00));
        farmacia.adicionarMedicamento(new MedicamentoGenerico("Ibuprofeno", 15.00));
        farmacia.adicionarMedicamento(new MedicamentoGenerico("Dipirona", 8.00));

        // Instanciando 2 medicamentos de marca
        farmacia.adicionarMedicamento(new MedicamentoMarca("Aspirina", 20.00, "Bayer"));
        farmacia.adicionarMedicamento(new MedicamentoMarca("Allegra", 35.00, "Sanofi"));

        // Processa e imprime o resultado
        farmacia.finalizarVenda();
    }
    
}
