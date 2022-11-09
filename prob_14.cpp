#include <stdio.h>
int main(){
    int n, r, nr, resultn = 1, resultr = 1, resultnr = 1 , result = 1;
    scanf("%d %d", &n, &r);
    nr = n - r;
    for(int i = n; i>=1; i-- ){
        resultn *= i;
    }
    for(int i = r; i>=1; i-- ){
        resultr *= i;
    }
    for(int i = nr; i>=1; i-- ){
        resultnr *= i;
    }
    result  = resultn / (resultr * resultnr);
    printf("%d", result);
    return 0;
}