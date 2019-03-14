#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,k;
        scanf("%lld %lld",&n,&k);
        long long int anger[n];
        long long int cumulative[n];
        memset(cumulative,0,sizeof(cumulative));
        long long int i,j;
        double sum=0.0;
        double count2=1.0;
        int flag=0;
        for(i=0;i<n;i++){
            long long int val;
            scanf("%lld",&val);
            anger[i]=val;
            sum=sum+floor(val/count2++);
            cumulative[i]=sum;
           
            
        }
     
        
        
        
        
        for(i=0;i<n;i++){
            
            float cumu=0.0;
            double count=1.0;
            if(i==0){
                if(cumulative[n-1]<=k){
                printf("%lld\n",i+1);
                flag=1;
                break;
                }
                else{
                    continue;
                }
            }
            else{
                
                if(cumulative[n-1]-cumulative[i-1]>k){
                   
                    continue;
                }
            }
            
        for(j=i;j<n;j++){
            cumu=cumu+floor((anger[j]/(count)));
            cumulative[j]=cumu;
            count++;
            
            
        }
        if(cumu<=k){
            printf("%lld\n",i+1);
            flag=1;
            break;
        }
    }
    if(flag!=1){
        printf("%lld\n",n+1);
    }
    }
}