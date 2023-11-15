/*

14) Crie uma função e seu protótipo que calcule a área e volume de uma esfera.
Na main, use a função em 50 esferas e exiba a área e volume para valores de raio
(R ∈ R+) informada pelo usuário. Sendo:

    Area = 4 ∗ π ∗ R²

    Volume = 4/3 ∗ π ∗ R³
    FEITO!
*/

#include <math.h>  // Importando biblioteca Matemátia
#include <stdio.h> // Biblioteca I/O

#define PI 3.14159265359 // CONSTANTE PI

// PROTÓTIPOS:

float calculos_esfera(float r, float *Area, float *Volume);

// FUNÇÕES:

float calculos_esfera(float r, float *Area, float *Volume)
{
    // AREA:
    *Area = 4 * PI * pow(r, 2);

    // VOLUME:
    *Volume = (4 / 3) * PI * pow(r, 3);
}

int main(void)
{
    float Area, Volume, r;
    int index = 0;
    do
    {
        printf("Para o calculo da ÁREA e do VOLUME de uma esfera insira o RAIO "
               "dela (até o máximo de 50): ");
        scanf("%f", &r);
        calculos_esfera(r, &Area, &Volume);
        printf("\n\n %iª Esfera:\n", index + 1);
        printf("\tÁREA: %.2f\n", Area);
        printf("\tVOLUME: %.2f\n\n", Volume);
        index++;
    } while (index != 50);
    return 0;
}