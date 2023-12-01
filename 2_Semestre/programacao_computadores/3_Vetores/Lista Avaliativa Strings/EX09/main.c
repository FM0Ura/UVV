/*
    Questão:
    9) Escrever um programa em C que leia um nome completo (com nomes e sobrenomes) e exiba na tela uma string com as iniciais de cada palavra com um ponto entre elas. Não exibir as preposições “da”, “de”, “di”, “do”. Exemplo (Nome completo): Fulano Beltrano Cicrano de Tal – Abreviado: F.B.C.T.
    FEITO!
*/

#include <stdio.h>  // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void)
{
    char nome[TMNH];
    int index;

    printf("Insira um Nome Completo: ");
    scanf("\n%[^\n]", nome);

    for (index = 0; index < strlen(nome); index++)
    {
        if (index == 0)
        {
            printf("%c.", nome[index]);
        }
        if (nome[index] == ' ' && nome[index + 1] != 'd')
        {
            printf("%c.", nome[index + 1]);
        }
    }
    printf("\n");

    return 0;
}