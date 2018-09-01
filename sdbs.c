
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
    char name[10];
    float cgpa;
    long contact;
    char email[20];
    char course[20];
    char stream[20];
    struct student *next;
}*h=NULL,*s,*p;

void Create()
{
    typedef struct student stu;
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
    
    if(h==NULL)
    {
        h=s;
    }
    
    else
    {
       p=h;
       while(p!=NULL)
         {
             p=p->next;
         }
         p->next=s;
    }
}

void fdetails(long reg_no)
{
    struct student *p;
    p=h;
    if(p->next==NULL)
    {
        Search(p);
    }
   else
   {
       while(p->next!=NULL)
  {
      if(p->reg_no==reg_no)
        {
          Search(p);
        }
    
      else
      {
          p=p->next; 
      }
  }        
  }

  
}

void Search(struct student *k)
{
    
    
    printf("\n\t \t Your Details: ");
    printf("\n Name: ");
    printf("%s", k->name);
    printf("\n Email: ");
    printf("%s",k->email);
    printf("\n Course: ");
    printf("%s", k->course);
    printf("\n Stream: ");
    printf("%s", k->stream);
    printf(" Cgpa: ");
    printf("%f", k->cgpa);
    printf("\nRegistration Number: ");
    printf("%ld", k->reg_no);
    printf("\n Contact: ");
    printf("%ld", k->contact);
}


void Edit(long regno)
{
    struct student *p;
    p=h;

    int choice;
    printf("Select what you want to edit");
    printf("1.Email");
    printf("2.Contact");
    printf("3.Course");
    printf("4.Stream");
    printf("\t\n Enter your choice");
    scanf("%d", &choice);
     if(p->next==NULL)
    {
    
    switch(choice)
    {
        
        case 1: printf("Enter new email");
              scanf("%s", &p->email);
                break;
        case 2: printf("Enter new contact no");
                scanf("%ld",&p->contact);
                break;
        case 3: printf("Enter new Stream");
                scanf("%s",&p->stream);
                break;
        case 4: printf("Enter your new course"); 
                scanf("%s", &p->course);
                break;
        case 5: printf("\n\nExiting.....!");
                delay(200);
                exit(0);
        
    }
 }
else{
    
    
    while(p->reg_no!=regno)
   {
        p=p->next;
   }
    
    switch(choice)
     {
        
        case 1: printf("Enter new email");
                scanf("%s", &p->email);
                break;
        case 2: printf("Enter new contact no");
                scanf("%ld",&p->contact);
                break;
        case 3: printf("Enter new Stream");
                scanf("%s",&p->stream);
                break;
        case 4: printf("Enter your new course"); 
                scanf("%s", &p->course);
                break;
        case 5: printf("\n\nExiting.....!");
                delay(200);
                exit(0);
      }
    
    }
}
void delete(long regno)
{
    struct student *p;
    p=h;
    while(p->next->reg_no!=regno)
    {
        p=p->next;
    }
    
    struct student *s;
    s=p->next;
    p->next=p->next->next;
    s->next=NULL;
}

void Display()
{
    struct student *p;
    p=h;
    
    while(p->next!=NULL)
    {
        printf("\n Name: %s", p->name);
        printf("\n Registration number: %ld", p->reg_no);
        p=p->next;
    }
    
}
int main()
{

int choice;
long regno;
int k=1;
printf("\t \t   Welcome to Student Database System\n\n\n");
while(k){
printf("\nEnter your choice");    
printf("\nEnter 1 to Enter Details!\n");
printf("\nEnter 2 to Find Your Details\n");
printf("\nEnter 3 to Edit Your Details\n");
printf("\nEnter 4 to Delete Your Details\n");
printf("\nEnter 5 to See Complete Class List\n");
printf("\nEnter 6 to Exit Application\n");
printf("\t");
scanf("%d", &choice);
    
switch(choice)
 {
    case 1:
    //INPUT Functionality
          Create();
          break;
    //Create Node
    case 2:
    //Search Feature
          printf("Enter your Registration no");
          scanf("%ld", &regno);
          fdetails(regno);
          break;
    case 3:
    //Edit Feature
           printf("Enter your Registration no");
           scanf("%ld", &regno);
           Edit(regno);
           break;

    case 4:
    //Delete Feature
           printf("Enter your Registration no");
           scanf("%ld", &regno);
           delete(regno);
           break;
     case 5:
    //Display Details only NAME AND REGISTRATION of complete database
            Display();
            break;
    
    case 6:
        printf("\n\nExiting.....!");
        delay(200);
        exit(0);
 }
printf("Enter -1 to exit");
scanf("%d", &k);
if(k==-1)
return;
}

}
