#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int left=j-i;
            int right=n-j;
            int top=i-1;
            int bottom=n-i;
            if(left<=n && left<=top && left<=bottom){
                printf("%d",left+1);
            }
            else if(right<=n && right<=top && right<=bottom)
            printf("%d",right+1);
        }
        printf("\n");
    }
}
