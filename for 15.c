#include <stdio.h>
int main() {
    int n,count=0,primecount=0;
    scanf("%d",&n);
    
   for(int i=2;i<=n;i++){
    count=0;
    for(int j=1;j<=n;j++){
        if(i%j==0){
            count++;
        }
    }
    if(count==2){
        primecount++;
    }
   }
    printf("%d",primecount);
    return 0;
}