#include<stdio.h>
int main()
{
    int i,store=0,n;
    double N;
    int notes[12]={10000,5000,2000,1000,500,200,100,50,25,10,5,1};
    double tk[12]={100,50,20,10,5,2,1,0.50,0.25,0.10,0.05,0.01};

    scanf("%lf",&N);
    n = N*100;
    for(i=0;i<12;i++)
    {
        if(i==0)printf("NOTAS:\n");
        store = n /notes[i];
        n = n%notes[i];
        if(i<6)
        {
            printf("%d nota(s) de R$ %.2lf\n",store,tk[i]);
        }
        if(i==5)printf("MOEDAS:\n");
        if(i>5)
        {
            printf("%d moeda(s) de R$ %.2lf\n",store,tk[i]);
        }

    }

    return 0;
}
