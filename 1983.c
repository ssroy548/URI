#include<stdio.h>
int main()
{
    int a,b[100],i,m;
    float c[100],s=0.0,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %f",&b[i],&c[i]);
    }
    for(i=0;i<a;i++)
    {
        if(c[i]>s){
            m=b[i];
            j=c[i];
            s=j;
        }
    }
    if(j<8.00)
        printf("Minimum note not reached\n");
    else
        printf("%d\n",m);
    return 0;
}
