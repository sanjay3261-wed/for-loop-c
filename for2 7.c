#include <stdio.h>
int main() {
    int n,hr,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         scanf("%d",&hr);
        sum=sum+hr;
        if(hr>50)
        count++;
        }
    printf("Total Rainfall:%d\n",sum);
    printf("Heavy Rain Day:%d",count);
    return 0;
}