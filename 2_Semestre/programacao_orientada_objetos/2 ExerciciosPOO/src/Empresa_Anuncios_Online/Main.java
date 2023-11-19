package Empresa_Anuncios_Online;

public class Main {
    public static void main(String[] args) {
        Anuncio anuncio1 = new Anuncio(1, "...", "Segunda, Sábado, Domingo", 1234, "Marketing Digital", "01/10/2023",10,"Gabriel", "27999999", "Mais indicado para pessoas com problemas de lactose");

        System.out.println("Este anúncio possui id: " + anuncio1.id);
        System.out.println("Este anúncio possui titulo: " + anuncio1.titulo);
        System.out.println("Este anúncio possui texto: " + anuncio1.palavras);
        System.out.println("Este anúncio possui essas publicações: " + anuncio1.publicar);
        System.out.println("Este anúncio possui essa Data de Inserção: " + anuncio1.dataInsercao);
        System.out.println("Este anúncio possui esses Dias de Publicação: " + anuncio1.diasPublicacao);
        System.out.println("Este anúncio possui esse número de telefone: " + anuncio1.telefone);
        System.out.println("Este anúncio possui esse contato: " + anuncio1.nomeContato);
        System.out.println("Este anúncio possui esse valor: " + anuncio1.valor);
        System.out.println("Este anúncio possui essa observação: " + anuncio1.observacao);

        anuncio1.anunciar();
        anuncio1.localizar();
        anuncio1.remeterViaEmail();
        anuncio1.manter();
    }
}
