#include <stdio.h>
int main(){

int n;
scanf("%d",&n);
int m=9;
for(int i=0;i<n;i++){
    for(int j=1;j<=i;j++){
        printf(" ");
    }
    for(int k=1;k<=2*(n-i)-1;k++){
        printf("%d",k);
    }
    printf("\n");
    // m=m-2;
}





















    return 0;

}