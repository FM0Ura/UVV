#include <stdio.h>
#include <string.h>

#define TMNH 1000

int main(void)
{
    char mensagem[TMNH];
    int index = 0, index2 = 0, count = 0;

    printf("Digite sua mensagem: ");
    scanf("\n%[^\n]", mensagem);

    while (mensagem[index] != '\0')
    {
        count = 1; // Inicia a contagem

        // Verifica se o caractere já foi encontrado
        if (mensagem[index] != 0)
        {
            for (index2 = index + 1; mensagem[index2] != '\0'; index2++)
            {
                if (mensagem[index] == mensagem[index2] || (mensagem[index] == ' ' && mensagem[index2] == ' '))
                {
                    count++;
                    mensagem[index2] = 0; // Marca como encontrado
                }
            }
            printf("'%c': %i, ", mensagem[index], count);
        }

        index++;
    }

    return 0;
}
