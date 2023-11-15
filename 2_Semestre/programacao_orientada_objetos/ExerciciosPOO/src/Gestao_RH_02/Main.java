package Gestao_RH_02;
import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Pessoa p1 = new Pessoa();
        Pessoa p2 = new Pessoa();
        Pessoa p3 = new Pessoa();
        Pessoa p4 = new Pessoa();
        Pessoa p5 = new Pessoa();

        float media = 0.0f;

        p1.setDados();
        p2.setDados();
        p3.setDados();
        p4.setDados();
        p5.setDados();

        int[] idades = {p1.getIdade(), p2.getIdade(), p3.getIdade(), p4.getIdade(), p5.getIdade()};
        for (int index = 0;index < idades.length;index++){
            media += idades[index];
        }
        media = media/5;

        System.out.println("A média das idades das pessoas é: " + media);
    }
}
