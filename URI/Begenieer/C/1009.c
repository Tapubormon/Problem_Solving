#include<stdio.h>
int main()
{
    char name[100];
    double salary,total,Total;
    scanf("%s%lf%lf",&name,&salary,&total);
    Total = (salary+(total*0.15));
    printf("TOTAL = R$ %.2lf\n",Total);
    return 0;
}

