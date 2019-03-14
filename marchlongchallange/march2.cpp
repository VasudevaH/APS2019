#include<iostream>
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,d;
        long double sum;
        sum=0.0;
        scanf("%lld %lld",&n,&d);
        long long int min,m,i;
        min=d;
        i=0;
        while(n>0)
        {
            m=n%10;
            n=n/10;
            if(m<=min)
            {
                min=m;
                sum=sum+(m*pow(10,i));
            }
            else
            {
                sum=sum*10 + d;
            }
            i++;

        }

        std::string str = std::to_string(sum);
        i=0;
        while(str[i]!='.')
        {
          printf("%c",str[i]);
          i++;
        }
        printf("\n");
        
        
        }
        return 0;
    }
    