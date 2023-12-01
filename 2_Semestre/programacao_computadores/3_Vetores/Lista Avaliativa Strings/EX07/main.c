/*
    Questão:
    7) Escrever um programa que leia várias mensagens (uma por uma) e exiba cada mensagem com um
    espaço em branco entre todos os caracteres. Pare o programa quando for digitada a palavra “FIM”.
    FEITO!
*/

#include <stdio.h>  // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void)
{
    char mensagem[TMNH], auxiliar1[2], auxiliar2[2], backupMensagem[TMNH], mensagemFormatada[TMNH * 2];
    int index = 0, tamanho;

    auxiliar1 == '\0';
    auxiliar2 == '\0';
    backupMensagem == '\0';

    do
    {
        printf("\nEntre com uma mensagem: ");
        scanf("\n%[^\n]", mensagem);

        if (!strcmp(mensagem, "FIM") || !strcmp(mensagem, "fim"))
        {
            printf("Saindo do Programa!");
        }
        else
        {
            for (index = 0; index < strlen(mensagem); index++)
            {
                printf("\t%c ", mensagem[index]);
            }
        }

    } while (strcmp(mensagem, "FIM") && strcmp(mensagem, "fim"));

    return 0;
}