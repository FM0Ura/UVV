// Adicionar em https://docs.google.com/document/d/1e70Rc_R4aX2GdedeYdmMmUWMrPORz0TYUH1obqkX16U/edit

/*
    10) Crie uma função para uma "mini" calculadora (somente de inteiros), ou seja, passe como argumento:

        ➢ Dois (2) números inteiros: Número1 e Número2 e
        ➢ Um (1) Operador: Soma ( + ) ou Subtração ( ̶) ou Multiplicação ( * ) ou Divisão ( / ) ou MOD ( % )

    Retorne desta função a operação matemática solicitada pelo usuário. Na main, use a função em 100 operações matemáticas com valores de Número1, Número2 e Operador lidos do usuário.
        FEITO!
*/

#include <stdio.h> // Biblioteca I/O

// PROTÓTIPO:
int calculadora(int Numero1, int Numero2, char operador);

// FUNÇÃO:
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

// MAIN
int main()
{
    int Numero1, Numero2, index;
    char operador;
    int resultado;

    for (index = 0; index < 100; index++)
    {
        printf("Digite o primeiro número: ");
        scanf("%i", &Numero1);

        // LOOP PARA DEFINIR O OPERADOR
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
