#include <stdio.h>
int main(){

    int n;
   
    scanf("%d",&n);
    int m=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=m;j++){
            printf("*");
        }
        printf("\n");
        m=m+2;
        
    }
    for(int i=1;i<n;i++){
        for(int f=0;f<=i-1;f++){
            printf(" ");
        }
        for(int z=1;z<=2*(n-i)-1;z++){
            printf("*");
        }
        printf("\n");
       
    }




    return 0;
}