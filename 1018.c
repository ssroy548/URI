#include<stdio.h>
int main()
{
    int N,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,x,y,z;
    scanf("%d",&N);
    printf("%d\n",N);
    b=N/100;
    printf("%d nota(s) de R$ 100,00\n",b);
    c=b*100;
    d=N-c;
    e=d/50;
    printf("%d nota(s) de R$ 50,00\n",e);
    f=e*50;
    g=d-f;
    h=g/20;
    printf("%d nota(s) de R$ 20,00\n",h);
    i=h*20;
    k=g-i;
    x=k/10;
    printf("%d nota(s) de R$ 10,00\n",x);
    y=x*10;
    z=k-y;
    j=z/5;
    printf("%d nota(s) de R$ 5,00\n",j);
    l=j*5;
    m=z-l;
    n=m/2;
    printf("%d nota(s) de R$ 2,00\n",n);
    o=n*2;
    p=m-o;
    q=p/1;
    printf("%d nota(s) de R$ 1,00\n",q);
    return 0;
}
