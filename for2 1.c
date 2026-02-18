#include <stdio.h>
int main() {
    int n,ep,sum=0,count=0;
    scanf("%d",&n);
    for( int i=1;i<=n;i++){
        scanf("%d",&ep);
        sum=sum+ep;
        if(ep>=1000)
        count++;
    }
    printf("Total Expense: %d\n",sum);
    printf("Overspend Days:%d",count);
    return 0;
}
