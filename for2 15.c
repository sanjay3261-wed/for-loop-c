#include<stdio.h>
int main(){
    int n,volt,low,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&volt);
        if (i==1)
        low=volt;
        if(volt<low)
        low=volt;
        if(volt<210)
        count++;
    }
    printf("Minimum Voltage:%d\n",low);
    printf("Low Voltage Event: %d",count);
}