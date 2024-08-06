#include <stdio.h>

int main() {
    char name[50], diagnosis[50];
    float consultancy_fee, admission_fee, bed_fee, total_bill;
    int days_admitted;

    printf("Enter patient name: ");
    scanf("%s", name);

    printf("Enter case diagnosed: ");
    scanf("%s", diagnosis);

    printf("Enter consultancy fee: ");
    scanf("%f", &consultancy_fee);

    printf("Enter admission fee: ");
    scanf("%f", &admission_fee);

    printf("Enter number of days admitted: ");
    scanf("%d", &days_admitted);

    if (days_admitted >= 10) {
        bed_fee = 45000 * days_admitted;
    } else if (days_admitted >= 7) {
        bed_fee = 60000 * days_admitted;
    } else if (days_admitted >= 4) {
        bed_fee = 80000 * days_admitted;
    } else {
        bed_fee = 100000 * days_admitted;
    }

    total_bill = consultancy_fee + admission_fee + bed_fee;

    printf("\nBUHINGA HOSPITAL BILL SYSTEM\n");
    printf("****AUTOMATED PATIENTS RECEIPT*******:\n");
    printf("Patients Name: %s\n", name);
    printf("Case diagnosed: %s\n", diagnosis);
    printf("Consultancy fee: %.2f\n", consultancy_fee);
    printf("Admission fee: %.2f\n", admission_fee);
    printf("Days of admission: %d\n", days_admitted);
    printf("Bed Fees: %.2f\n", bed_fee);
    printf("Total Bill: UGX %.2f\n", total_bill);

    return 0;
}
