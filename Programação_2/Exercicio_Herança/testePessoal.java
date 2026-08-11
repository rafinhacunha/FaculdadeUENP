package com.mycompany.mavenproject1;

public class testePessoal {
    public static void main(String[] args) {
        Funcionario func = new Funcionario(101, "João Silva", 3500.00);
        double descontoFunc = 300.00;
        System.out.println("===== FUNCIONÁRIO =====");
        System.out.println("Código: " + func.getCodigo());
        System.out.println("Nome:   " + func.getNome());
        System.out.println("Salário bruto: R$ " + func.getSalario());
        System.out.println("Desconto aplicado: R$ " + descontoFunc);
        System.out.println("Salário líquido: R$ " + func.mostrarSalario(descontoFunc));
        
        System.out.println();
        
        Gerente ger = new Gerente(201, "Maria Oliveira", 7000.00, 1200.00);
        double descontoGer = 500.00;
        System.out.println("===== GERENTE =====");
        System.out.println("Código: " + ger.getCodigo());
        System.out.println("Nome:   " + ger.getNome());
        System.out.println("Salário base:     R$ " + ger.getSalario());
        System.out.println("Gratificação:     R$ " + ger.getGratificacao());
        System.out.println("Desconto aplicado: R$ " + descontoGer);
        System.out.println("Salário líquido:  R$ " + ger.mostrarSalario(descontoGer));
    }
}
