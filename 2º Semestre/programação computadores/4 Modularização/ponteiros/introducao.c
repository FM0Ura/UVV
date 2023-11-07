#include <stdio.h> // Biblioteca I/O

int main(void) {
    int X = 10, Y = 4; // Cria espaço na memória para armazenar o valor dessas variáveis
    int *P1, *P2;
    printf("VALOR DE X (ACESSO DIRETO): %i\n", X);
    printf("ENDEREÇO DE X (ACESSO DIRETO): %p\n\n", &X); // Acessa o endereço de memória onde está armazenado o valor da variável

    P1 = &X;

    printf("VALOR DE X (ACESSO INDIRETO): %i\n", *P1); // Acessa o valor do endereço de memória
    printf("ENDEREÇO DE X (ACESSO INDIRETO): %p\n\n", P1); // Acessa o endereço de memória'


    P2 = P1;

    printf("VALOR DE X (ACESSO INDIRETO): %i\n", *P2); // Acessa o valor do endereço de memória
    printf("ENDEREÇO DE X (ACESSO INDIRETO): %p\n\n", P2); // Acessa o endereço de memória'

    return 0;
}