#include<stdio.h>
int main()
{
    int n,m,i,a,b,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        sum=0;
        for(m=a;m<a+b*2;m++){
            if(m%2==1){
                sum=sum+m;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
