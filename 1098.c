#include<stdio.h>
int main()
{
    float i,j,a,b,x=1;
    int y;
    for(i=0;i<=2;i=i+.2){
        for(b=1,j=x;b<=3;j++,b++){
                if(i==0||i==1||i==2){
                    printf("I=%.0f J=%.0f\n",i,j);
                }
                else{
            printf("I=%.1f J=%.1f\n",i,j);}}
            x=x+.2;
    }
    for(y=3;y<=5;y++)
        printf("I=2 J=%d\n",y);
    return 0;
}
