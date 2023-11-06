/* 
    Questão:
    11) Escrever um programa em C que leia uma mensagem e exiba a freqüência (número de ocorrência) de
    cada caractere da mensagem. Exemplo de saída: "UVV - CIENCIA DA COMPUTACAO" ('U': 2,
    'V': 2, ' ': 4, '-': 1, 'C': 4, 'I': 2, 'E': 1, 'N': 1, 'A': 4, 'D': 1, 'O': 2, 'M': 1, 'P': 1, 'U': 1, 'T': 1).
*/

#include <stdio.h> // Biblioteca In/Out
#include <string.h> // Biblioteca String

#define TMNH 1000

int main(void){
    char mensagem[TMNH], copia[TMNH];
    
    printf("Digite sua mensagem: "); scanf("\n[^\n]", mensagem);
    
    strcpy(copia,mensagem);

    return 0;
}