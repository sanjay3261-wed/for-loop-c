#include <stdio.h>
int main() {
    int n,tfpp,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         scanf("%d",&tfpp);
        sum=sum+tfpp;
        }
    printf("Total Collection:%d",sum);
    return 0;
}