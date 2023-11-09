// Adicionar em https://docs.google.com/document/d/1e70Rc_R4aX2GdedeYdmMmUWMrPORz0TYUH1obqkX16U/edit

/*
16) Crie uma função e seu protótipo que receba como argumento um número inteiro qualquer representando os segundos de realização de um teste de laboratório e retorne as horas, minutos e segundos convertidos deste número.

Use a função (100 vezes) no programa principal e exiba a informação conforme a seguir:

Exemplo: Tempo: 10000 Segundos = 2 Hora(s) + 46 Minuto(s) + 40 Segundo(s).
*/

#include <stdio.h> // Biblioteca I/O

// PROTÓTIPO:

int conversor_segundo_hora(int segundo_parametro, int *segundo, int *hora, int *minuto);

// FUNÇÃO:

int conversor_segundo_hora(int segundo_parametro, int *segundo, int *hora, int *minuto)
{
    *segundo = segundo_parametro % 60;
    *minuto = (segundo_parametro / 60) % 60;
    *hora = (*minuto / 60) % 60;
}

int main(void)
{
    int segundo_parametro = 0, segundo = 0, minuto = 0, hora = 0;
    int index = 0;
    do
    {
        printf("\n\nDigite a quantidade de segundos do %iº teste: ", index + 1);
        scanf("%i", &segundo_parametro);

        printf("\nA conversão de %i segundos para HORA-MINUTO-SEGUNDO é: ", segundo);

        conversor_segundo_hora(segundo_parametro, &segundo, &hora, &minuto);

        printf("\n\t%i:%i:%i", hora, minuto, segundo);
        index++;
    } while (index != 100);

    return 0;
}