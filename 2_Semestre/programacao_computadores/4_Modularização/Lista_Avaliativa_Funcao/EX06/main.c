/*
    6) Criar duas funções e seus protótipos que calculem a Combinação e o Arranjo de n elementos combinados p a p.
    Após isso, na main, use as funções criadas várias vezes e exiba o resultado da Combinação e do Arranjo enquanto os valores lidos do usuário: n e p estiverem corretos. Sabe-se que:

        Arranjo(n, p) = n! / (n−p)!

        Combinação(n, p) = Arranjo(n,p) / p!

        Sendo que: n e p ≥ 0 e n ≥ p
    FEITO!
*/

#include <stdio.h>  // Biblioteca I/O

// PROTÓTIPOS:
int Fatorial(int n);
int Arranjo(int n, int p);
int Combinacao(int n, int p);

// FUNÇÕES:
int Fatorial(int n)
{
    int nFatorial = 1;

    while (n != 1)
    {
        nFatorial *= n;
        n--;
    }
    return nFatorial;
}

int Arranjo(int n, int p)
{
    int index = 1, nFatorial = 1, n_pFatorial = 1;
    int diferencaN_P = (n - p);
    
    nFatorial = Fatorial(n);
    n_pFatorial = Fatorial(n - p);


    return nFatorial / n_pFatorial;
}

int Combinacao(int n, int p)
{
    int arranjo;
    int pFatorial = 1;

    arranjo = Arranjo(n, p);

    pFatorial = Fatorial(p);

    return arranjo / pFatorial;
}

int main(void)
{
    int arranjo = 0, combinacao = 0, opcao = 1;
    int N, P, check1, index = 1;
    do
    {
        printf("MENU:\n");
        printf("\tDIGITE 1: INSERIR VALORES N e P.\n");
        printf("\tDIGITE 0: SAIR DO PROGRAMA.\n");
        printf("O que seja fazer? ");
        scanf("%i", &opcao);
        if (opcao == 0)
        {
            printf("\tSAINDO DO PROGRAMA\n");
        }
        else
        {
            do
            {
                check1 = 1;
                printf("Insira os valores N e P:\n");
                printf("N: ");
                scanf("%i", &N);
                printf("\nP: ");
                scanf("%i", &P);
                if (N < 0 && P < 0)
                {
                    printf("\n[ERROR] Valor de N ou P menor que 0, insira os valores novamente!");
                    check1 = 1;
                }
                else if (N < P)
                {
                    printf("\n[ERROR] Valor de N < P, insira os valores novamente!");
                    check1 = 1;
                }
                else
                {
                    check1 = 0;
                }
            } while (check1 != 0);
            arranjo = Arranjo(10, 5);
            combinacao = Combinacao(10, 5);
            printf("\t%iº ARRANJO: %i\n\n", index, arranjo);
            printf("\t%iº COMBINAÇÃO: %i\n\n", index, combinacao);
        }
    } while (opcao != 0);

    return 0;
}