#include <stdio.h>
#include <stdlib.h>

/*
13. Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
realizar a tarefa.

*/

int main(void){
    int tam, aux;

    printf("Informe o tamanho do array: ");
    scanf("%d",&tam);

    float *p = (float*) malloc(tam*sizeof(float));

    if(p == NULL){
        printf("Houve um erro ao alocar memoria");
        return 1;
    }

    for(int j=0;j<tam;j++){
        scanf("%f",&p[j]);
    }

    for(int i=0; i<tam; i++){
        for (int j=i+1;j<tam;j++){
            if(p[i]>p[j]){
            aux =p[i];
            p[i]= p[j];
            p[j]=aux;
            }
        }
    }

    for(int j=0;j<tam;j++){
        if(j==tam-1){
        printf("%.2f ",p[j]);
        }
        else  {
            printf("%.2f, ",p[j]);
        }
    }

    free(p);

    return 0;
}

