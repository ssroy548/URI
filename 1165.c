#include<stdio.h>
int main()
{
    int a,ch,i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        ch=1;
        if(a==1)
            ch=1;
        for(j=2;j<a;j++){
            if(a%j==0)
            ch=0;
        }
        if(ch==1)
            printf("%d eh primo\n",a);
        else{
            printf("%d nao eh primo\n",a);
        }
            }
    return 0;
}

