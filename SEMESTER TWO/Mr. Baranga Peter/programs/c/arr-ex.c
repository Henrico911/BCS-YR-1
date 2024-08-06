#include <stdio.h>

    int sum;
    int avg;

int main(){    
    int courseUnitMarks[5];

    printf("Enter marks for Course Unit 1: ");
    scanf("%d", &courseUnitMarks[0]);

    printf("Enter marks for Course Unit 2: ");
    scanf("%d", &courseUnitMarks[1]);

    printf("Enter marks for Course Unit 3: ");
    scanf("%d", &courseUnitMarks[2]);

    printf("Enter marks for Course Unit 4: ");
    scanf("%d", &courseUnitMarks[3]);

    printf("Enter marks for Course Unit 5: ");
    scanf("%d", &courseUnitMarks[4]);

    sum = courseUnitMarks[0] + courseUnitMarks[1] + courseUnitMarks[2] + courseUnitMarks[3] + courseUnitMarks[4];
    avg = sum / 5;

    printf("\n");
    printf("The sum is: %d\n", sum);
    printf("The average is: %d", avg);


    return 0;
}