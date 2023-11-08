// Adicionar em https://docs.google.com/document/d/1e70Rc_R4aX2GdedeYdmMmUWMrPORz0TYUH1obqkX16U/edit

/*
    6) Criar duas funções e seus protótipos que calculem a Combinação e o Arranjo de n elementos combinados p a p.
    Após isso, na main, use as funções criadas várias vezes e exiba o resultado da Combinação e do Arranjo enquanto os valores lidos do usuário: n e p estiverem corretos. Sabe-se que:

        Arranjo(n, p) = n! / (n−p)!

        Combinação(n, p) = Arranjo(n,p) / p!

        Sendo que: n e p ≥ 0 e n ≥ p

*/

#include <stdio.h>  // Biblioteca I/O
#include <string.h> // Biblioteca String

// PROTÓTIPOS:
int Arranjo(int n, int p);
int Combinacao(int n, int p);

// FUNÇÕES:
int Arranjo(int n, int p)
{
    int index = 1, nFatorial = 1, n_pFatorial = 1;
    int diferencaN_P = (n - p);
    // Calculo de: n!
    while (n != 0)
    {
        nFatorial *= n;
        n--;
    }

    // Calculo de: (n-p)!
    while (diferencaN_P != 0)
    {
        n_pFatorial *= diferencaN_P;
        diferencaN_P--;
    }
    return nFatorial / n_pFatorial;
}

int Combinacao(int n, int p)
{
    int arranjo;
    int pFatorial = 1;

    arranjo = Arranjo(n, p);

    while (p != 0)
    {
        pFatorial *= p;
        p--;
    }

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