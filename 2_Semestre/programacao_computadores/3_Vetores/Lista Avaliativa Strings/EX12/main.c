/*
    Questão:
    12) Escrever um programa que leia uma mensagem e exiba a mesma e outra mensagem alterada através
    da substituição da original por uma com a primeira letra da mensagem e suas ocorrências
    substituídas pelo caractere ꞌ-ꞌ: Exemplo: ABCADAEAFGAH – Exibe: -BC-D-E-FG-H
    FEITO!
*/

#include <stdio.h>  // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void)
{
    char mensagem[TMNH], copia[TMNH];
    int index = 0;
    printf("Digite sua mensagem: ");
    scanf("\n%[^\n]", mensagem);

    strcpy(copia, mensagem);

    for (index = 0; index <= strlen(mensagem); index++)
    {
        if (mensagem[index] == mensagem[0])
        {
            printf("-");
        }
        else
        {
            printf("%c", mensagem[index]);
        }
    }

    return 0;
}