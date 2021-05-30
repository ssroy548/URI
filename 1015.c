#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf%lf",&a,&b);
    scanf("%lf%lf",&c,&d);
    e=(((c-a)*(c-a))+((d-b)*(d-b)));
    printf("%.4lf\n",sqrt(e));
    return 0;

}
