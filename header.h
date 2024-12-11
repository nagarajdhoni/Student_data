
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
    int rollno;
    char name[20];
    float percentage;
    struct student *next;
} SLL;


extern SLL *head;

extern void addStudent();
extern void modifyStudent();
extern void showStudent();
extern void deleteRollNo();
extern void deleteName();
extern void deleteAllRecords();
extern void reverseList();
extern void sortList();
extern int countStudent();
extern void saveStudent();

