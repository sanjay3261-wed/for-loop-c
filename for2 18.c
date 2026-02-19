#include <stdio.h>

int main() {
    int n,oh,sum=0,rem,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&oh);
        sum+=oh;
        rem=sum*200;
        if(oh>3)
        count++;
    }
    printf("Total Overtime Hours: %d\n",sum);
    printf("Overtime Cost: %d\n",rem);
    printf("Heavy Overtime Days: %d\n",count);

    return 0;
}