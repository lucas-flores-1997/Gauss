void charV(int V[], int dim)
{
    int i;
    for(i=0; i<dim; i++)
    {
        scanf("%d",&V[i]);
    }
}



void charec(int V[],int dim)
{
    int i;
    printf("ingrese los coeficientes segun corresponda\n");
    for (i=dim; i>=0; i--)
    {
        printf("ingrese el coeficiente de grado %d\n",i);
        fflush(stdin);
        scanf("%d",&V[i]);
    }
}

void printV(int V[], int dim)
{
    int i;
    for(i=dim; i>=0; i--)
    {
        printf("[%d]", V[i]);
    }
    printf("\n");

}
void printVF(float V[], int dim)
{
    int i;
    for(i=dim; i>=0; i--)
    {
        printf("[%g]", V[i]);
    }
    printf("\n");

}

int countdiv(int j)
{
    int i, count=0, w;
    w=j;
    for(i=1; i<=w; i++)
    {
        if(j%i==0)
        {
            count++;
        }
    }
    return count;
}

void buscdiv(int V[],int coef)
{
    int i, e=0;
    for(i=1; i<=coef; i++)
    {
        if(coef%i == 0)
        {
            V[e]=i;
            e++;
        }
    }
}
void buscdivf(float V[],int coef)
{
    int i, e=0;
    for(i=1; i<=coef; i++)
    {
        if(coef%i == 0)
        {
            V[e]=(float)i;
            e++;
        }
    }
}


void posrai(float V[],int p,int in)
{
    int i,j,k=0,len2,len3;
    len2=countdiv(p);
    len3=countdiv(in);
    float divp[len2-1],divi[len3-1];
    buscdivf(divp, p);
    buscdivf(divi, in);
    printf("los divisores del coef principal son:");
    printVF(divp, len2-1);
    printf("los divisores del coef independiente son:");
    printVF(divi, len3-1);
    for (i=0; i<len3; i++)
    {
        for (j=0; j<len2; j++)
        {
            V[k]=divi[i]/divp[j];
            k++;
        }
    }
     for (i=0; i<len3; i++)
    {
        for (j=0; j<len2; j++)
        {
            V[k]=-(divi[i]/divp[j]);
            k++;
        }
    }
}

int contra(float V[],int Vp[],int a, int b){
int i,j,c=0;

printf("%d,%d \n",a,b);
float sum;
for (i=0;i<a;i++){
   for (j=0,sum=0;j<b;j++){
   sum+=(pow(V[i],j)*Vp[j]);
   }
   if(sum==0) c++;
}

return c;
}

