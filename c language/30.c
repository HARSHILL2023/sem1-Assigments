#include <stdio.h>
int main(){

    int n;
    int p=9;
    scanf("%d",&n);
    int m=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=0;j<m;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
        m=m+2;
    }
    for(int i=0;i<n;i++){
        for(int f=1;f<=i-1;f++){
            printf(" ");
        }
        for(int z=0;z<2*(n-i)-1;z++){
            printf("%c",'A'+z);
        }
        printf("\n");
        p=p-2;
    }




    return 0;
}