#include<stdio.h>
int main()
{
    int str,end,result;
    scanf("%d%d",&str,&end);


    if(str==end)printf("O JOGO DUROU 24 HORA(S)\n");
    else if(str>end)
    {
        end = end+24;
        result = end - str;
        printf("O JOGO DUROU %d HORA(S)\n",result);

    }
    else if(str<end)
    {
        result = end - str;
        printf("O JOGO DUROU %d HORA(S)\n",result);
    }

    return 0;
}
