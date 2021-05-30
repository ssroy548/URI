#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==61){
        printf("Brasilia\n");
    }
    else if(a==71){
        printf("Salvador\n");
    }
    else if(a==11){
        printf("Sao Paulo\n");
    }
    else if(a==21){
        printf("Rio de Janeiro\n");
    }
    else if(a==32){
        printf("Juiz de Fora\n");
    }
    else if(a==19){
        printf("Campinas\n");
    }
    else if(a==27){
        printf("Vitoria\n");
    }
    else if(a==31){
        printf("Belo Horizonte\n");
    }
    else if(a!=61||a!=71||a!=11||a!=21||a!=32||a!=19||a!=27||a!=31){
        printf("DDD nao cadastrado\n");
    }
    return 0;
}
