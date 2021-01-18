#include<stdio.h>
int main()
{
    int n,store=0,i;
    int notes[7]={100,50,20,10,5,2,1};

    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0;i<7;i++)
    {
        store = n /notes[i];
        printf("%d nota(s) de R$ %d,00\n",store,notes[i]);
        n = n%notes[i];
    }

    return 0;
}
