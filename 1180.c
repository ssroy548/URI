#include<stdio.h>
int main()
{
    int a[1000],i,max=0,pos=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(max>a[i]){
            max=a[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",max,pos);
    return 0;
}

