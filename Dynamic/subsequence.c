#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
char * str1="lmnop";
char * str2="lmmnoop";
int arr[(strlen(str1))][strlen(str2)];
int i,j;
for(i=0;i<strlen(str1);i++){
for(j=0;j<strlen(str2);j++){
if(i==0||j==0)
	arr[i][j]=0;
else if(str1[i]==str2[j])
	arr[i][j]=arr[i-1][j-1]+1;
else
	arr[i][j]=(arr[i-1][j]>arr[i][j-1])?arr[i-1][j]:arr[i][j-1];
    
}
}
for(i=0;i<strlen(str1);i++){
for(j=0;j<strlen(str2);j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
printf("%d",arr[strlen(str1)-1][strlen(str2)-1]);


}
