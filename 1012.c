#include<stdio.h>
int main()
{
    double A,B,C,s,t,u,v,r;
    scanf("%lf %lf %lf", &A, &B, &C);
    s=.5*A*C;
    t=3.14159*C*C;
    u=.5*(A+B)*C;
    v=B*B;
    r=A*B;
    printf("TRIANGULO: %.3lf\n",s);
    printf("CIRCULO: %.3lf\n",t);
    printf("TRAPEZIO: %.3lf\n",u);
    printf("QUADRADO: %.3lf\n",v);
    printf("RETANGULO: %.3lf\n",r);
    return 0;
}
