package personagens;

public class Soldado extends Personagem{
    // ATRIBUTOS
    int vida = 80;

    // MÉTODOS
    @Override
    public void desenhar(){
        System.out.println("""
                       .---.
                  ___ /_____\\
                 /\\.-`( '.' )
                / /    \\_-_/_
                \\ `-.-"`'V'//-.
                 `.__,   |// , \\
                     |Ll //Ll|\\ \\
                     |__//   | \\_\\
                    /---|[]==| / /
                    \\__/ |   \\/\\/
                    /_   | Ll_\\|
                     |`^""\"^`|
                     |   |   |
                     |   |   |
                     |   |   |
                     |   |   |
                     L___l___J
                 jgs  |_ | _|
                     (___|___)
                      ^^^ ^^^""");
    }
    @Override
    public void voar(){

    }

    @Override
    public void falar(){
        System.out.println("EM PRONTIDÃO GENERAL!");
    }
}
