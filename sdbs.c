#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void delay(int sec)
{
    int mil_sec = 1000*sec;
    clock_t start_time = clock();
    while(clock() < start_time + mil_sec);

}

struct student
{
    long reg_no;
    char *name;
    float cgpa;
    long contact;
    char *email;
    char *course;
    char *stream;
    struct student *next;
}*s;

int main()
{
typedef struct student stu;
int choice;
printf("\t \t   Welcome to Student Database System\n\n\n");
printf("\nEnter 1 to Enter Details!\n");
printf("\nEnter 2 to Find Your Details\n");
printf("\nEnter 3 to Edit Your Details\n");
printf("\nEnter 4 to Delete Your Details\n");
printf("\nEnter 5 to See Complete Class List\n");
printf("\nEnter 6 to Exit Application\n");
scanf("%d", &choice);
switch(choice)
{
    case 1:
    //INPUT Functionality

    //Create Node
    s = (stu*)malloc(sizeof(stu));
    printf("\n\t \t \tEnter Your Details: ");
    printf("\nEnter Name: ");
    scanf("%s", &s->name);
    printf("\nEnter Email: ");
    scanf("%s", &s->email);
    printf("\nEnter Course: ");
    scanf("%s", &s->course);
    printf("\nEnter Stream: ");
    scanf("%s", &s->stream);
    printf("Enter Cgpa: ");
    scanf("%f", &s->cgpa);
      printf("\nEnter Registration Number: ");
    scanf("%ld", &s->reg_no);
    printf("\nEnter Contact: ");
    scanf("%ld", &s->contact);
    s->next = NULL;

    case 2:
    //Search Feature

    case 3:
    //Edit Feature

    case 4:
    //Delete Feature

    case 5:
    //Display Details only NAME AND REGISTRATION of complete database

    case 6:
        printf("\n\nExiting.....!");
        delay(200);
        exit(0);
}

}
