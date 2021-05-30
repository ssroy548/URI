#include<stdio.h>
int main()
{
    double a,b;
    while(scanf("%lf",&a)==1){
        if(a<0||a>10){
        printf("nota invalida\n");}
        else{
                while(scanf("%lf",&b)==1)
                    if(b<0||b>10)
        printf("nota invalida\n");

        else{
            printf("media = %.2lf\n",(a+b)/2);
            break;
        }
        break;
        }
    }
    printf("novo calculo (1-sim 2-nao)\n");
    int c;
    while(scanf("%d",&c)==1){
            if(c==1){
                while(scanf("%lf",&a)==1){
        if(a<0||a>10){
        printf("nota invalida\n");}
        else{
                while(scanf("%lf",&b)==1)
                    if(b<0||b>10)
        printf("nota invalida\n");

        else{
            printf("media = %.2lf\nnovo calculo (1-sim 2-nao)\n",(a+b)/2);
            break;
        }
        break;
        }
    }
    }
    else if(c==2){
        break;
    }
           else if(c!=1||c!=2){
                printf("novo calculo (1-sim 2-nao)\n");
            }
            }

    return 0;
}

