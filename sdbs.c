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
    char name[20];
    float cgpa;
    long contact;
    char fathers_name[20];
    char course[10];
    char stream[10];
}s[60];

int main()
{

int choice;
printf("\t \t   Welcome to Student Database System\n\n\n");
printf("\nEnter 1 to Enter Details!\n");
printf("\nEnter 2 to Find Your Details\n");
printf("\nEnter 3 to Edit Your Details\n");
printf("\nEnter 4 to Delete Your Details\n");
printf("\nEnter 5 to Exit Application\n");
scanf("%d", &choice);
switch(choice)
{
    case 1:
    //INPUT Functionality

    case 2:
    //Search Feature

    case 3:
    //Edit Feature

    case 4:
    //Delete Feature

    case 5:
        printf("\n\nExiting.....!");
        delay(200);
        exit(0);



}

}
