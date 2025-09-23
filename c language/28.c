#include <stdio.h>
int main(){

        int n;
        // int m=9;
        scanf("%d",&n);
for(int i=0;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf(" ");
    }
    for(int k=0;k<2*(n-i)-1;k++){
        printf("%c",'A'+k);
    }
    printf("\n");
    // m=m-2;
}




    return 0;
}