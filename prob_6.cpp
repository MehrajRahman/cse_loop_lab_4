#include <stdio.h>
int main ()
{
    int n,a,x;

    printf("Enter player One guess: \n");
    scanf("%d", &a);

    printf("Enter player Two's chance: \n");
    scanf("%d", &n);

    for(int i = n; i >0; i--){
        scanf("%d", &x);
        if(x == a){
            printf("Right, Player-2 wins! \n");
            break;
        }else{
            printf("Wrong, %d Choice(s) Left!\n",i-1);
            if(i == 1){
                printf("Player-1 wins!\n");
            }
        }
    }





    return 0;
}
