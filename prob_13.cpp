#include <stdio.h>
int main(){
    int n, result =1;
    scanf("%d", &n);

    for(int i = n; i>=1; i-- ){
        result *= i;
    }

    printf("%d", result);

    return 0;
}