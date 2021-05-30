#include<stdio.h>
int main()
{
    float i,sum=1,ts=0,v;
    for(i=2;i<=100;i++){
        v=sum/i;
        ts=ts+v;
    }
    sum=sum+ts;
    printf("%.2f\n",sum);
    return 0;
}
