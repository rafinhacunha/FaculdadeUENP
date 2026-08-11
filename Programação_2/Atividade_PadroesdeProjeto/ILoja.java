package observer;

public interface ILoja {
    
    public void adicionarCliente(ICliente ic);
    
    public void removerCliente(ICliente ic);
    
    public void notificarClientes();
    
    public void criarOferta(String produto, double preco, int estoque);
    
}