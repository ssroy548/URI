#include<stdio.h>
int main()
{
char e;
double salary,sold,total;
scanf("%s %lf %lf",&e,&salary,&sold);
total=salary+(sold*15)/100;
printf("TOTAL = R$ %.2lf\n",total);
return 0;
}
