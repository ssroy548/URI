#include<stdio.h>
int main()
{
    int n[1000],i,j,k;
    scanf("%d",&j);
    for(k=0,i=0;k<1000;k++){
        printf("N[%d] = %d\n",k,i);
        i++;
        if(i==j)
            i=0;
    }
    return 0;
}
