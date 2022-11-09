#include <stdio.h>
int main(){
    int n, x;
    scanf("%d", &n);
    x = 1;
    for(int i = 1; i <= n; i++){
        if(i ==1){
            printf("%d",x );
        }else{
            printf(", %d",x );
        }

        x = x+2;
    }

    return 0;
}
