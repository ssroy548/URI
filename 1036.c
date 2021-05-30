#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,R1,R2,i;
    scanf("%f %f %f",&A,&B,&C);
    i=(B*B)-(4*A*C);
    R1=(-B+sqrt(i))/(2*A);
    R2=(-B-sqrt(i))/(2*A);
    if(A!=0 && i>0){
        printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
    }
    else{
        printf("Impossivel calcular\n");
    }
    return 0;
}
