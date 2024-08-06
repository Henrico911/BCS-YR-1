#include <stdio.h>

int hrs_worked, pay_rate;
float gross_pay, take_home, tax;
// float gross_pay_arr[3];
char name[30];

int main(){

    printf("Enter your full name: ");
    scanf("%s", name);

    printf("Enter Hours Worked: ");
    scanf("%d", &hrs_worked);

    printf("Enter Pay Rate: ");
    scanf("%d", &pay_rate);

    //calculating the gross pay
    gross_pay = hrs_worked * pay_rate;

    int gross_pay_arr[3] = {500000, 300000, 250000};

    //calculating the tax
    if(gross_pay >= gross_pay_arr[0]){
        tax = 0.035 * gross_pay;
    } else if(gross_pay >= gross_pay_arr[1]){
        tax = 0.025 * (gross_pay);
    } else if(gross_pay >= gross_pay_arr[2]){
        tax = 0.020 * (gross_pay);
    } else{
        tax = 0;
        printf("No tax on the Pay!\n");
    }

    take_home = gross_pay - tax;

    printf("\n\n");

    printf("               ATMAK PAY ROLL SYSTEM\n");
    printf("==================================================\n");
    printf("       ***Enter the details of the Employee***    \n");
    printf("Employee Name             : %s\n", name);
    printf("Hours Worked              : %d\n", hrs_worked);
    printf("Pay Rate                  : %d\n", pay_rate);
    printf("Gross Pay                 : %.0f\n",gross_pay);
    printf("Tax                       : %.2f\n", tax);
    printf("Take Home                 : %.2f\n", take_home);


    return 0;
}