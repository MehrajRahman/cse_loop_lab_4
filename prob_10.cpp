#include <stdio.h>
int main(){

    int n, result = 0;
    scanf("%d", &n);

    for(int i =1; i<=n; i++){
        if(i %2 ==0){
            result = result + i*(-1);
        }else{
            result = result + i;
        }
    }

    printf("Result: %d", result);



    return 0;
}