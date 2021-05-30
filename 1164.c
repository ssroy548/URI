#include<stdio.h>
int main()
{
    int a,n,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        sum=0;
        for(j=1;j<=a/2;j++){
            if(a%j==0){
                sum=sum+j;
            }
        }
    if(sum==a){
        printf("%d eh perfeito\n",a);}
    else{
        printf("%d nao eh perfeito\n",a);
    }
    }
    return 0;
}
