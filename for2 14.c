#include <stdio.h>
int main() {
    int n,dr,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&dr);
        sum=sum+dr;
        if(dr>50000)
        count++;
    }
    printf("Total Revenue:%d\n",sum);
    printf("Target Days:%d",count);
    return 0;
}