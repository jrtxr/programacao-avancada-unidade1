#include<stdlib.h>
#include<stdio.h>

int main(){
    char arrayChar[4];
    int arrayInt[4];
    float arrayFloat[4];
    double arrayDouble[4];

    for(int i=0;i<4;i++){
        printf("%d ",(arrayChar+i));
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("%d ",(arrayInt+i));
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("%d ",(arrayFloat+i));
        
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("%d ",(arrayDouble+i));
    }
    /*
    OS ENDEREÇOS OBTIDOS FORAM:
        Para char: 6422284 6422285 6422286 6422287 
        Para int: 6422268 6422272 6422276 6422280
        Para float: 6422252 6422256 6422260 6422264
        Para:  double: 6422216 6422224 6422232 6422240

    PERCEBEU-SE A DIFERENÇA NOS ENDEREÇOS DO TIPO INT, POIS NÃO É ACRESENTADO 2 BYTES A CADA ELEMENTO
    COMO NA QUESTÃO ANTERIOR, MAS SIM 4 BYTES, POIS É O TAMANHO MAXIMO QUE UM VALOR DO TIPO INTEIRO PODE ASSUMIR.
    */

  return(0);
}