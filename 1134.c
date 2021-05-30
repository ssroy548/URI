#include<stdio.h>
int main()
{
    int a=0,g=0,d=0,n;
    while(scanf("%d",&n)==1){
    if(n==4){
        break;
    }
    else if(n==1){
        a=a+1;
    }
    else if(n==2){
        g=g+1;
    }
    else if(n==3){
        d=d+1;
    }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    return 0;
}
