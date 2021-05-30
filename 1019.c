#include<stdio.h>
int main()
{
    int N,a,b,c,d,e,f;
    scanf("%d",&N);
    if(N<60)
    {
        printf("0:0:%d",N);
    }
    else if(N>=60&&N<3600)
    {
        a=N/60;
        b=N-(a*60);
        printf("0:%d:%d",a,b);
    }
    else if(N>=3600)
    {
        c=N/3600;
        d=N-(c*3600);
        {
            if(d<60)
            {
                printf("%d:0:%d",c,d);
            }
            else if(60<=d<3600) e=d/60;
            f=d-(e*60);
        }
        printf("%d:%d:%d",c,e,f);
    }
    return 0;
}
