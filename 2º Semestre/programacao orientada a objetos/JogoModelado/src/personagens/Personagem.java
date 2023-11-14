package personagens;

import armas.Arma_IF;
import armas.Faca;

public class Personagem {
    // ATRIBUTOS
    Arma_IF arma;
    Faca armaDefault = new Faca();
    int vida;


    // MÉTODOS
    public void apresentacao(){
        System.out.println("Nome da classe: " + this.getClass().getSimpleName());
    }

    public void desenhar(){

    }

    public void falar(){

    }

    public void arma(){
        arma.usarArma();
    }

    public void setArma(){

    }

    public void correr(){
        if (this.vida < this.vida*0.3)
            System.out.println("CORRE MALUCO!");
        else
            System.out.println(" ");

    }

    public void voar(){
        System.out.println("VOA MLK!");
    }
}
