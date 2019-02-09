#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main(){

    int array[3]={3,10,5};

    int arr[16]={0};
    arr[0]=1;
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0,k=array[i];k<=15;j++,k++){
            arr[k]=arr[k]+arr[j];
        }
    }
    for(i=0;i<16;i++){
        printf("%d ",arr[i]);
    }
    

}