package personagens;

import armas.Magia;

public class Mago extends Personagem{
    // ATRIBUTOS
    Magia magia;
    int vida = 50;

    // MÉTODOS
    @Override
    public void desenhar(){
        System.out.println("""
                              _,._     \s
                  .||,       /_ _\\\\    \s
                 \\.`',/      |'L'| |   \s
                 = ,. =      | -,| L   \s
                 / || \\    ,-'\\"/,'`.  \s
                   ||     ,'   `,,. `. \s
                   ,|____,' , ,;' \\| | \s
                  (3|\\    _/|/'   _| | \s
                   ||/,-''  | >-'' _,\\\\\s
                   ||'      ==\\ ,-'  ,'\s
                   ||       |  V \\ ,|  \s
                   ||       |    |` |  \s
                   ||       |    |   \\ \s
                   ||       |    \\    \\\s
                   ||       |     |    \\
                   ||       |      \\_,-'
                   ||       |___,,--")_\\
                   ||         |_|   ccc/
                   ||        ccc/      \s
                   ||                hjm\
                """);
    }

    public void magiaDefensiva(){
        magia.usarArma();
    }

    @Override
    public void voar(){
    }

    @Override
    public void falar(){
        System.out.println("Jovem rival, irei com tudo nessa batalha!");
    }
}
