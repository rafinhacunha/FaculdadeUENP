package observer;

import java.util.Random;

public class Cliente implements ICliente {
    
    private String nome;
    private Random random;
    
    public Cliente(){
        nome = "sem nome"; 
        random = new Random();
    }
    
    public Cliente(String nome){
        this.nome = nome; 
        random = new Random();
    }
    
    @Override
    public void atualizar(String mensagem){
        System.out.println("Cliente " + nome + " recebeu a oferta: " + mensagem);
        
        boolean aceitou = aceitarOferta();
        if (aceitou) {
            System.out.println(">>> Cliente " + nome + " ACEITOU a oferta!");
        } else {
            System.out.println(">>> Cliente " + nome + " RECUSOU a oferta.");
        }
    }
    
    @Override
    public boolean aceitarOferta() {
        return random.nextBoolean();
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
}