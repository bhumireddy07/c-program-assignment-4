#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
     int  b_no;
     char b_name[40];
     char b_author[40];
     int  no_pages;
};
int main()
{
     struct book b[20];
     int    ch,n,i,count = 0;
     char   temp[40];
     do
     {
          printf("\t\tMENU");
          printf("\n-------------------------------------\n");
          printf("PRESS 1.TO ADD BOOK DETAILS.");
          printf("\nPRESS 2.TO DISPLAY BOOK DETAILS.");
          printf("\nPRESS 3.TO DISPLAY BOOK OF GIVEN AUTHOR.");
          printf("\nPRESS 4.TO COUNT NUMBER OF BOOKS.");
          printf("\nPRESS 5.TO EXIT.");
          printf("\n-------------------------------------\n");
          printf("Enter Your Choice: ");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1:
                    printf("\nHow Many Records You Want to Add: ");
                    scanf("%d",&n);
                    printf("-------------------------------------\n");
                    printf("Add Details of %d Book\n",n);
                    printf("-------------------------------------\n");
                    for(i = 0 ; i < n ; i++)
                    {
                         printf("Enter Book No.     : ");
                         scanf("%d",&b[i].b_no);
                         printf("Book Name          : ");
                         scanf("%s",b[i].b_name);
                         printf("Enter Author Name  : ");
                         scanf("%s",b[i].b_author);
                         printf("Enter No. of Pages : ");
                         scanf("%d",&b[i].no_pages);
                         printf("-------------------------------------\n");
                    }
                    break;
               case 2:
                    printf("\n\t\tDetails of All Book");
                    printf("\n-----------------------------------------------------------\n");
                    printf("Book No.   Book Name\t  Author Name\tNo. of Pages");
