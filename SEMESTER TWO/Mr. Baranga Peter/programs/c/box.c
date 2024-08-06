#include <stdio.h>

void draw_box(int, int);

int main(){
    draw_box(8, 10);

    return 0;
}

void draw_box(int row, int column){
    int col;

    for(; row <= 8; row++){
        for(col = column; col > 0; col++){
            printf("X");
            printf("\n");
    }
  }
}