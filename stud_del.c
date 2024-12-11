#include"header.h"

// Delete a student by RollNo
void deleteRollNo() {
    int rollno;
    printf("Enter RollNo to delete: ");
    scanf("%d", &rollno);

    SLL *ptr = head, *prev = NULL;
    while (ptr != NULL && ptr->rollno != rollno) {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Record not found.\n");
        return;
    }

    if (prev == NULL) {
        head = head->next;  // Deleting head node
    } else {
        prev->next = ptr->next;
    }

    free(ptr);
    printf("Record deleted successfully.\n");
}

// Delete a student by Name
void deleteName() {
    char name[20];
    printf("Enter Name to delete: ");
    scanf("%19s", name);

    SLL *ptr = head, *prev = NULL;
    while (ptr != NULL && strcmp(ptr->name, name) != 0) {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Record not found.\n");
        return;
    }

    if (prev == NULL) {
        head = head->next;  // Deleting head node
    } else {
        prev->next = ptr->next;
    }

    free(ptr);
    printf("Record deleted successfully.\n");
}

// Delete all records
void deleteAllRecords() {
    SLL *ptr = head;
    while (ptr != NULL) {
        SLL *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    head = NULL;
    printf("All records deleted successfully.\n");
}
