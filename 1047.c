#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z,n;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=a*60+b,y=c*60+d;
    if(x==y){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(x<y){
            z=y-x;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",z/60,z%60);
    }
    else if(x>y){
        z=x-y;
        n=1440-z;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",n/60,n%60);
    }
    return 0;
}
