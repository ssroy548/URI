#include<stdio.h>
int main()
{
    int i;
    float A[100];
    for(i=0;i<=99;i++)
        scanf("%f",&A[i]);
    for(i=0;i<=99;i++){
            if(A[i]<=10)
        printf("A[%d] = %.1f\n",i,A[i]);
    }
    return 0;
}
