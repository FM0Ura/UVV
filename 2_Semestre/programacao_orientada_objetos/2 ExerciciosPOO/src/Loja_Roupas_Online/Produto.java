package Loja_Roupas_Online;

public class Produto {
    // ATRIBUTOS
    String nome;
    double preco;
    int estoque;

    // MÉTODOS
    public String getNome() {
        return "O nome do produto é: " + this.nome;
    }

    public void getPreco() {
        System.out.println("O preço atual do produto é: " + preco);
    }

    public void getEstoque() {
        System.out.println("O estoque atual produto é: " + estoque);
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public void setEstoque(int estoque) {
        this.estoque = estoque;
    }

    public double valorTotalEstoque(){
        return this.estoque * this.preco;
    }
    // CONSTRUTOR
    public Produto() {
    }
}
