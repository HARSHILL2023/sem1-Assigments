#include <stdio.h>
int main(){
    int n;
    int m=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=m;j++){
            printf("%d",j);
        }
        m=m+2;
        printf("\n");
    }
     
    
    
    return 0;
}