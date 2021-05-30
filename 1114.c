#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)==1){
        if(a==2002){
            printf("Acesso Permitido\n");
            break;
        }

        else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
