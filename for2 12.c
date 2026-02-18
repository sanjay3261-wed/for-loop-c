#include <stdio.h>
int main() {
    int n,fp,max=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         scanf("%d",&fp);
         if (max<fp)
         max=fp;
        if(fp>100)
        count++;
        }
    printf("Highest Price:%d\n",max);
    printf("High Price Days:%d",count);
    return 0;
}
