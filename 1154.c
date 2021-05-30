#include<stdio.h>
int main()
{
	int  a,sum=0;
	float c=0,d;
	while(scanf("%d",&a)==1){
	if(a<0)
	break;
	else{
		c++;
		sum=sum+a;
		}
	}
		d=sum/c;
		printf("%.2f\n",d);
		return 0;
}
