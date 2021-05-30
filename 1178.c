#include<stdio.h>
int main()
{
    double a[100],j;
    int i;
    scanf("%lf",&j);
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,j);
        j=j/2;
    }
    return 0;
}
