package Empresa_Anuncios_Online;

public class Anuncio {
    // ATRIBUTOS
    int id;
    String palavras;
    String diasPublicacao;
    float valor;
    String titulo;
    String dataInsercao;
    int publicar;
    String nomeContato;
    String telefone;
    String observacao;

    // MÉTODOS
    public void remeterViaEmail(){
        System.out.println("Este método envia por email uma notificação para o cliente\n");
    }
    public void manter(){
        System.out.println("Este método mantêm o anúncio na rede\n");
    }
    public void anunciar(){
        System.out.println("Este método anuncia na rede\n");
    }
    public String localizar(){
        return "Mostra em que sites o anúncio estava sendo reproduzido\n";
    }

    // CONSTRUTOR

    public Anuncio(int id, String palavras, String diasPublicacao, float valor, String titulo, String dataInsercao, int publicar, String nomeContato, String telefone, String observacao) {
        this.id = id;
        this.palavras = palavras;
        this.diasPublicacao = diasPublicacao;
        this.valor = valor;
        this.titulo = titulo;
        this.dataInsercao = dataInsercao;
        this.publicar = publicar;
        this.nomeContato = nomeContato;
        this.telefone = telefone;
        this.observacao = observacao;
    }
}
