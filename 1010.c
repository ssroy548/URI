#include<stdio.h>
int main()
{
    int a,b,x,y;
    float m,n,result;
    scanf("%d%d%f",&a,&b,&m);
    scanf("%d%d%f",&x,&y,&n);
    result=b*m+y*n;
    printf("VALOR A PAGAR: R$ %.2lf\n",result);
    return 0;
}
