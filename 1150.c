#include<stdio.h>
int main()
{
    int a,b,n=0,i,sum=0;
    scanf("%d%d",&a,&b);
    while(b<a||b==a){
        scanf("%d",&b);}
    for(i=a;i<=b;i++){
        sum=sum+i;
        n++;
        if(sum>b)
            break;
    }
    printf("%d\n",n);
    return 0;
}
