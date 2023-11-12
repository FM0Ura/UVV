package Utilidade_Publica;
import java.util.Random;

public class PopulacaoBarata {
    // ATRIBUTOS
    int quantidade;

    // MÉTODOS
    public void setQtdInicial() {
        Random random = new Random();
        int qtdInicial;
        do {
            qtdInicial = random.nextInt();
        } while (qtdInicial <= 0);
        this.quantidade = qtdInicial;
    }

    public void aumentaBaratas() {
        Random taxaCrescimento = new Random();
        int aumento;
        do {
            aumento = taxaCrescimento.nextInt();
        } while (aumento <= 0);
        this.quantidade = this.quantidade * aumento;
    }

    public void spray() {
        this.quantidade = (int) (this.quantidade * 0.9);
    }

    public int getQtdBaratas() {
        return quantidade;
    }
}
