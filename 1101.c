#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    while(scanf("%d %d",&a,&b)==2){
    if(a>0&&b>0){
            sum=0;
            if(a<b){
        for(i=a;i<=b;i++){
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
    }
    else if(b<a){
        for(i=b;i<=a;i++){
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
    }
    }
    else{
        break;
    }
    }
    return 0;
}

