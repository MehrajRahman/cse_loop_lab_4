#include <stdio.h>
#include <string.h>


int main(){
    int flag = 1, y = 1;;
    char x[2];

    while(flag){
        scanf("%s", &x);

        if((strcmp(x,"A")==0)){
            flag = 0;
            break;
        }

        printf("Input %d : %s \n", y,x);
        y++;
    }



    return 0;
}
