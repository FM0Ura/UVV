/*
    Questão:
    3) Escrever um programa que leia 100 palavras (uma por uma) e inverta somente as N primeiras letras. Onde o valor de N é inteiro positivo: 2 <= N <= Tamanho da Palavra escolhido pelo usuário.

*/

#include <stdio.h>  // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void)
{
    char mensagem[TMNH], copiaMensagem[TMNH], letra[TMNH];
    int qtd = 0, n, index = 0, tamanho;

    while (qtd < 100)
    {
        copiaMensagem == '\0'; // LIMPANDO VARIÁVEL DA COPIA

        printf("Insira uma mensagem: ");
        scanf("\n%[^\n]", mensagem); // ENTRANDO COM A MENSAGEM

        tamanho = strlen(mensagem);
        do
        {
            printf("\n\tInsira a quantidade de letras que você pretende inverter: ");
            scanf("%i", &n);

            if (n <= 2 || n >= tamanho)
            {
                printf("\n\t[ERROR] Quantidade Inválida!\nDigite novamente!\n");
            }

        } while (n <= 2 || n >= tamanho);

        strcpy(copiaMensagem, mensagem);

        // ADICIONANDO CARACTERES A UM AUXILIAR
        for (index = 0; index < n; index++)
        {
            letra[index] = mensagem[index];
        }

        strcat(copiaMensagem, letra); // ADICIONANDO AUXILIAR NO FINAL DA MENSAGEM!

        printf("\n\tPalavra Invertida: %s\n", copiaMensagem);
    }

    return 0;
}