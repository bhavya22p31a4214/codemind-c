#include<stdio.h>
int main()
{
    int ti,i,s=0;
    scanf("%d",&ti);
    for(i=1;i<=ti;i++)
    {
        int n,q,r,s=0;
        scanf("%d",&n);
        q=n;
        while(q!=0)
        {
            r=q%10;
            q=q/10;
            s=s*10+r;
            }
            if(n==s)
            {
                printf("True
");
                }
                else
                {
                    printf("False
");
                    }
                    }
}