#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,a,e,b;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    a=((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1);
    if(a>=5 && a<=6.9){
        scanf("%f",&e);
    }
    printf("Media: %.1f\n",a);
    if(a>=7){
        printf("Aluno aprovado.\n");
    }
    else if(a<5){
        printf("Aluno reprovado.\n");
    }
    else if(a>=5 && a<=6.9){
            printf("Aluno em exame.\n");

    printf("Nota do exame: %.1f\n",e);
    printf("Aluno aprovado.\n");
    b=(a+e)/2;
    printf("Media final: %0.1f\n",b);
    }
    return 0;
}

