#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,R1,R2,D;
    scanf("%f%f%f",&A,&B,&C);

    D = (pow(B,2)-(4*A*C));

    if(D!=0&& D > 0&& A!=0)
    {
        R1 = (-B+sqrt(D))/(2*A);
        R2 = (-B-sqrt(D))/(2*A);
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    else
        printf("Impossivel calcular\n");

    return 0;
}

