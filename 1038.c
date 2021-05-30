#include<stdio.h>
int main()
{
    int a,b;
    float r;
    scanf("%d%d",&a,&b);
    if(a==1){
        printf("Total: R$ %.2f\n",r=(4*b));
    }
    else if(a==2){
        printf("Total: R$ %.2f\n",r=(4.50*b));
    }
    else if(a==3){
        printf("Total: R$ %.2f\n",r=(5*b));
    }
    else if(a==4){
        printf("Total: R$ %.2f\n",r=(2*b));
    }
    else if(a==5){
        printf("Total: R$ %.2f\n",r=(1.50*b));
    }
    return 0;
}
