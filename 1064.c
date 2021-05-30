#include<stdio.h>
int main()
{
    int i,count=0;
    float n,av,sum=0;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n>0){
            count++;
            sum=sum+n;

            }
        }
        av=sum/count;
        printf("%d valores positivos\n%.1f\n",count,av);
    return 0;
}

