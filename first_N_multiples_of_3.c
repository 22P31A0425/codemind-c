#include<stdio.h>
int main()
{
    int n,i,nl;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        nl=i*3;
        if(nl%3==0)
        printf("%d ",nl);
    }
} 
