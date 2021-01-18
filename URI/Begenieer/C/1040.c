#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,N5,media,total_media;

    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);

    media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    printf("Media: %.1f\n",media);
    if(media>=7.0)
        printf("Aluno aprovado.\n");
    else if(media<5.0)
        printf("Aluno reprovado.\n");
    else if(media>=5.0 && media <7.0)
        printf("Aluno em exame.\n");
    if(media>=5.0 && media <7.0 )
    {
        scanf("%f",&N5);
        printf("Nota do exame: %.1f\n",N5);


        total_media = (media + N5)/2;
    if(total_media >=5.0)
        printf("Aluno aprovado.\n");
    else if(total_media < 5.0)
        printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n",total_media);
    }

    return 0;
}

