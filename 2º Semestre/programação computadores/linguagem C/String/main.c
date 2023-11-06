/*

STRING x STRING:
Fazer um programa em que leia um texto (TEXTO) qualquer e
verifique no texto o número de ocorrências (Q) da substring "UVV" (PALAVRA).
Parar o programa quando a substring NÃO estiver no texto.

*/
#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void) {
  char TXT[TAM];
  int index, qtd, tamanho;
  do{
    printf("TEXTO: "); scanf("\n%[^\n]", TXT); // RECEBE UM TEXTO DO USUÁRIO
    tamanho = strlen(TXT);
    if(tamanho <= 2) printf("FIM DO PROGRAMA.\n");
    else{
      // LÓGICA DA QUESTÃO:
      qtd = 0; // RESETAR
      for(index = 0; index < tamanho - 3; index++){
        if(TXT[index]     == 'U' &&
           TXT[index + 1] == 'V' &&
           TXT[index + 2] == 'V') qtd++;
           if (TXT[index + 4] != 'U' && TXT[index + 5] == 'V' && TXT[index + 6] == 'V')qtd++;
           }
      printf("TEXTO: %s ocorre a SUBSTRING: UVV %i vezes.\n", TXT, qtd);
      printf("%i \n\n",(tamanho-3));
    }
  }while(tamanho >= 3 && qtd != 0);
  return 0;
}