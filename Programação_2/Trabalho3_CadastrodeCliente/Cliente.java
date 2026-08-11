package com.mycompany.trabalho;

public class Cliente {
    private static int contador = 1;

    private int codigo;
    private String nome;
    private Endereco endereco;
    private String telefone;

    public Cliente() {}

    public Cliente(String nome, Endereco endereco, String telefone) {
        this.codigo = contador++;
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
    }

    public int getCodigo() { return codigo; }

    public String getNome() { return nome; }
    public void setNome(String nome) { this.nome = nome; }

    public Endereco getEndereco() { return endereco; }
    public void setEndereco(Endereco endereco) { this.endereco = endereco; }

    public String getTelefone() { return telefone; }
    public void setTelefone(String telefone) { this.telefone = telefone; }
}