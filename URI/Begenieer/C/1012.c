#include<stdio.h>
int main()
{
    float pi=3.14159;
    double A,B,C,Tr,Ci,Tra,Qu,Re;

    scanf("%lf%lf%lf",&A,&B,&C);

    Tr = 0.5*A*C;
    Ci =pi*(C*C);
    Tra = 0.5*(A+B)*C;
    Qu = B*B;
    Re = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",Tr,Ci,Tra,Qu,Re);
    return 0;

}
