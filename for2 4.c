#include <stdio.h>
int main() {
    int n,ab;
    scanf("%d",&n);
    scanf("%d",&ab);
    for(int i=1;i<=ab;i++){
        n=n-100;
    }
    printf("Final Salary: %d",n);
    return 0;
}
