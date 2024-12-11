#include"header.h"

SLL *head=NULL;

int main() {
    char op, opdel, opext;
    while (1) {
        printf("\n****** STUDENT RECORD MENU ******\n"
               "a/A : Add new record\n"
               "d/D : Delete a record\n"
               "s/S : Show the list\n"
               "m/M : Modify a record\n"
               "v/V : Save\n"
               "e/E : Exit\n"
               "t/T : Sort the list\n"
               "l/L : Delete all the records\n"
               "r/R : Reverse the list\n\n"
               "Enter your choice: ");

        scanf(" %c", &op);  // Adding a space to consume any trailing newlines

        switch (op) {
            case 'a': case 'A':
                addStudent();
                break;
            case 'd': case 'D':
                printf("\nDelete based on:\nR/r : RollNo\nN/n : Name\nEnter choice: ");
                scanf(" %c", &opdel);
                switch (opdel) {
                    case 'R': case 'r':
                        deleteRollNo();
                        break;
                    case 'N': case 'n':
                        deleteName();
                        break;
                    default:
                        printf("Invalid choice.\n");
                }
                break;
            case 's': case 'S':
                showStudent();
                break;
            case 'm': case 'M':
                modifyStudent();
                break;
            case 'v': case 'V':
                saveStudent();
                break;
            case 'e': case 'E':
                printf("Save before exit? (s/S for save, e/E to exit): ");
                scanf(" %c", &opext);
                if (opext == 's' || opext == 'S') saveStudent();
                exit(0);
            case 't': case 'T':
                sortList();
                break;
            case 'l': case 'L':
                deleteAllRecords();
                break;
            case 'r': case 'R':
                reverseList();
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}
