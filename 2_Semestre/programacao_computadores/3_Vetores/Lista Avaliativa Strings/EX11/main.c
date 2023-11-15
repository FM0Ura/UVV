// Adicionar em https://docs.google.com/document/d/1e70Rc_R4aX2GdedeYdmMmUWMrPORz0TYUH1obqkX16U/edit

/*
11) Escrever um programa em C que leia uma mensagem e exiba a freqüência (número de ocorrência) de cada caractere da mensagem. Exemplo de saída: "UVV - CIENCIA DA COMPUTACAO" ('U': 2, 'V': 2,  '    ': 4, '-': 1, 'C': 4, 'I': 2, 'E': 1, 'N': 1, 'A': 4, 'D': 1, 'O': 2, 'M': 1, 'P': 1, 'U': 1, 'T': 1)
*/

#include <stdio.h>
#include <string.h>

#define TMNH 1000

int main(void)
{
    char mensagem[TMNH];
    int index = 0, count = 0, i = 0;

    printf("Digite sua mensagem: ");
    scanf("\n%[^\n]", mensagem);

    while (mensagem[index] != '\0')
    {
        count = 0;
        for (i = 0; i < strlen(mensagem); i++)
        {
            if (mensagem[i] == mensagem[index])
            {
                count++;
            }
        }
        printf(" '%c': %i ", mensagem[index], count);

        index++;
    }

    return 0;
}
