#include <stdio.h>
int main() {
    int n,mp,bp,sum=0,rem;
    scanf("%d",&n);
    scanf("%d",&mp);
    for(int i=1;i<=mp;i++){
        scanf("%d",&bp);
        sum=sum+bp;
        rem=n-sum;
    }
    printf("Remaining Battery:%d",rem);
    return 0;
}
