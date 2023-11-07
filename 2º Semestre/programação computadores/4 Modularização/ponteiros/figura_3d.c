/*
MODULARAIZAÇÃO: RETURN + PONTEIROS
*/

#include <stdio.h> // Biblioteca I/O
#include <math.h>  // BIblioteca Matemática

// PROTÓTIPOS:
void CUBO1(float L, float *Area, float *Volume); // return: nada(void)
float CUBO2(float L, float *Volume);             // return: float(area)
float CUBO3(float L, float *Area);               // return: float(volume)

// FUNÇÕES:

// Nessa função é armazenada diretamente na memória os valores, podendo ser acessado na função main diretamente, sem a necessidade de retornar apenas um único valor.
void CUBO1(float L, float *Area, float *Volume){
    *Area = 6 * pow(L , 2);  // PONTEIRO area
    *Volume = pow(L, 3);     // PONTEIRO volume
}

// Nessa função a variável Area é retornada pela função, porém Volume é alocado diretamente na memória, permitindo que seja possível "retornar" mais de uma resposta em uma única função
float CUBO2(float L, float *Volume){
    *Volume = pow(L, 3);  // PONTEIRO volume
    float Area;
    Area = 6 * pow(L, 2); // VARIÁVEL area
    return Area;
}

// Nessa função Volume é retornada pela função e Area é alocada diretamente na memória. 
float CUBO3(float L, float *Area){
    float Volume;
    *Area = 6 * pow(L, 2); // PONTEIRO area
    Volume = pow(L, 3);    // VARIÁVEL volume
    return Volume;
}

// PRINCIPAL: Leitura de Dados / Tratamento de Dados / Reusar funções / Calculos / Exibir objetivo do Algoritmo
int main(void) {
    float L, Area, Volume;
    int contador = 0;

    while (contador < 100)
    {
        // LEITURA:
        printf("Valor do Lado (L > 0): "); scanf("%f", &L);
        // TRATAR DADOS:
        if (L <= 0)
            printf("Escolha novamente!");
        else{
            printf("DADOS DO CUBO %i: \n", contador + 1);
            
            // Usando CUBO1
            printf("Usando a função: CUBO1\n");
            CUBO1(L, &Area, &Volume);
            CUBO2(L, &Volume);
            CUBO3(L, &Area);
            printf("\tArea: %.1f\n", Area);
            printf("\tVolume: %.1f\n\n", Volume);

            // Usando CUBO2
            printf("Usando a função: CUBO2\n");
            Area = CUBO2(L, &Volume);
            printf("\tArea: %.1f\n", Area);
            printf("\tVolume: %.1f\n\n", Volume);
            
            // Usando CUBO3
            printf("Usando a função: CUBO3\n");
            Volume = CUBO3(L, &Area);
            printf("\tArea: %.1f\n", Area);
            printf("\tVolume: %.1f\n\n", Volume);
        }
        
        contador++;
    }
    

    return 0;
}