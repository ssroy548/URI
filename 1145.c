#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    if(a<b&&a>1&&a<20&&b<100000){
        for(i=1;i<=b;i++){
            printf("%d",i);
            if(i%a!=0){
                printf(" ");}
        if(i%a==0)
            printf("\n");}
    }
    return 0;
}
