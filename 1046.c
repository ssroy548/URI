#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<13&&b<25&&b>a){
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    else if(a>132&&b<25&&b>a){
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    else if(a<25&&b<13&&a>b){
        printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    }
    else if(a==0&&b==0||a==b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(a>12&&a<25&&b>12&&b<25&&a>b){
        printf("O JOGO DUROU %d HORA(S)\n",24-a+b);
    }
    else if(a>12&&a<25&&b>12&&b<25&&a<b){
        printf("O JOGO DUROU %d HORA(S)\n",b-a);}
    return 0;
}
