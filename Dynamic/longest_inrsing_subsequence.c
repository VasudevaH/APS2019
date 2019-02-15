#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter number of elements in an array\n");
scanf("%d",&n);
int i,j;
int arr[n];
int temp_arr[n];

for(i=0;i<n;i++){

scanf("%d",&arr[i]);
temp_arr[i]=1;
}
int max=0;
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if((arr[j]>arr[i])&&(temp_arr[i]+1>temp_arr[j]))
temp_arr[j]=temp_arr[i]+1;
if(max<temp_arr[j])
max=temp_arr[j];
}


}
printf("%d\n",max);





}
