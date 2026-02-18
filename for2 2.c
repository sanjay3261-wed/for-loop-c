#include <stdio.h>
int main() {
    int n,wd,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&wd);
        sum=sum+wd;
    }
    if(sum>10000)
        printf("LimitExceed");
    else
        printf("approved");
    return 0;
}
