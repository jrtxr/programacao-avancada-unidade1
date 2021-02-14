#include <stdio.h>

int main(int argc, char const *argv[])
{
    //4. Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

/* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    // A saída será 20
    printf("%d \n", valor);
    // correspondeu a expectativa de resposta

/* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    // A saída será 29
    printf("%.1f \n", temp);

/* (c) */
    p3 = &nome[0];
    aux = *p3;
    // A saída será p 
    printf("%c \n", aux);

/* (d) */
    p3 = &nome[4];
    aux = *p3;
    // A saída será e 
    printf("%c \n", aux);

/* (f) */
    p3 = p3 + 4;
    //levando em consideraçõa que a variael p3 já foi utilizado e guarda o valor e + 4 ela recebera o ultimo valor do array "ponteiros", então a saída será "s"
    printf("%c \n", *p3);

/* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  // a saída será o valor do primeiro elemento do array: 31
  printf("%d \n", idade);

/* (i) */
    p5 = p4 + 1; // passou para o endereço seguinte
    idade = *p5;
    // a saída será 45
    printf("%d \n", idade);


/* (j) */
    p4 = p5 +1; // passou para o endereço seguinte
    idade = *p4;
    // a saída será 27
    printf("%d \n", idade);


/* (l) */
    p4 = p4 - 2; // voltou dois endereços
    idade = *p4;
    // a saída será 31
    printf("%d \n", idade);

/* (m) */
    p5 = &vetor[2] - 1;
    // a saída será 45
    printf("%d \n", *p5);

/* (n) */
    p5++;
    // a saída será 27
    printf("%d \n", *p5);

//------------------ TODOS CORRESPONDERAM COM A EXPECTATIVA DE RESPOSTA ------------------- //

    return 0;
}
