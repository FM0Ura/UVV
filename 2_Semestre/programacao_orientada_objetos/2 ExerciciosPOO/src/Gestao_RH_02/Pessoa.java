package Gestao_RH_02;
import java.util.Scanner;
public class Pessoa {
    String nome;
    int idade;

    public void setDados(){
        Scanner scan = new Scanner(System.in);
        System.out.println("Insira o nome da pessoa: ");
        this.nome = scan.nextLine();
        System.out.println("Insira a idade da pessoa: ");
        this.idade = scan.nextInt();
    }

    public void getDados(){
        System.out.println("NOME: " + this.nome);
        System.out.println("IDADE: "+ this.idade);
    }

    public String getNome() {
        return nome;
    }

    public int getIdade() {
        return idade;
    }
}
