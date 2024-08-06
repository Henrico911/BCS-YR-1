#include <stdio.h>

int avg_goal(int a, int b, int c, int d);

int hgst_score(int a, int b, int c, int d);

int p, q, r, s;



int main(){

    int a_v_g;
    int h_g_s;

    printf("Enter first score: ");
    scanf("%d", &p);

    printf("Enter second score: ");
    scanf("%d", &q);

    printf("Enter third score: ");
    scanf("%d",&r);

    printf("Enter fourth score: ");
    scanf("%d",&s);

    printf("\n");

    a_v_g = avg_goal(p,q,r,s);
    printf("Average is: %d\n", a_v_g);

    h_g_s = hgst_score(p,q,r,s);
    printf("Highest score is: %d", h_g_s);



    return 0;
}


int avg_goal(int a, int b, int c, int d){
    
    int avg;

    avg = (p + q + r + s) /4;

    return avg;
}


int hgst_score(int a, int b, int c, int d){
    
    int high;

    if (a > b && a > c && a > d){
        high = a;
    }else if(b > a && b > c && b > d){
        high = b;
    }else if(c > a && c > b && c > d){
        high = c;
    }else{
        high = d;
    }
    

    return high;
}