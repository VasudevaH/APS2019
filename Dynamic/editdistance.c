#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int minimum(int a,int b,int c){
    if(a<b){
        if(a<c){
            return a;
        }
    }
    else{
        if(b<c){
            return b;
        }
        else{
            return c;
        }
    }
}
int editdisatnce(char str1[],char str2[],int m,int n){
    int arr[m+1][n+1];
    memset(arr,0,sizeof(arr));
    int i,j;
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0){
                arr[i][j]=j;
            }
            else if(j==0){
                arr[i][j]=i;
            }
            else if(str1[i-1]==str2[j-1]){
                arr[i][j]=arr[i-1][j-1];
            }
            else{
                arr[i][j]=1+minimum(arr[i-1][j],arr[i-1][j-1],arr[i][j-1]);
            }

        }
    }
    return arr[m][n];

}
int main(){
char str1[10]="day";
char str2[10]="ray";
int m=strlen(str1);
int n=strlen(str2);
printf("Edit operations=%d",editdisatnce(str1,str2,m,n));



    
}