// Adicionar em
// https://docs.google.com/document/d/1e70Rc_R4aX2GdedeYdmMmUWMrPORz0TYUH1obqkX16U/edit

/*
18) Crie uma função + protótipo que receba como argumento um valor real do Tempo
T (Horas) e converta em: Horas + Minutos + Segundos.

Na main, use a função 50 vezes para valores de T lidos do usuário.

Exemplo: T (12.47 Horas) = 12 Hora(s) + 28 Minuto(s) + 12 Segundo(s). (Dica: Use
a Função: modff)
CONFIRMAR SE FOI ESTÁ CORRETO!
*/

#include <stdio.h> // Biblioteca I/O
#include <math.h>  // Biblioteca Matemática

// PROTÓTIPO
void conversor_tempo_hora(float inserir_hora, float *hora, float *minuto, float *segundo);

// FUNÇÃO
void conversor_tempo_hora(float inserir_hora, float *hora, float *minuto, float *segundo) {
  float parteFracionaria = 0;
  parteFracionaria = modff(inserir_hora, hora);
  *minuto = ((parteFracionaria*3)/5)*100;
  *segundo = modff(*minuto, minuto);
  *segundo = *segundo*100;
}

int main(void) {
  int index = 0;
  float hora_recebida, hora = 0, minuto = 0.0, segundo = 0.0;

  do {
    printf("Insira a hora (com números reais): ");
    scanf("%f", &hora_recebida);
    conversor_tempo_hora(hora_recebida, &hora, &minuto, &segundo);
    printf("\nFormato de Horário: HORA : MINUTO : SEGUNDO\n");
    printf("\n\t%.0f : %.0f : %.0f\n\n", hora, minuto, segundo);
  } while (index != 50);

  return 0;
}

