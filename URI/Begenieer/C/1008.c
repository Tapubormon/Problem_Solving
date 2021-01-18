#include<stdio.h>
int main()
{
    int number,worked_hour;
    float employs_rev,SALARY;
    scanf("%d%d%f",&number,&worked_hour,&employs_rev);
    SALARY = worked_hour*employs_rev;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",number,SALARY);
    return 0;
}

