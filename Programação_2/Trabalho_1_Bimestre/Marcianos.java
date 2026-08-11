
package com.mycompany.marcianos;

public class Marcianos {
    private static int contador = 0;
    private String nome;
    private int vidas=3;
    
    public Marcianos(String nome){
        this.nome = nome;
        contador++;
    }
    
    public void atacar(){
        if(contador > 3){
            System.out.printf(getNome() + " Ataca!");
        }
        else{
            System.out.printf(getNome() + " esta com medo");
        }
    }
    public void perderVida(){
        if(vidas > 0){
            vidas--;
            System.out.println(getNome() + " .Vidas restantes: " + getVidas());
            if(vidas == 0){
            contador--;
        }
        }
        
    }
    public int getVidas(){
        return vidas;
    }
    
    public void setNome(String nome){
        this.nome = nome;
    }
    
    public String getNome(){
        return nome;
    }
}
