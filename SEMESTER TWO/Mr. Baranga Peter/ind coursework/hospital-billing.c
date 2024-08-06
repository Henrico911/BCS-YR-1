#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char*argv[]){
	
    char patient_name[100];
    char case_diagnosed[100];
    int consultancy_fee, admission_fee, number_of_days_admitted;
    int bed_fee_rate[] = {100000, 80000, 60000, 45000};
    int bed_fee;
    int total_bill;

    printf("\t\tBUHINGA HOSPITAL BILL SYSTEM\n");
    printf("\t****AUTOMATED PATIENTS RECEIPT******\n");
    
    printf("------------------------------------------------------------\n");
    printf("------------------------------------------------------------\n");

    printf("Patients Name : ");
    fgets(patient_name, sizeof(patient_name), stdin);
    
    printf("Case diagnosed : ");
    fgets(case_diagnosed, sizeof(case_diagnosed), stdin);
    
    printf("Consultancy fee : ");
    scanf("%d", &consultancy_fee);
    
    printf("Admission fee : ");
    scanf("%d", &admission_fee);
    
    printf("Days of admission : ");
    scanf("%d", &number_of_days_admitted);
    

    if (number_of_days_admitted >= 10) {
        bed_fee = number_of_days_admitted * bed_fee_rate[0];
    } else if (number_of_days_admitted >= 7) {
        bed_fee = number_of_days_admitted * bed_fee_rate[1];
    } else if (number_of_days_admitted >= 4) {
        bed_fee = number_of_days_admitted * bed_fee_rate[2];
    } else {
        bed_fee = number_of_days_admitted * bed_fee_rate[3];
    }

    total_bill = consultancy_fee + admission_fee + bed_fee;

    printf("\nPatients Name : %s", patient_name);
    printf("\nCase diagnosed : %s", case_diagnosed);
    printf("\nConsultancy fee : %d", consultancy_fee);
    printf("\nAdmission fee : %d", admission_fee);
    printf("\nDays of admission : %d", number_of_days_admitted);
    printf("\nBed Fees : %d", bed_fee);

    printf("\n\n------------------------------------------------------------\n");
    printf("Total Bill : UGX %d\n", total_bill);

    return 0;
}
