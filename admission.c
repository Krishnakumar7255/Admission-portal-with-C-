//Admission portal
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct new
{
   int id;
   char name[50];
   int class;
   float fees;
}ad[100];
void menu();
void admiss();
void amount();
void see();
void coun();

int count=100;
float rev=0;
float fee;
int j=1,i;
int main()
{
    printf("\n-------Admission Portal-------\n");
   menu();
   return 0;
}

void menu()
{
    while(1)
    {
   int ch;
    printf("\n1 for Admission.\n");
    printf("2 for see Admission chart.\n");
    printf("3 for Count Admission.\n");
    printf("4 for see total fee reveneu.\n");
    printf("5 for Exit.\n");
    printf("Enter Any Option:- ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 : admiss(); 
        break;
    case 2 : see();
        break;    
     case 3: coun();
        break;
    case 4: amount();
        break;  
    case 5: exit(0);
        break;  
    default: printf("You press wrong option.");
        break;
    }
    }
}

 void admiss()
 {int n;
    while(j<=100)
    {
    printf("Id num:- ");
    n=rand()%100;
    printf("%d\n",n);
    ad[j].id=n;
   // scanf("%d",&);
    printf("Enter Name:- ");
  //  gets(ad[j].name);
    scanf("%s",&ad[j].name);
    printf("Enter class:- ");
    scanf("%d",&ad[j].class);
    printf("Enter fees:- ");
    scanf("%f",&ad[j].fees);
    fee+=ad[j].fees;
    //printf("Enter confirm fees:- ");
   // scanf("%f",&rev);
    j++;
    count--;
   
    menu();
    }
 }

 void see()
 {
    printf("Enter id number:- ");
    scanf("%d",&i);
    printf("\n");
    printf("Id number= %d\n",ad[i].id);
    printf("Name= %s\n",ad[i].name);
    printf("Class= %d\n",ad[i].class);
    menu();

 }

 void coun()
 {
    printf("Total admission is %d \n",j-1);
    printf("Total seat left is %d\n",count);
    menu();

 }

 void amount()
 {
    printf("Total amount revenue is %.2f\n",fee);
    menu();
 }