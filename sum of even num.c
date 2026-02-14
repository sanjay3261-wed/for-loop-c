#include <stdio.h>
int main(){
int n,even=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2==0){
        even=even+i;
    }
    
}
printf("%d",even);
}
