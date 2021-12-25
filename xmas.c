#include<stdio.h>
#include <unistd.h>
#define clear() printf("\033[H\033[J")
int main(){
    clear();
    for(int t=0; t<8; t++){
        printf("\n\n\n");
        for(int j = 1; j<=10; j++){
        for(int i = 60; i >= j; i--){
                printf(" ");
        }
        for(int y=1; y<=j; y++){
                printf(" \e[0;9%dm*", t);
        }
        printf("\n");
    }

        for(int j = 2; j<=10; j++){
        for(int i = 60; i >= j; i--){
                printf(" ");
        }
        for(int y=1; y<=j; y++){
                printf(" \e[0;9%dm*", t+1);
        }
        printf("\n");
    }

            for(int j = 3; j<=10; j++){
        for(int i = 60; i >= j; i--){
                printf(" ");
        }
        for(int y=1; y<=j; y++){
                printf(" \e[0;9%dm*", t+2);
        }
        printf("\n");
    }

    printf("\n");
    for(int n=1; n<=60; n++){
        printf(" ");
        if(n==47) {
            if(t%2==0){
                printf("\033[1;35m MERRY XMAS & HAPPY NEW YEAR");
            } else {
            printf("\033[1;36m MERRY XMAS & HAPPY NEW YEAR");
            }
        }
    }

    printf("\n\n");
    sleep(1);
    clear();
    }
}

