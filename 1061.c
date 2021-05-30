#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,u;
    char x,x1,x2,x3,x4,x5,x6;
    scanf("%s %d %d %c %d %c %d",&x,&a,&b,&x1,&c,&x2,&d);
    scanf("%s %d %d %c %d %c %d",&x3,&e,&f,&x4,&g,&x5,&h);
    i=a*86400+b*3600+c*60+d;
    j=e*86400+f*3600+g*60+h;
    k=j-i;
    if(k>=60){
    l=k/86400;
    m=l*86400;
    n=k-m;
    o=n/3600;
    p=o*3600;
    q=n-p;
    r=q/60;
    s=r*q;
    u=q-s;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",l,o,r,u);
    }
    return 0;
}
