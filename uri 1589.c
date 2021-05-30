#include<stdio.h>
int main()
{
    int r1,r2,i,j;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%d %d",&r1,&r2);
        printf("%d\n",r1+r2);
    }
    return 0;
}
