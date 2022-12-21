#include<stdio.h>
int main()
{
    int h,m,s,i;
    scanf("%d",&i);
    h=i/3600;
    s=(i%3600)/60;
    m=i%60;
    printf("H:M:S-%d:%d:%d",h,s,m);
}