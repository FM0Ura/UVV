/*
    Questão:
    6) Escrever um programa em C que leia uma string e identifique se esta é um palíndromo.
    Palíndromo é quando uma palavra pode ser lida da esquerda para direita e vice-versa permanecendo a mesma palavra: RADAR, ABA, ANILINA, dentre outras.
    FEITO!
*/

#include <stdio.h>  // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void)
{
    char mensagem[TMNH], copiaMensagem[TMNH], auxiliar;
    int inversa = 0, index, indexCopia;

    copiaMensagem[0] == '\0';

    printf("\nInsira uma palavra e verifique se é um palíndromo: ");
    scanf("\n%[^\n]", mensagem);

    strcpy(copiaMensagem, mensagem);

    // INVERTENDO A STRING!
    inversa = strlen(mensagem);
    for (index = 0, indexCopia = inversa - 1; index < indexCopia; index++, indexCopia--)
    {
        auxiliar = copiaMensagem[index];
        copiaMensagem[index] = copiaMensagem[indexCopia];
        copiaMensagem[indexCopia] = auxiliar;
    }
    if (!strcmp(mensagem, copiaMensagem))
    {
        printf("\n\tÉ um palíndromo!");
    }
    else
    {
        printf("\n\tNão é um palíndromo!");
    }

    return 0;
}