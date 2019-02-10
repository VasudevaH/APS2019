#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b){
if(a==0)
    return b;
if(b==0)
    return a;
if(a==b)
    return a;
if(a>b)
    return gcd(a-b,b);
return gcd(a,b-a);

}
int main(int argc,char** argv){
int a;
a=*argv[1]-48;
int b;
b=*argv[2]-48;

printf("gcd of %d %d is %d",a,b,gcd(a,b));

}
