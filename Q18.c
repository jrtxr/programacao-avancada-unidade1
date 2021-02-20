#include <stdio.h>
#include <stdlib.h> // para malloc e free

/*
18. Crie uma função capaz de realizar multiplicação matricial da forma C=A B. A função deve
receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A
e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas
de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar
sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A
função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal
*/

void multiplica_matrizes(int **a,int **b,int **c,int nla,int nca, int ncb)
{
    int aux; // variável auxiliar
    for(int i=0;i<nla;i++)
    {
        for(int j=0;j<ncb;j++) 
        {
            aux = 0;
            // laço responsável pelo produto de cada elemento da linha pelo
            // respectivo elemento da coluna realizando as respectivas somas
            for(int x=0;x<nca;x++) // laço responsavel pelo produto de cada elemento da linha por coluna 
            {
                aux +=  a[i][x] * b[x][j];
            }
            c[i][j] = aux; // guardo na matriz c o resultado da operação no laço anterior
            aux = 0; // zero para reutilizar a variável
        }
    }
}

int main()
{
    int **a,**b,**c;
    int i,j;
    int nla = 3, nca = 4, ncb = 2, nlb = 4;
    // ====== aloca a matriz a e seu veto auxiliar =======//
    a = (int**)malloc(nla*sizeof(int*));
    a[0] = (int*)malloc(nla*nca*sizeof(int));
    // ====== ajusta o endereço vetor auxiliar ====== //
    for(i=1;i<nla;i++){
        a[i]=a[i-1] + nca;
    }
    b = (int**)malloc(nlb*sizeof(int*));
    b[0] = (int*)malloc(nlb*ncb*sizeof(int));
    for(i=1;i<nlb;i++){
        b[i]=b[i-1] + ncb;
    }
    c = (int**)malloc(nla*sizeof(int*));
    c[0] = (int*)malloc(nla*ncb*sizeof(int));
    for(i=1;i<nla;i++){
        c[i]=c[i-1] + ncb;
    }
    printf("Matriz a eh:\n");
    // ===== matriz a ===== //
    a[0][0]=3; a[0][1]=4;
    a[0][2]=1; a[0][3]=2;
    
    a[1][0]=5; a[1][1]=6;
    a[1][2]=1; a[1][3]=6;
    
    a[2][0]=7; a[2][1]=8;
    a[2][2]=3; a[2][3]=3;
    for(i=0;i<nla;i++){
        for(j=0;j<nca;j++){
            printf("%2d, ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matriz b eh:\n");
    // ====== matriz b ======//
    b[0][0]=9; b[0][1]=3;
    b[1][0]=5; b[1][1]=7;
    b[2][0]=7; b[2][1]=8;
    b[3][0]=3; b[3][1]=6;
    for(i=0;i<nlb;i++){
        for(j=0;j<ncb;j++){
            printf("%2d, ",b[i][j]);
        }
        printf("\n");
    }
    // ===== chamada da função para realização da operação ===== //
    multiplica_matrizes(a,b,c,nla,nca,ncb);
    printf("Matriz C=AB eh: \n");
    for(i=0;i<nla;i++){
        for(j=0;j<ncb;j++){
            printf("%2d, ",c[i][j]);
        }
        printf("\n");
    }
    // ====== libera a memória ===== //
    free(a[0]);
    free(a);
    free(b[0]);
    free(b);
    free(c[0]);
    free(c);
    return 0;
}
