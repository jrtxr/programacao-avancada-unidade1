#include<stdio.h>
#include<stdlib.h>

/*
14. Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
código, explicando o que faz cada uma das linhas.
*/

int Compare(const void *a,const void *b) //função que compara dois valores retornando um inteiro
{
    return *(int*)a-*(int*)b;  //essa funcao faz parte da chamada da funçao qsort da stdlib
}

int main(){

    int tam, i, (*compara)(); //Iniciando as variaveis
    compara = Compare;  //fazendo o ponteiro para função compara apontar para a função Compare

    printf("Informe o tamanho do array: ");
    scanf("%d",&tam);  //Recebendo o tamanho do vetor

    float *vetor = (float*) malloc(tam*sizeof(float)); //alocando espaço na memoria

    if(vetor == NULL){// verificando se houve algum erro na alocação, caso houver, o programa é encerrado
        printf("Houve um erro ao alocar memoria");
        return 1;
    }

    for(i=0;i<tam;i++){//preenchimento do vetor
        scanf("%f",&vetor[i]);
    }

    qsort(vetor, tam, sizeof(int), compara); //chamada da função qsort usando um ponteiro para a funçao de comparação

    for(i=0;i<tam;i++){
        printf("%f \n",*(vetor+i));//imprime os elementos do array ordenado
    }

    free(vetor);//liberando a memoria alocada

    return 0;
}