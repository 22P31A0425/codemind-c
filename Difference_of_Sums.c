#include<stdio.h>
#include<math.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int sum=0,sum1=0,sq;
    for (int i=1;i<=a;i++)
    {
        sq=(i*i);
        sum=sum+sq;
        sum1=sum1+i;
    }
    int p=pow(sum1,2);
    int d=(p-sum);
    printf("%d",d);
}