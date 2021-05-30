#include<stdio.h>
int main()
{
    unsigned int a,i,j,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        for(j=0;j<=a;j++)
            sum=sum+j;
    }

}
