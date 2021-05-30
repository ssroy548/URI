#include<stdio.h>
int main()
{
	int a,b,n,sum=0;
	scanf("%d%d",&a,&b);
	if(a<b){
	for(n=a;n<=b;n++){
		if(n%13!=0){
			sum=sum+n;}
	}
    }
    else{
        for(n=b;n<=a;n++){
		if(n%13!=0){
			sum=sum+n;}
    }
        }
	printf("%d\n",sum);
	return 0;
}
