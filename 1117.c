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

    return 0;
}
