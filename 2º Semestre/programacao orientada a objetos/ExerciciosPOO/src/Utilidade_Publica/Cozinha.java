package Utilidade_Publica;

public class Cozinha {
    public static void main(String[] args) {
        PopulacaoBarata popBarata = new PopulacaoBarata();
        popBarata.setQtdInicial();
        System.out.println("A população INICIAL de baratas é de " + popBarata.getQtdBaratas() + "\n");
        popBarata.aumentaBaratas();
        System.out.println("População aumentada\n");
        popBarata.spray();
        System.out.println("Spray utilizado\n");
        System.out.println("A população ATUAL de baratas é de " + popBarata.getQtdBaratas() + "\n");
    }
}
