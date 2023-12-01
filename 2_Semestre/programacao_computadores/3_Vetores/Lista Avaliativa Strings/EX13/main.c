/*
    Questão:
    13)Escrever um programa em C que leia várias mensagens (uma por uma) e exiba na tela a quantidade de vezes que aparece na mensagem lida uma outra palavra escolhida pelo usuário, a cada nova mensagem.

    Pare o programa quando for digitada a palavra “FIM” ou "fim".

*/

#include <stdio.h>  // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void)
{

    char mensagem[TMNH], mensagemComparada[TMNH];
    int check = 0;

    do
    {
        do
        {
            check = 1;
            printf("Insira uma mensagem: ");
            scanf("\n%[^\n]", mensagem);

            printf("Qual mensagem quer encontrar dentro da mensagem? ");
            scanf("\n%[^\n]", mensagemComparada);

            if (strlen(mensagem) < strlen(mensagemComparada))
            {
                printf("\t[ERROR] A mensagem de comparação de ser <= que a mensagem!\n");
                check = 0;
            }
        } while (check != 1);
    } while (strcmp(mensagem, "FIM") && strcmp(mensagem, "fim"));
    return 0;
}