package personagens;

/*
* Inserir no jogo um novo personagem: DragaoAlado – verifique se todos os comportamentos definidos em
Personagem são comuns ao dragão (um dragão deve falar?). Defina uma nova arma (a seu gosto) para o
dragão (fogo, por exemplo)
*
*
*
* */

import java.security.PublicKey;

public class DragaoAlado extends Personagem{
    // ATRIBUTOS
    int vida = 100;
    // MÉTODOS
    @Override
    public void desenhar(){
        System.out.println("""
                                \\||/
                                |  @___oo
                      /\\  /\\   / (__,,,,|
                     ) /^\\) ^\\/ _)
                     )   /^\\/   _)
                     )   _ /  / _)
                 /\\  )/\\/ ||  | )_)
                <  >      |(,,) )__)
                 ||      /    \\)___)\\
                 | \\____(      )___) )___
                  \\______(_______;;; __;;;""");
    }
    @Override
    public void falar(){
        System.out.println("GUUUARRRR");
    }

    @Override
    public void correr(){

    }
}
