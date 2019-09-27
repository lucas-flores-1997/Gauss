#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "libre.h"

int countdiv(int j);
void charV(int V[], int dim);
void charec(int V[],int dim);
void printV(int V[], int dim);
void buscdiv(int V[],int coef);
int countdiv(int j);
void posrai(float V[],int p,int in);
void buscdivf(float V[],int coef);
int contra(float V[],int Vp[],int a,int b);

void main()
{
    int len1, len2, len3,len4,a;

    printf("Indicar el grado de la funcion");
    scanf("%d", &len1);

    int ecu[len1];



    charec(ecu, len1);
    printV(ecu,len1);

    len2=countdiv(ecu[len1]);
    len3=countdiv(ecu[0]);

    int divp[len2-1], divi[len3-1];

    buscdiv(divp, ecu[len1]);
    buscdiv(divi, ecu[0]);

    printf("los divisores del coef principal son:");
    printV(divp, len2-1);
    printf("los divisores del coef independiente son:");
    printV(divi, len3-1);

    printf("----------------------------------------------------------------------------------------------------\n");

    float posib[((len2)*(len3))*2];
    a= sizeof(posib);
    printf("----%d-----",a);

    posrai(posib,ecu[len1],ecu[0]);
    printVF(posib,((len2)*(len3))*2-1);

    printf("------------------------------------------------------------------------------------------------------\n");

    len4=contra(posib,ecu,(((len2)*(len3))*2-1),len1);
    printf("%d",len4);

}

