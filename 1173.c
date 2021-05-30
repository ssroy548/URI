#include<stdio.h>
int main()
{
    int N[10],a,i;
    scanf("%d",&a);
    N[0]=a;
    printf("N[0] = %d\n",a);
    for(i=1;i<10;i++){
            N[i]=a*2;
        printf("N[%d] = %d\n",i,N[i]);
        a=N[i];
    }
    return 0;
}
