
package com.mycompany.mavenproject1;


public class Cilindro extends Circulo{
    private double altura;
    
    public Cilindro(double altura){
        this.altura = altura;
    }
    public void setAltura(double altura){
        this.altura = altura;
    }
    
    public double getAltura(){
        return altura;
    }
    
    @Override
    public double calcularArea(){
        double areaBase = super.calcularArea();
        double areaLateral = 2 * Math.PI * getRaio() * altura;
        return 2 * areaBase + areaLateral;
    }
}
