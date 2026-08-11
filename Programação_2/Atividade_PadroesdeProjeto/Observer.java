package observer;

public class Observer {

    public static void main(String[] args) {
        System.out.println("=== SISTEMA DE OFERTAS - PADRÃO OBSERVER ===\n");
        
        ICliente cliente1 = new Cliente("Petrus");
        ICliente cliente2 = new Cliente("Julius");
        ICliente cliente3 = new Cliente("Aloki");
        ICliente cliente4 = new Cliente("Totus");
        ICliente cliente5 = new Cliente("Maria");
        ICliente cliente6 = new Cliente("João");
        
        Loja loja = new Loja();
        
        loja.adicionarCliente(cliente1);
        loja.adicionarCliente(cliente2);
        loja.adicionarCliente(cliente3);
        loja.adicionarCliente(cliente4);
        loja.adicionarCliente(cliente5);
        loja.adicionarCliente(cliente6);
        
        System.out.println("\nTotal de clientes VIP: " + loja.getClientes().size());
        
        loja.criarOferta("Notebook Acer Aspire 5", 3500.00, 4);
        
        loja.notificarClientes();
        
        System.out.println("\n--- Tentativa de notificação após oferta ---");
        loja.notificarClientes();
    }
}