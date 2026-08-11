package com.mycompany.mavenproject1;

public class Funcionario extends Pessoa {
    private double salario;
    
    public Funcionario(){
        super();
    }
    
    public Funcionario(int codigo, String nome, double salario){
        super(codigo, nome);
        this.salario = salario;
    }
    
    public double getSalario(){
        return salario;
    }
    
    public void setSalario(double salario){
        this.salario = salario;
    }
    
    public double mostrarSalario(double desconto){
        double desconto_;
        desconto_ = desconto;
        return salario - desconto_;
    }
}
