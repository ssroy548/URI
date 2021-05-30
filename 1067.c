#include<stdio.h>
int main()
{
    int X,i;
    scanf("%d",&X);
    if(1 <= X && X<= 1000){
    for(i=1;i<=X;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }
    }
    else{}
    return 0;
}
