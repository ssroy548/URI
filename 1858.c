#include<stdio.h>
int main()
{
    int a,b[100],i,d,c=0,small=21;
    while(scanf("%d",&a)!=EOF)
    {
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);

        if(b[i]<small)
        {
            c=0;
            small=b[i];
            c=i+1;
            d=c;
        }
    }
    printf("%d\n",d);
    }
    return 0;
}
