package Loja_Livros;
import java.util.Calendar;
public class Livro {
    // ATRIBUTOS
    String titulo;
    String autor;
    String editora;
    int anoPublicacao;
    double preco;

    // MÉTODOS


    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getEditora() {
        return editora;
    }

    public void setEditora(String editora) {
        this.editora = editora;
    }

    public int getAnoPublicacao() {
        return anoPublicacao;
    }

    public void setAnoPublicacao(int anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public int calcularAno() {
        Calendar calendar = Calendar.getInstance();  // Get an instance of the current calendar
        int anoAtual = calendar.get(Calendar.YEAR);

        return anoAtual - anoPublicacao;
    }
    // CONSTRUTORES

    public Livro() {
    }
}
