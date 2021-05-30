#include<stdio.h>
int main()
{
    int N,X,i;
    scanf("%d",&N);
    if(N<10000){
            for(i=1;i<=N;i++){
        scanf("%d",&X);
        if(-100000000<X&&X<100000000){
            if(X>0&&X%2==0){
                printf("EVEN POSITIVE\n");
            }
            else if(X>0&&X%2==1){
                printf("ODD POSITIVE\n");
            }
            else if(X<0&&X%2==0){
                printf("EVEN NEGATIVE\n");
            }
            else if(X<0&&X%2==-1){
                printf("ODD NEGATIVE\n");
            }
            else if(X==0){
                printf("NULL\n");
            }
        }
        else{}
    }
    }
    else{}
    return 0;
}
