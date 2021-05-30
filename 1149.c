#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    while(b<0||b==0){
        scanf("%d",&b);
    }
    for(i=a;i<a+b;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
