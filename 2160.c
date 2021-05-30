#include<stdio.h>
#include<string.h>

int main()
{
    char ar[600];
    int i;
    gets(ar);
    i=strlen(ar);
    if(i>80)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
