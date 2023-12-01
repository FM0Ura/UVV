/*
    Questão:
    8) Escrever um programa em C que leia uma mensagem e exiba na tela a quantidade de vezes que aparece a substring “UVV” na mensagem lida do usuário.
    FEITO!
*/

#include <stdio.h>  // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void)
{
    char mensagem[TMNH];
    int qtd = 0;

    printf("Insira uma mensagem: ");
    scanf("\n%[^\n]", mensagem);

    for (int i = 0; i < strlen(mensagem); i++)
    {
        if (mensagem[i] == 'U' || mensagem[i] == 'u')
        {
            if (mensagem[i + 1] == 'V' || mensagem[i + 1] == 'v')
            {
                if (mensagem[i + 2] == 'V' || mensagem[i + 2] == 'v')
                {
                    qtd++;
                }
            }
        }
    }

    printf("QUANTIDADE DA SUBSTRING 'UVV' NA STRING É: %i", qtd);

    return 0;
}