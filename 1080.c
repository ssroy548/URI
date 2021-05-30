#include<stdio.h>
int main()
{
    int a,i,max=0,pos=0;
    for(i=1;i<=100;i++){
        scanf("%d",&a);
        if(max<a){
            max=a;
            pos=i;
        }
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}
