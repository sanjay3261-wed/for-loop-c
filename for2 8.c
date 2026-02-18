#include <stdio.h>
int main() {
    int n,dlu,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         scanf("%d",&dlu);
        sum=sum+dlu;
        if(dlu>100)
        count++;
        }
    printf("Total Loss:%d\n",sum);
    printf("High Loss Days:%d",count);
    return 0;
}
