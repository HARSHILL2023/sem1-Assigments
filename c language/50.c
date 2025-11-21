#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=n*(n+1)/2;
for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("%d",count);
        count=count-1;
    }
    printf("\n");
}


    return 0;
}