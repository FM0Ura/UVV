// Adicionar em https://docs.google.com/document/d/1e70Rc_R4aX2GdedeYdmMmUWMrPORz0TYUH1obqkX16U/edit

/*
    6) Criar duas funções e seus protótipos que calculem a Combinação e o Arranjo de n elementos combinados p a p.
    Após isso, na main, use as funções criadas várias vezes e exiba o resultado da Combinação e do Arranjo enquanto os valores lidos do usuário: n e p estiverem corretos. Sabe-se que:
        
        Arranjo(n, p) = n! / (n−p)!

        Combinação(n, p) = Arranjo(n,p) / p!
        
        Sendo que: n e p ≥ 0 e n ≥ p

*/

#include <stdio.h> // Biblioteca I/O
#include <string.h> // Biblioteca String

// PROTÓTIPOS:
int Arranjo(int n, int p);
int Combinacao(int n, int p);

// FUNÇÕES:
int Arranjo(int n, int p){
    int index = 1, nFatorial = 1, n_pFatorial = 1;
    int diferencaN_P = (n-p);
    // Calculo de: n!
    while (n != 0)
    {
        nFatorial *= n;
        n--;
    }
    
    // Calculo de: (n-p)!
    while (diferencaN_P  != 0)
    {        
        n_pFatorial *= diferencaN_P;
        diferencaN_P--; 
    }
    return nFatorial/n_pFatorial; 
}

int Combinacao(int n, int p){
    int arranjo;
    int pFatorial = 1;
    
    arranjo = Arranjo(n,p);
    
    while (p != 0)
    {
        pFatorial *= p;
        p--;
    }

    return arranjo/pFatorial;
    
}

int main(void) {
    int arranjo = 0, combinacao = 0, opcao = 1;

    
    do{
        if (opcao == 0){
            printf("\tSAINDO DO PROGRAMA\n");
        } else{
            
        }
    } while(opcao != 0);
    arranjo = Arranjo(10,5);
    
    combinacao = Combinacao(10, 5);
    printf("\tARRANJO: %i\n\n", arranjo);
    printf("\tCOMBINAÇÃO: %i\n\n", combinacao);
    return 0;
}