/* 
    Questão:
    10) Escrever um programa em C que leia várias palavras (uma por uma) e exiba a palavra e seu tamanho.
    Pare o programa quando for digitada a palavra “OK” ou "ok".
*/

#include <stdio.h> // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void){
    char palavra[TMNH];
    int historico = 0;
    do
    {
        printf("Digite uma palavra: "); scanf("\n%[^\n]", palavra); 

        if (!(strcmp(palavra, "OK")) || !(strcmp(palavra, "ok"))){
            printf("SAINDO DO PROGRAMA\n");
        }
        else{
            printf("\tPALAVRA: %s\n\tTAMANHO: %i\n", palavra, strlen(palavra));
            historico++;
        }
        
    } while (strcmp(palavra,"OK") && strcmp(palavra, "ok"));
    printf("\nNo total foram feitas a leitura de %i palavras!", historico);
    return 0;
}