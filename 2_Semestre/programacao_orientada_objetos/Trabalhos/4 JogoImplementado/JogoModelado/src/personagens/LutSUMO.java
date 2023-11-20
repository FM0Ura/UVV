package personagens;

import armas.Faca;

public class LutSUMO extends Personagem{
    // ATRIBUTOS
    int vida = 80;

    // MÉTODOS
    @Override
    public void desenhar(){
        System.out.println("""
                                                __
                                            ,;.'--'.
                                             /"/=,=(
                                             \\(  __/
                                          ___/    (____
                                        .'     -  -    '.
                                       /         v       \\
                                    __/    ,     |    \\   '-/'_
                                   {z, ,__/__,__/\\__,_ )__(   z}
                                    \\>'   (            \\_ `--c/
                                       _.-'\\_      ,   / \\_
                                      (      `.______.'    '.
                                       \\   ,   \\    ( __     )
                                        \\   )-'-\\__/-'  |   /
                               snd       |  |          /  .'
                                        /  ,)         (   \\_
                                       oooO'           '--Ooo   \
                """);
    }
    @Override
    public void voar(){

    }

    @Override
    public void falar(){
        System.out.println("VAMOS LUTAR!");
    }
}
