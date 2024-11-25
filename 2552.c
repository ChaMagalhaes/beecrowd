#include <stdio.h>
/*
A entrada contém vários casos de teste. A primeira linha de cada caso contém os
inteiros N e M (1 ≤ N, M ≤ 100). As próximas N linhas contém M inteiros cada,
separados por espaços, descrevendo os pães de queijo no tabuleiro. O j-ésimo
inteiro da i-ésima linha é 1 se existe um pão de queijo na linha i e coluna j
do tabuleiro, ou 0 caso contrário.
A entrada termina com fim-de-arquivo (EOF).
*/

int main()
{
    int L, C;

    while(scanf("%d %d", &L, &C) != EOF){
        int matriz[L][C];

        //colocar os dados
        for(int i = 0; i < L; i++){
            for(int j = 0; j < C; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        //imprimir valores
        for(int i = 0; i < L; i++){
            for(int j = 0; j < C; j++){
                int cont = 0;
                if(matriz[i][j] == 0){
                    if(i > 0 && matriz[i - 1][j] == 1) cont++;
                    if(i < L - 1 && matriz[i + 1][j] == 1) cont++;
                    if(j > 0 && matriz[i][j - 1] == 1) cont++;
                    if(j < C - 1 && matriz[i][j + 1] == 1) cont++;
                    printf("%d", cont);
                }else{
                    printf("9");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
