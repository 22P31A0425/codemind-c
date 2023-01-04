#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int b=a;
    int r,s=0;
    while(b!=0)
    {
        r=b%10;
        s=s*10+r;
        b=b/10;
        
    }
    if (s==a)
    printf("True");
    else
    printf("False");
    
}
