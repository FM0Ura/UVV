package Loja_Livros;

public class Livraria {
    public static void main(String[] args) {

        Livro livro1 = new Livro();
        Livro livro2 = new Livro();
        Livro livro3 = new Livro();

        livro1.setAutor("Nicolau Maquiavel");
        livro1.setTitulo("O Príncipe Maquiavel");
        livro1.setAnoPublicacao(2023);
        livro1.setEditora("Editora Garnier");
        livro1.setPreco(19.90);

        System.out.println("O autor desse livro é: " + livro1.getAutor() + "\n");
        System.out.println("O título desse livro é: " + livro1.getTitulo() + "\n");
        System.out.println("O ano de publicação desse livro é: " + livro1.getAnoPublicacao() + "\n");
        System.out.println("A editora desse livro é: " + livro1.getEditora() + "\n");
        System.out.println("O preço desse livro é: " + livro1.getPreco() + "\n");

        System.out.println("O livro foi lançado a " + livro1.calcularAno() + " anos atrás.");

        livro2.setAutor("Antoine de Saint-Exupéry");
        livro2.setTitulo("O Pequeno Príncipe");
        livro2.setAnoPublicacao(2023);
        livro2.setEditora("Editora Garnier");
        livro2.setPreco(19.90);

        System.out.println("O autor desse livro é: " + livro2.getAutor() + "\n");
        System.out.println("O título desse livro é: " + livro2.getTitulo() + "\n");
        System.out.println("O ano de publicação desse livro é: " + livro2.getAnoPublicacao() + "\n");
        System.out.println("A editora desse livro é: " + livro2.getEditora() + "\n");
        System.out.println("O preço desse livro é: " + livro2.getPreco() + "\n");

        System.out.println("O livro foi lançado a " + livro2.calcularAno() + " anos atrás.");

        livro3.setAutor("Flávio Augusto Da Silva");
        livro3.setTitulo("Ponto de inflexão");
        livro3.setAnoPublicacao(2019);
        livro3.setEditora("Buzz Editora");
        livro3.setPreco(47.56);


        System.out.println("O autor desse livro é: " + livro3.getAutor() + "\n");
        System.out.println("O título desse livro é: " + livro3.getTitulo() + "\n");
        System.out.println("O ano de publicação desse livro é: " + livro3.getAnoPublicacao() + "\n");
        System.out.println("A editora desse livro é: " + livro3.getEditora() + "\n");
        System.out.println("O preço desse livro é: " + livro3.getPreco() + "\n");
        System.out.println("O livro foi lançado a " + livro3.calcularAno() + " anos atrás.");
    }
}
