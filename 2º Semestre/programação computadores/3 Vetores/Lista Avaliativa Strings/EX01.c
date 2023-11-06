/* 
    Questão:
    1) Escrever um programa em C que leia uma string e exiba a string original e ao contrário na tela.
    FEITO
*/

#include <stdio.h> // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 100

int main(void){
    char palavra[TMNH];

    printf("Digite uma palavra e veja como ela é escrita ao contrário!\n");
    
    printf("Insira a palavra: "); scanf("\n%[^\n]",palavra); // INPUT

    printf("\nPALAVRA ORIGINAL: %s", palavra);
    printf("\nPALAVRA REVERSA: %s", strrev(palavra));

    return 0;
}