#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int m=0;
      scanf("%d",&m);
      int i;
      long int arr[m];
      for(i=0;i<m;i++){
          scanf("%ld",&arr[i]);
      }
      long int max = arr[0];
      long int min_so_far = arr[0];
      long int sum=arr[0];
      for(i=1;i<m;i++){
        sum = sum + ((arr[i] >=0 ) ? arr[i] : 0);
        sum=(sum>=arr[i])?sum:arr[i];
        min_so_far = ((min_so_far + arr[i]) >arr[i])
                         ? min_so_far + arr[i]
                         :arr[i];
        
        max=(min_so_far>max)?min_so_far:max;
      }
      printf("%ld %ld\n",max,sum);
    }
    
}

