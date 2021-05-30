#include<stdio.h>
int main()
{
    int n,m,i,a,b,sum=0;
   while( scanf("%d",&a)!=EOF){
   	if(a==0){
   		break;
   	}
   	else{
    sum=0;
    for(m=a;m<a+10;m++){
        if(m%2==0){
            sum=sum+m;
        }
    }
        printf("%d\n",sum);
   	}
    }
    return 0;
}
