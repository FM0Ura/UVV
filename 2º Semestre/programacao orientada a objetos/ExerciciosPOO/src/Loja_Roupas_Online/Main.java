package Loja_Roupas_Online;

public class Main {
    public static void main(String[] args) {
        Produto calcado = new Produto();
        Produto relogio = new Produto();
        Produto carteira = new Produto();

        calcado.setNome("Tênis Nike Revolution 6 Next Nature Masculino");
        calcado.setPreco(351.0);
        calcado.setEstoque(100);
        relogio.setNome("Cosmograph Daytona - Rolex");
        relogio.setPreco(555.500);
        relogio.setEstoque(130);
        carteira.setNome("Carteira de Couro");
        carteira.setPreco(50.52);
        carteira.setEstoque(200);

        System.out.println(calcado.getNome());
        calcado.getEstoque();
        calcado.getPreco();
        System.out.println("O valor total em estoque do produto é de R$" + calcado.valorTotalEstoque());
        System.out.println(relogio.getNome());
        relogio.getEstoque();
        relogio.getPreco();
        System.out.println("O valor total em estoque do produto é de R$" + relogio.valorTotalEstoque());
        System.out.println(carteira.getNome());
        carteira.getEstoque();
        carteira.getPreco();
        System.out.println("O valor total em estoque do produto é de R$" + carteira.valorTotalEstoque());

    }
}
