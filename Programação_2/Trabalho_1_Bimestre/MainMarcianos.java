package com.mycompany.marcianos;

public class MainMarcianos {
    public static void main(String[] args) {
        Marcianos m1 = new Marcianos("Zorg");
        Marcianos m2 = new Marcianos("Blip");
        Marcianos m3 = new Marcianos("Xar");

        m1.atacar();     
        m2.atacar();     

        m3.perderVida();
        m3.perderVida();

        m1.atacar();
    }
}
