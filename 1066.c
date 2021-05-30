#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0,pos=0,neg=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n%2==0){
            even++;
        }
        if(n%2==1||n%2==-1){
            odd++;
        }
        if(n<0){
            neg++;
        }
        if(n>0){
            pos++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,pos,neg);
    return 0;
}
