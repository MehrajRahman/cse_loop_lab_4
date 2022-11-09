#include <stdio.h>

int main(){
    int n ;
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
        if(i ==1){
            printf("1" );
        }else if(i % 2 == 0){
            printf(", 0");
        }else{
            printf(", 1");
        }
    }

    return 0;


}
