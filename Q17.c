#include <stdio.h>
/*
17. Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de
outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,
se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3,
5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4
argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.
*/

void soma_de_vetores (int *array1,int *array2,int *arraySoma,int t)
{
    for (int i=0;i<t;i++)//Armazenando a soma dos elementos dos dois vetores
    {
        arraySoma[i] = array1[i] + array2[i];
    }

    printf("\n vetor da soma = ");
    for(int j=0;j<t;j++)// print dos elementos somados
    {
        printf("%i, ",arraySoma[j]);
    }

    printf("\n");
}

int main()
{
    int tamanho;

    printf("Informe o tamanho dos vetores: ");
    scanf("%i",&tamanho);

    int array1[tamanho];
    int array2[tamanho];
    int arraySoma[tamanho];
    
    printf("Informe os elementos dos arrays: \n");

    for(int i=0;i<tamanho;i++)
    {
        printf("elemento %d do array 1 = ",i);
        scanf("%i",&array1[i]);
        printf("elemento %d do array 2 = ",i);
        scanf("%i",&array2[i]);
    }

    printf(" array1 = ");
    for(int j1=0;j1<tamanho;j1++)
    {
        printf("%i, ",array1[j1]);
    }
    printf("\n");
    printf(" array2 = ");
    for(int j2=0;j2<tamanho;j2++)
    {
        printf("%i, ",array2[j2]);
    }
    
    printf("\n");
    soma_de_vetores(&array1,&array2,&arraySoma,tamanho);

    return 0;
}