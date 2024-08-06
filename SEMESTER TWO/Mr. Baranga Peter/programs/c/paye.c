#include <stdio.h>

/// @brief 
/// @return 
int main(){

    float salary, paye;
    

    printf("Enter salary: ");
    scanf("%f", &salary);

    //calculate paye for salary
    float exceeds[3] = {130000, 235000, 410000};
    

    if(salary <= 130000){
        paye = 0;

        printf("Employee Salary is: %.2f\n", salary);
        printf("Paye is: %.2f", paye);
    } else if(salary > 130000 && salary <= 235000){
        paye = 0.1 * (salary - exceeds[0]);

        printf("Employee Salary is: %.2f\n", salary);
        printf("Paye is: %.2f", paye);
    } else if(salary > 235000 && salary <= 410000){
        paye = 10500 + (0.2 * (salary -exceeds[1]));

        printf("Employee Salary is: %.2f\n", salary);
        printf("Paye is: %.2f", paye);
    } else if(salary > 410000){
        paye = 45500 + (0.3 * (salary - exceeds[2]));

        printf("Employee Salary is: %.2f\n", salary);
        printf("Paye is: %.2f", paye);
    }else{
        printf("please enter a valid amount");
    }

    return 0;
}

