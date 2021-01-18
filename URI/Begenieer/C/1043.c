#include<stdio.h>
int main()
{
    float A,B,C,pera,area;
    scanf("%f%f%f",&A,&B,&C);
    if(A+B > C && B+C > A && A+C > B)
    {

        pera = A+B+C;
        printf("Perimetro = %.1f\n",pera);
    }
    else
    {
        area =((A+B)/2)*C;
        printf("Area = %.1f\n",area);
    }

}

