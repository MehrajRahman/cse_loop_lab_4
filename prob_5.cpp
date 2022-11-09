#include <stdio.h>
#include <math.h>
int main(){
    int x, y,n, z;
    scanf("%d %d" , &x, &y);
    n = abs(x - y) + 1;

    for(int i = 1; i<=n; i++){
        if(x > y){
            z = pow(x , 2);
            if(i ==1){
                printf("%d",z);
            }else if(i<n-1){
                printf(", %d",z );
            }else{
                printf(", %d, ",z );
            }
            x--;
        }else if(y > x){
            z = pow(x , 2);
            if(i ==1){
                printf("%d",z);
            }else if(i<n-1){
                printf(", %d",z );
            }else{
                printf(", %d, ",z );
            }
            x++;

        }
        else{
            printf("Reached!");
        }

    }

    return 0;
}
