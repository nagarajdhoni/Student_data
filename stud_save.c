#include"header.h"

// Save records to file
void saveStudent() {
    FILE *fp = fopen("student.data", "w");
    if (fp == NULL) {
        printf("Unable to open the file.\n");
        return;
    }

    SLL *ptr = head;
    while (ptr != NULL) {
        fprintf(fp, "%d %s %.2f\n", ptr->rollno, ptr->name, ptr->percentage);
        ptr = ptr->next;
    }

    fclose(fp);
    printf("Records saved successfully.\n");
}
