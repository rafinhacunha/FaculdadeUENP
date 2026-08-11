package observer;

import java.util.ArrayList;
import java.util.List;

public class Loja implements ILoja {
    
    private List<ICliente> clientes; 
    private String ofertaAtual;
    private double precoOferta;
    private int estoqueOferta;
    private boolean ofertaAtiva;
    
    public Loja(){
        clientes = new ArrayList<>(); 
        ofertaAtual = "sem ofertas no momento";
        ofertaAtiva = false;
    }

    @Override
    public void adicionarCliente(ICliente ic) {
        clientes.add(ic);
        System.out.println("Cliente " + ((Cliente)ic).getNome() + " adicionado à lista VIP.");
    }

    @Override
    public void removerCliente(ICliente ic) {
        clientes.remove(ic);
        System.out.println("Cliente " + ((Cliente)ic).getNome() + " removido da lista VIP.");
    }

    @Override
    public void notificarClientes() {
        if (!ofertaAtiva || estoqueOferta <= 0) {
            System.out.println("Não há ofertas ativas ou estoque esgotado.");
            return;
        }
        
        System.out.println("\n=== INICIANDO NOTIFICAÇÃO DA OFERTA ===");
        System.out.println("Estoque inicial: " + estoqueOferta + " unidades");
        
        List<ICliente> clientesParaNotificar = new ArrayList<>(clientes);
        
        for (ICliente cliente : clientesParaNotificar) {
            if (estoqueOferta <= 0) {
                System.out.println(">>> ESTOQUE ESGOTADO! Notificações encerradas.");
                break;
            }
            
            cliente.atualizar(ofertaAtual + " - Preço: R$ " + precoOferta);
            
            if (((Cliente)cliente).aceitarOferta()) {
                if (estoqueOferta > 0) {
                    estoqueOferta--;
                    System.out.println(">>> Venda realizada! Estoque restante: " + estoqueOferta);
                    
                    removerCliente(cliente);
                }
            }
            
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        
        if (estoqueOferta <= 0) {
            ofertaAtiva = false;
            System.out.println("\n=== OFERTA FINALIZADA - ESTOQUE ESGOTADO ===");
        } else {
            System.out.println("\n=== NOTIFICAÇÃO CONCLUÍDA ===");
            System.out.println("Estoque restante: " + estoqueOferta + " unidades");
        }
    }
    
    @Override
    public void criarOferta(String produto, double preco, int estoque) {
        this.ofertaAtual = produto;
        this.precoOferta = preco;
        this.estoqueOferta = estoque;
        this.ofertaAtiva = true;
        
        System.out.println("\n✨ NOVA OFERTA CRIADA!");
        System.out.println("Produto: " + produto);
        System.out.println("Preço: R$ " + preco);
        System.out.println("Estoque promocional: " + estoque + " unidades");
    }

    public List<ICliente> getClientes() {
        return clientes;
    }

    public String getOfertaAtual() {
        return ofertaAtual;
    }

    public double getPrecoOferta() {
        return precoOferta;
    }

    public int getEstoqueOferta() {
        return estoqueOferta;
    }

    public boolean isOfertaAtiva() {
        return ofertaAtiva;
    }
}