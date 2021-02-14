/*
O uso de ponteiros para funções em C serve principalmente para definir, em tempo de execução,
qual função será executada, sem a necessidade de escrever o nome da função,
de forma explícita naquele ponto do código.

Ponteiros para funções podem ser passados como argumentos para outras funções,
e a função apontada pode ser invocada a partir de seu ponteiro.
*/
#include <stdio.h>


int Print()
{
    printf("Hello word\n");
}

int VerSoma(int x, float z)
{
    printf("%.2f\n", x + z);
}

int main( int argc, char const *argv[])
{
    void (*PtrParaFuncSemParametros) ();
    int (*PtrParaFuncComParametros)(int, float);

    PtrParaFuncSemParametros = Print; // define qual para função o ponteiro aponta
    (*PtrParaFuncSemParametros) (); // realiza a chamada da função através do ponteiro

    PtrParaFuncComParametros = VerSoma; // define qual para função o ponteiro aponta
    (*PtrParaFuncComParametros) (3,2.45); // realiza a chamada da função através do ponteiro

}