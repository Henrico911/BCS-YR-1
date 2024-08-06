#include <stdio.h>

int findMax(int a, int b);

int main(){
    int x;
    int y;
    int bigNum;

    printf("Enter first number: ");
    scanf("%d",&x);

    printf("Enter second number: ");
    scanf("%d",&y);

    bigNum = findMax(x,y);

    printf("The bigger number is: %d", bigNum);

    return 0;
}

int findMax(int a, int b){
    if (a > b){
        return a;
    }else {
        return b;
    }
}