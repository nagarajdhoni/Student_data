#include"header.h"

// Show all students

void showStudent() {
    if (head == NULL) {
        printf("No records found.\n");
        return;
    }

    SLL *ptr = head;
    while (ptr != NULL) {
        printf("\nRollNo: %d\nName: %s\nPercentage: %.2f\n", ptr->rollno, ptr->name, ptr->percentage);
        ptr = ptr->next;
    }
}