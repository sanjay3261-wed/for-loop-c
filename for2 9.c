#include <stdio.h>
int main() {
    int n,marks,sum=0,count=0,Average;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
         scanf("%d",&marks);
        sum=sum+marks;
        if(marks<40)
        count++;
        }
        Average=sum/n;
    printf("Average Score:%d\n",Average);
    printf("Failed Subject:%d",count);
    return 0;
}