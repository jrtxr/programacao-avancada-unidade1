#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 3. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?
    int i=5, j=10, *p, *q;
     i = (*p)++;

    printf("%i\n", i);
/*
    p = i; p receberá o valor de i
    q = &j; q receberá o endereço de j
    p = &*&i; p receberá o endereço de i (endereço da desreferenciação)
    i = (*&)j; não tem sentido
    i = *&j; i receberá o valor de j
    i = *&*&j; i receberá o valor de j (desreferenciação duas vezes)
    q = *p; q receberá o valor de p
    i = (*p)++ + *q; operaçao com lixo de memoria (inadequado)

    atribuições ilegais:
    i = (*&)j;
    i = (*p)++ + *q (essa atpe irá compilar, mas não tem utilidade e ainda é inadequado)
*/
    return 0;
}
