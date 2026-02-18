#include <stdio.h>
int main() {
    int n,error,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&error);
        sum=sum+error;
        if(error>50)
        count++;
    }
    printf("Total Error:%d\n",sum);
    printf("Critical Hours;%d",count);
    return 0;
}