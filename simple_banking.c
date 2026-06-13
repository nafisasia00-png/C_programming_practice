#include <stdio.h>

int main() {
    float balance = 1000, amount;
    int choice;

    printf("1. Deposit\n2. Withdraw\n");
    scanf("%d", &choice);

    if(choice == 1) {
        scanf("%f", &amount);
        balance += amount;
    }
    else if(choice == 2) {
        scanf("%f", &amount);
        balance -= amount;
    }

    printf("Balance = %.2f\n", balance);

    return 0;
}
