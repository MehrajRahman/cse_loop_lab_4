#include <stdio.h>
int main(){
    int n;
    double x,result;
    double avg;
    scanf("%d", &n);
    result =0;
    for(int i =1; i<=n;i++){
        scanf("%lf", &x);
        result += x;
    }

    avg = result /(n *1.0);
    printf("%lf", avg);


    return 0;

}
