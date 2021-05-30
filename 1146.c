#include<stdio.h>
int main()
{
    int a,i;
    while(scanf("%d",&a)==1){
    if(a==0){
        break;}
    else{
        for(i=1;i<a;i++)
        printf("%d ",i);
    }
    printf("%d\n",a);
}
    return 0;
}
