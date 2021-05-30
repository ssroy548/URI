#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(0<A&&0<B&&0<C&&A>=B+C){
        printf("NAO FORMA TRIANGULO\n");
        if(A==B||B==C||C==A){
            printf("TRIANGULO ISOSCELES\n");
        }
        else if(A==B==C){
                printf("TRIANGULO EQUILATERO\n");}
    }
    else if(0<A&&0<B&&0<C&&(A*A)==((B*B)+(C*C))){
        printf("TRIANGULO RETANGULO\n");
            if(A==B||B==C||C==A){
            printf("TRIANGULO ISOSCELES\n");}
            else if(A==B==C){
                printf("TRIANGULO EQUILATERO\n");}
    }
    else if(0<A&&0<B&&0<C&&(A*A)>((B*B)+(C*C))){
        printf("TRIANGULO OBTUSANGULO\n");
        if(A==B||B==C||C==A){
            printf("TRIANGULO ISOSCELES\n");}
            else if(A==B==C){
                printf("TRIANGULO EQUILATERO\n");}
    }
    else if(0<A&&0<B&&0<C&&(A*A)<((B*B)+(C*C))){
            printf("TRIANGULO ACUTANGULO\n");
            if(A==B||B==C){
            printf("TRIANGULO ISOSCELES\n");}
            else if(A==B==C){
                printf("TRIANGULO EQUILATERO\n");
            }
    }
    return 0;
}
