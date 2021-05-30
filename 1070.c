#include<stdio.h>
int main()
{
    int a,n,i;
    scanf("%d",&a);
    if(a%2==1){
        n=a+11;
    }
    else{
        n=a+12;
    }
    for(i=a;i<=n;i++){
            if(i%2==1){
        printf("%d\n",i);
    }
    }
    return 0;
}
