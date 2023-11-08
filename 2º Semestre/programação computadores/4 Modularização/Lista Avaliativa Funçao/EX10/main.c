#include <stdio.h>

int calculadora(int Numero1, int Numero2, char operador)
{
    int resultado;

    if (operador == '+')
    {
        resultado = Numero1 + Numero2;
    }
    else if (operador == '-')
    {
        resultado = Numero1 - Numero2;
    }
    else if (operador == '*')
    {
        resultado = Numero1 * Numero2;
    }
    else if (operador == '/')
    {
        if (Numero2 != 0)
        {
            resultado = Numero1 / Numero2;
        }
        else
        {
            printf("Erro: Divisão por zero!\n");
            resultado = 0;
        }
    }
    else if (operador == '%')
    {
        if (Numero2 != 0)
        {
            resultado = Numero1 % Numero2;
        }
        else
        {
            printf("Erro: Divisão por zero!\n");
            resultado = 0;
        }
    }
    else
    {
        printf("Operador inválido! Tente novamente.\n");
        resultado = 0;
    }

    return resultado;
}

int main()
{
    int Numero1, Numero2, index;
    char operador;
    int resultado;

    for (index = 0; index < 100; index++)
    {
        printf("Digite o primeiro número: ");
        scanf("%i", &Numero1);

        int operadorValido = 0;
        do
        {
            printf("Digite o operador ( +, -, *, /, %% ): ");
            scanf(" %c", &operador);
            if (operador == '+' || operador == '-' || operador == '*' || operador == '/' || operador == '%')
            {
                operadorValido = 1;
            }
            else
            {
                printf("Operador inválido! Tente novamente.\n");
            }
        } while (!operadorValido);

        printf("Digite o segundo número: ");
        scanf("%i", &Numero2);

        resultado = calculadora(Numero1, Numero2, operador);

        printf("Resultado: %i\n", resultado);
    }

    return 0;
}
