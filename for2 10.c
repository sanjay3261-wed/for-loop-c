#include <stdio.h>
int main() {
    int n,GB,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         scanf("%d",&GB);
        sum=sum+GB;
        if(GB<2)
        count++;
        }
    printf("Total Data:%d\n",sum);
    printf("High Usage Days:%d",count);
    return 0;
}
