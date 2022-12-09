#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s;
    float n;
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    n=pow((s*(s-a)*(s-b)*(s-c)),0.5);
    printf("%.2f",n);
    
}