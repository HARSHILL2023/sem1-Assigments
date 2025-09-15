#include <stdio.h>
int main(){
    int num=5;
  for(int i=num;i>=0;i--){
    for(int j=0;j<i;j++){

        printf("%c",'A'+j);
    }
    printf("\n");
  }




    return 0;
}