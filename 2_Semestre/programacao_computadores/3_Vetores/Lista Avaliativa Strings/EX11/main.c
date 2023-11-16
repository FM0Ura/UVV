/*
11) Escrever um programa em C que leia uma mensagem e exiba a freqüência (número de ocorrência) de cada caractere da mensagem. Exemplo de saída: "UVV - CIENCIA DA COMPUTACAO" ('U': 2, 'V': 2,  '    ': 4, '-': 1, 'C': 4, 'I': 2, 'E': 1, 'N': 1, 'A': 4, 'D': 1, 'O': 2, 'M': 1, 'P': 1, 'U': 1, 'T': 1)
*/

#include <stdio.h>
#include <string.h>

#define TMNH 1000

int main(void)
{
    char mensagem[TMNH], auxiliar[TMNH];
    int index = 0, count = 0, i = 0, index2 = 0, index3 = 0;
    do
    {
        printf("Digite sua mensagem: ");
        scanf("\n%[^\n]", mensagem);

        for (i = 0; i < strlen(mensagem); i++)
        {
            auxiliar[i] = mensagem[i];
            count = 0;

            for (index2 = i; index2 < strlen(mensagem); index2++)
            {
                if (mensagem[index2] == auxiliar[i])
                    count++;
                for (index3 = index2 - 1; index3 >= 0; index3--)
                {
                    if ((mensagem[index3] == auxiliar[i] && index3 < i))
                    {
                        count--;
                        if (count < 0)
                        {
                            count = 0;
                        }
                    }
                }
            }
            if (count != 0)
            {
                printf("\n'%c': %i ", mensagem[index], count);
            }

            index++;
        }
    } while (strcmp(mensagem, "fim") && strcmp(mensagem, "FIM"));

    return 0;
}
