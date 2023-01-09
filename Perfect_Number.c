#include<stdio.h>
int main()
{
    int a,i,r,s=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        r=a%i; if(r==0)
        {
            s=s+i;
            }
            }
            if(s==a)
            {
                printf("True");
                }
                else
                {
                    printf("False");
                    }
}