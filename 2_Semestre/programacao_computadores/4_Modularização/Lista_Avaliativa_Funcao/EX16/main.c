/*
16) Crie uma função e seu protótipo que receba como argumento um número inteiro qualquer representando os segundoss de realização de um teste de laboratório e retorne as horass, minutoss e segundoss convertidos deste número.

Use a função (100 vezes) no programa principal e exiba a informação conforme a seguir:

Exemplo: Tempo: 10000 segundoss = 2 horas(s) + 46 minutos(s) + 40 segundos(s).
FEITO!
*/

#include <stdio.h> // Biblioteca I/O

// PROTÓTIPO:

void conversorTempo(int tempo, int *segundos, int *horas, int *minutos);

// FUNÇÃO:

void conversorTempo(int tempo, int *segundos, int *horas, int *minutos)
{
    *segundos = tempo % 60;
    *minutos = (tempo / 60) % 60;
    *horas = ((tempo / 60) / 60) % 60;
}

int main(void)
{
    int tempo = 0, segundos = 0, minutos = 0, horas = 0;
    int index = 0;
    do
    {
        printf("\n\nDigite a quantidade de segundoss do %iº teste: ", index + 1);
        scanf("%i", &tempo);

        printf("\nA conversão de %i segundoss para horas-minutos-segundos é: ", segundos);

        conversorTempo(tempo, &segundos, &horas, &minutos);

        printf("\n\t%i:%i:%i", horas, minutos, segundos);
        index++;
    } while (index != 100);

    return 0;
}