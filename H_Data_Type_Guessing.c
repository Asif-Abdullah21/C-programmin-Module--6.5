#include<stdio.h>
int main()
{
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);

    if((a*b)%c!=0) printf("double\n");
    else{

        long long ans = (a*b)/c;

        if(ans <=2147483647)
        {
            printf("int\n");
        }
        else printf("long long\n");
    }
    
    return 0;
}