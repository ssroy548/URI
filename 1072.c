#include<stdio.h>
int main()
{
    int a,b,n,in=0,out=0;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        scanf("%d",&n);
        if(n>-100000000&&n<100000000&&n>=10&&n<=20){
            in++;
        }
        if(n>-100000000&&n<100000000&&n<10||n>20){
            out++;
        }
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}
