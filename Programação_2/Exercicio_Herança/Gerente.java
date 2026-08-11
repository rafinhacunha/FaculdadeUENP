
package com.mycompany.mavenproject1;

public class Gerente extends Funcionario {
    private double gratificacao;
    
    public Gerente(){
        super();
    }
    
    public Gerente(int codigo, String nome, double salario, double gratificacao){
        super(codigo, nome, salario);
        this.gratificacao = gratificacao;
    }
    
    public double getGratificacao(){
        return gratificacao;
    }
    
    public void setGratificacao(double gratificacao){
        this.gratificacao = gratificacao;
    }
    
    @Override
    public double mostrarSalario(double desconto_){
        return getSalario() - desconto_ + gratificacao;
    }
}
