/*
18) Crie uma função + protótipo que receba como argumento um valor real do Tempo
T (Horas) e converta em: Horas + Minutos + Segundos.

Na main, use a função 50 vezes para valores de T lidos do usuário.

Exemplo: T (12.47 Horas) = 12 Hora(s) + 28 Minuto(s) + 12 Segundo(s). (Dica: Use
a Função: modf)
  FEITO!
*/

#include <stdio.h> // Biblioteca I/O
#include <math.h>  // Biblioteca Matemática

// PROTÓTIPO
void conversor_tempo_hora(float inserir_hora, int *hora, int *minuto, int *segundo);

// FUNÇÃO
void conversor_tempo_hora(float inserir_hora, int *hora, int *minuto, int *segundo)
{
  float parteFracionaria = 0;

  parteFracionaria = modff(inserir_hora, &inserir_hora); // inserir_hora recebe parte inteira

  *hora = inserir_hora;

  parteFracionaria = parteFracionaria * 60; // Fazendo regra de 3 para colocar no limite de 0 a 60

  *minuto = parteFracionaria;

  parteFracionaria = modff(parteFracionaria, &parteFracionaria);
  parteFracionaria = parteFracionaria * 60;

  *segundo = parteFracionaria;
}

int main(void)
{
  int index = 0, hora = 0, minuto = 0, segundo = 0;
  float hora_recebida;

  do
  {
    printf("Insira a hora (com números reais): ");
    scanf("%f", &hora_recebida);
    conversor_tempo_hora(hora_recebida, &hora, &minuto, &segundo);
    printf("\nFormato de Horário: HORA : MINUTO : SEGUNDO\n");
    printf("\n\t%i : %i : %i\n\n", hora, minuto, segundo);
  } while (index != 50);

  return 0;
}
