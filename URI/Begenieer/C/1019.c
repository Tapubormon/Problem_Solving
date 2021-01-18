#include<stdio.h>
int main()
{
    int N,Hour,sec,min;
    scanf("%d",&N);
    Hour = N/3600;
    sec= (N%3600)/60;
    min = (N%3600)%60;
    printf("%d:%d:%d\n",Hour,sec,min);
    return 0;
}

