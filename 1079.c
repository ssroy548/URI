#include<stdio.h>
int main()
{
    int n;
    float a,c,i,b,av;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            scanf("%f%f%f",&a,&b,&c);
        av=(a*2+b*3+c*5)/10;
        printf("%.1f\n",av);
    }
    return 0;
}
