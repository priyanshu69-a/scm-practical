// john saves a certain amount of money every day , which increases by incremental amount each day . write a program to calculate the total savings after n days.
#include<stdio.h>
int main() {
    int start_amount, increment, days;
    int total = 0;
    
    printf("Enter the starting amount saved on day 1: ");
    scanf("%d", &start_amount);
    printf("Enter the incremental amount per day: ");
    scanf("%d", &increment);
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    for (int day = 0; day < days; day++) {
        total += start_amount + (day * increment);
    }
    
    printf("Total savings after %d days: %d\n", days, total);
    return 0;
}
