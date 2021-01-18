#include<stdio.h>
int main()
{
    int code1,code2,unit1,unit2;
    float amount1,amount2,total;

    scanf("%d%d%f",&code1,&unit1,&amount1);
    scanf("%d%d%f",&code1,&unit2,&amount2);
    total = (unit1*amount1)+(unit2*amount2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}

