#include<stdio.h>
int main()
{
    float s=1,a,b;
    int i;
    for(i=1,a=3,b=2;i<=19;i++,a=a+2,b=b*2)
    {
        s=s+a/b;
    }
    printf("%.2f\n",s);
    return 0;
}
