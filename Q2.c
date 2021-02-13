#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 2. Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.

    int i=5, *p;
    p = &i;
    // p: endereço de i: 4094
    //*p+2: 7, pois é o valor de i + 2
    //**&p: 5, pois é o valor de i
    //3**p: 15, pois é o valor de i multiplicado por 3
    //**&p+4: 9, pois é o valor de p mais 4: 5+4 = 9
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    return 0;
}
