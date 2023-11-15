/*
    Questão:
    1) Escrever um programa em C que leia uma string e exiba a string original e ao contrário na tela.
    FEITO
*/

#include <stdio.h>  // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 100

int main(void)
{
    char palavra[TMNH], auxiliar;
    int comprimento, index, indexCopia;
    printf("Digite uma palavra e veja como ela é escrita ao contrário!\n");

    printf("Insira a palavra: ");
    scanf("\n%[^\n]", palavra); // INPUT

    printf("\n\tPALAVRA ORIGINAL: %s", palavra);

    // INVERTENDO A STRING!
    comprimento = strlen(palavra);
    for (index = 0, indexCopia = comprimento - 1; index < indexCopia; index++, indexCopia--)
    {
        char auxiliar = palavra[index];
        palavra[index] = palavra[indexCopia];
        palavra[indexCopia] = auxiliar;
    }

    printf("\n\tPALAVRA REVERSA: %s\n\n", palavra);

    return 0;
}