#include<stdio.h>
int main()
{
    double x1,x2,y1,y2,distance,X,Y;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    X = (x2-x1)*(x2-x1);
    Y = (y2-y1)*(y2-y1);
    distance = sqrt(X+Y);
    printf("%.4lf\n",distance);
    return 0;
}

