#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0;
    for(;n!=0;n=n/10){
        rev=rev*10+(n%10);
    }
    printf("%d",rev);
}