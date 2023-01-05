#include<stdio.h>
int main()
{
    double p,q;
    scanf("%lf",&p);
    if(p <= 199 )
    {
        q=p*1.2;
        
    }
    else
    if(p>=200 && p<400)
    {
        q=p*1.5;
        
    }
    else
    if(p>=400 && p<600)
    {
        q=p*1.8;
        
    }
    else
    {
        q=p*2;
        
    }
    if(q>400)
    {
        q=q*115;
        q=q/100;
        
    }
    else
    {
        q=q+100;
        
    }
    printf("%0.2lf",q);
    return 0;
    
}
