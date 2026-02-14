#include<stdio.h>
int main(){
    long n;
    scanf("%ld",&n);
    int count=0;
    for(;n!=0;n/=10){
        count++;
    }
    printf("%d",count); 
    return 0;
}
