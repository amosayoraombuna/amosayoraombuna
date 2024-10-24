
#include<stdio.h>
int main() {
    int bookID, dueDate, returnDate, daysOverdue = 0;
    int fine = 0;
    
    // The user inputs
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter Due Date:");
    scanf("%d", &dueDate);
    
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);
    
    // Calculating the days overdue
    daysOverdue = returnDate - dueDate;

    
    if (daysOverdue <= 0) {
        daysOverdue = 0;
        fine = 0; }
     else {
        // Determining the fine based on the overdue days
        if (daysOverdue <= 7) {
            fine = daysOverdue * 20;
        } else if (daysOverdue <= 14) {
            fine = 7 * 20 + (daysOverdue - 7) * 50; 
        } else {
            fine = 7 * 20 + 7 * 50 + (daysOverdue - 14) * 100; 
        }
    }
    
    // Display of the results
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Total Fine: Ksh. %d\n", fine);
    
    return 0;
}



