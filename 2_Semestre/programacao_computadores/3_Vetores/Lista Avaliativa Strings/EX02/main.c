/*
    Questão:
    2) Escrever um programa em C que leia uma mensagem e conte a quantidade de caracteres brancos.

*/

#include <stdio.h>  // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void)
{
    char mensagem[TMNH];
    int espaco = 0;
    printf("Entre com uma palavra e saiba quantos espaços em branco há nela: ");
    scanf("\n%[^\n]", mensagem);
    for (int i = 0; i < strlen(mensagem); i++)
    {
        if (mensagem[i] == ' ')
        {
            espaco++;
        }
    }
    printf("\n\tA quantidade de espaços na palavra é: %i\n\n", espaco);

    return 0;
}