#include<stdio.h>
int main(){
    int n,sum=0,temp;
    scanf("%d",&n);
    for(;n!=0;n=n/10){
        temp=n%10;
        sum=sum+temp;
    }
    printf("%d",sum);
    return 0;
    
}