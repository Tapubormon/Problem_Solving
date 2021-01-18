#include<stdio.h>
int main()
{
    double R,sphere;
    scanf("%lf",&R);
    sphere = (4.0/3)*3.14159*pow(R,3);
    printf("VOLUME = %.3lf\n",sphere);
    return 0;
}
