#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 7. Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas? Justifique.

    int mat[4] = {1,2,3,4,5}, *p, x;

    printf("%d \n", mat + 1 );

    /*
        p = mat + 1; EXPRESSÃO VALIDA: p recebe o endereço do segundo elemento do array
        p = mat++; EXPRESSÃO INVALIDA: O operador ++ é utilizado em valores e mat é um array
        p = ++mat; EXPRESSÃO INVALIDA: O operador ++ é utilizado em valores e mat é um array
        x = (*mat)++; EXPRESSÃO VALIDA: x recebe a soma o valor do primeiro elemento do array + 1

    */
    return 0;
}
