#include<stdio.h>
int main(){
    int n,initial,wa,sum=0,rem,count=0;
    scanf("%d",&initial);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&wa);
        sum=sum+wa;
        rem=initial-sum;
        if(wa>=5000)
        count++;
    }
    printf("Remaining case:%d\n",rem);
    printf("Risk Count:%d\n",count);
    return 0;
}