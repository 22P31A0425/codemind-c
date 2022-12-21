#include<stdio.h>
int main()
{
    float b,PF,HRA,DA;
    float GROSS;
    scanf("%f%f%f",&b,&HRA,&DA);
    PF=b*12/100;
    GROSS=PF+b+HRA+DA;
    printf("%0.2f
%0.2f",PF,GROSS);
}
