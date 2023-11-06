#include <stdio.h>

// Protótipos:
int FAT(int N);
int ARRANJO(int N, int K);
int COMBINACAO(int N, int K);

// Funções:
int FAT(int N){
    int index, fatorial = 1;
    if (N == 0|| N == 1)
    return 1;

    else{
        for(index = 2; index <= N; index++)
            fatorial = fatorial * index;
        return fatorial;
    }
    
}

int ARRANJO(int N, int K){
    int arranjo;
    arranjo = FAT(N)/FAT(N-K);
    return arranjo;
}

int COMBINACAO(int N, int K){
    return ARRANJO(N, K)/FAT(K);
}

// INTERFACE: Ler / Tratar / Calcular / Reusar / Exibir
int main(void){
    int N,K,F,A,C;
    int opcao;
    do{
        printf("MENU: \n");
        printf("1: CALCULAR\n");
        printf("0: SAIR\n");
        printf("Sua opção: ");
        scanf("%i", &opcao);
        if (opcao == 0)
            printf("FIM DO PROGRAMA");
        else if (opcao != 1)
            printf("[ERROR]Opção Inválida");
        else{
            printf("VALOR DE N (N >= 0): "); scanf("%i", &N);
            printf("VALOR DE K (K >= 0): "); scanf("%i", &K);

            // TRATAMENTO DE ERRO
            if(N < 0 || K < 0 || N < K) printf("[ERROR] Escolha novamente");
            else{
                // REUSO:
                F = FAT(N);
                printf("FATORIAL DE %i: %i", N, F);
                F = FAT(K);
                printf("FATORIAL DE %i: %i", K, F);
                A = ARRANJO(N, K);
                printf("ARRANJO DE %i e %i: %i", N, K, A);

            }
        }
    } while(opcao != 0);
    printf("%i", FAT(10));
    return 0;
}