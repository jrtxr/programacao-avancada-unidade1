#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 5. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).

    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    /* O programa entrará em um laço e que radará por 5 vezes
    PRIMEIRA SAÍDA:
    i = 0
    vet[0] = 1.1
    */
    for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i);
    printf("vet[%d] = %.1f",i, vet[i]);
    printf("*(f + %d) = %.1f",i, *(f+i));
    printf("&vet[%d] = %X",i, &vet[i]);
    printf("(f + %d) = %X",i, f+i);

    return 0;
}
