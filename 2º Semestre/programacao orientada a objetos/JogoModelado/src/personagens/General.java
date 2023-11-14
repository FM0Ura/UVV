package personagens;

import armas.Faca;

public class General extends Personagem {
    // ATRIBUTOS
    int vida = 100;


    // MÉTODOS
    @Override
    public void desenhar(){
        System.out.println("""
                       .---.
                      /_____\\
                      ( '.' )
                       \\_-_/_
                    .-"`'V'//-.
                   / ,   |// , \\
                  / /|Ll //Ll|\\ \\
                 / / |__//   | \\_\\
                 \\ \\/---|[]==| / /
                  \\/\\__/ |   \\/\\/
                   |/_   | Ll_\\|
                     |`^""\"^`|
                     |   |   |
                     |   |   |
                     |   |   |
                     |   |   |
                     L___l___J
                      |_ | _|
                jgs  (___|___)
                      ^^^ ^^^""");
    }
    @Override
    public void voar(){

    }


}
