/* 
    Questão:
    4) Escrever um programa em C que leia 1000 mensagens e conte a quantidade de caractere ꞌUꞌ ou ꞌVꞌ.
*/

#include <stdio.h> // Biblioteca In/Out

#define TMNH 100

int main(void) {
    int repeticao = 0, index = 0, quantidade = 0;
    char palavra[TMNH];
    do
    {
        printf("Digite a %iº palavra: ", repeticao + 1); scanf("\n%[^\n]", palavra);
        for (index = 0 ;palavra[index] != '\0'; index++){
            if (palavra[index] == 'U' || palavra[index] == 'V'){
                quantidade++;
            } 
        }
        repeticao++;
    } while (repeticao != 2);
    printf("\tAo total houveram %i ocorrências de U e V.", quantidade);
    return 0;
}
