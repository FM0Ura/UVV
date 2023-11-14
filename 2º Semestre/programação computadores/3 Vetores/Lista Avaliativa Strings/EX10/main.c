// Adicionar em https://docs.google.com/document/d/1e70Rc_R4aX2GdedeYdmMmUWMrPORz0TYUH1obqkX16U/edit

/*
    Questão:
    10) Escrever um programa em C que leia várias palavras (uma por uma) e exiba a palavra e seu tamanho.
    Pare o programa quando for digitada a palavra “OK” ou "ok".
    FEITO!
*/

#include <stdio.h>  // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void)
{
    char palavra[TMNH];
    int historico = 0;
    do
    {
        printf("Digite uma palavra: ");
        scanf("\n%[^\n]", palavra);

        if (!(strcmp(palavra, "OK")) || !(strcmp(palavra, "ok")))
        {
            printf("\nSAINDO DO PROGRAMA\n");
        }
        else
        {
            printf("\tPALAVRA: %s\n\tTAMANHO: %i\n\n", palavra, strlen(palavra));
            historico++;
        }

    } while (strcmp(palavra, "OK") && strcmp(palavra, "ok"));
    printf("\nNo total foram feitas a leitura de %i palavras!\n\n", historico);
    return 0;
}