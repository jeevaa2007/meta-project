#include <stdio.h>

int main() {
    int customer_id;
    char customer_name[50];
    float units_consumed, total_bill, surcharge;

    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter Customer Name: ");
    scanf("%s", customer_name);

    printf("Enter Units Consumed: ");
    scanf("%f", &units_consumed);

    if (units_consumed <= 199) {
        total_bill = units_consumed * 1.20;
    } else if (units_consumed >= 399) {
        total_bill = units_consumed * 1.50;
    } else if (units_consumed >= 599 ) {
        total_bill = units_consumed * 1.80;
    } else {
        total_bill = units_consumed * 2.00;
    }

    if (total_bill > 400) {
        surcharge = total_bill * 0.15;
        total_bill += surcharge;
    }

    if (total_bill < 100) {
        total_bill = 100;
    }

    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %.2f\n", units_consumed);
    printf("Total Bill: Rs. %.2f\n", total_bill);

    return 0;
}
