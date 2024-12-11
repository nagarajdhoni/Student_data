#include"header.h"

void addStudent(){
    SLL *new=(SLL *)malloc(sizeof(SLL));
    printf("\nEnter ROllno, Name and Percentage of new Student: ");
    scanf("%d %s %f",&new->rollno,new->name,&new->percentage);

    if(head==NULL|| head->rollno>new->rollno){
        new->next=head;
        head=new;
    }else{
        SLL *ptr=head;

        while(ptr->next!=NULL && ptr->next->rollno<new->rollno){
            ptr=ptr->next;
        }
        if(ptr->rollno==new->rollno){
                printf("This RollNo already exist");
                free(new);
                return;
            }
        new->next=ptr->next;
        ptr->next=new;
    }   
    printf("\nStudent data added successfully");
}

// Modify student details
void modifyStudent() {
    int rollno;
    printf("Enter the RollNo to modify: ");
    scanf("%d", &rollno);

    SLL *ptr = head;
    while (ptr != NULL && ptr->rollno != rollno) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Record with RollNo %d not found.\n", rollno);
        return;
    }

    printf("Enter new Name (max 19 chars) and Percentage: ");
    scanf("%19s %f", ptr->name, &ptr->percentage);

    printf("Record modified successfully.\n");
}

// Count students
int countStudent() {
    int count = 0;
    SLL *ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    return count;
}

void sortList(){
    SLL *p1,*p2,temp;
    int count=countStudent();
    for(int i=1;i<count;i++){
        p1=head;
        for(int j=i+1;j<count;j++){
            p2=p1->next;
            if(p2->rollno<p1->rollno){
                temp.rollno=p1->rollno;
                strcpy(temp.name,p1->name);
                temp.percentage=p1->percentage;

                p1->rollno=p2->rollno;
                strcpy(p1->name,p2->name);
                p1->percentage=p2->percentage;

                p2->rollno=temp.rollno;
                strcpy(p2->name,temp.name);
                p2->percentage=temp.percentage;
            }
            p1=p1->next;
        }
    }
    printf("\nList sorted successfully");
}

// Reverse the list
void reverseList() {
    SLL *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;

    printf("List reversed successfully.\n");
}
