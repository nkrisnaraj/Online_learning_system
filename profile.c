#include<stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>
#include <unistd.h>
#include"project-OLS.h"

char email[100],gmail[100],m[100];
char filename3[100];
int i;
char lname[100],bdate[100],nicnum[100],phoneno[50],Course[100];
void profile()
 {
    FILE *fp;
    printf("\n\t\t\t\t\t==============**** MY PROFILE ****===============\n\n\n\t\t");
    for(i=0;i<=30;i++)
    {
        printf("|=|");
    }

    strcpy(filename3,filename);
    fp = fopen(strcat(filename3,".txt"),"r");

    fscanf(fp,"%s %s %s %s %s %s %s",&fname,&lname,&email,&bdate,&nicnum,&phoneno,&Course);

    printf("\n\n\t\t\t\tFirst name     : %s\n\n",fname);
    printf("\t\t\t\tLast name      : %s\n\n",lname);
    printf("\t\t\t\tE-mail         : %s\n\n",email);
    printf("\t\t\t\tDate of birth  : %s\n\n",bdate);
    printf("\t\t\t\tNIC number     : %s\n\n",nicnum);
    printf("\t\t\t\tMobile number  : %s\n\n",phoneno);
    printf("\t\t\t\tYour Degree    : %s\n\n\t\t",Course);

    for(i=0;i<=30;i++)
    {
        printf("|=|");
    }
    fclose(fp);
    printf("\n\n\t\t\t1. Update your profile ");
    printf("\n\t\t\t2. Back ");
    int choice;
    printf("\n\t\t Choose Your option : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("cls");
        getDetails();
        mainMenu();
        break;
    case 2:
        system("cls");
        mainMenu();
        break;
    default:
        system("cls");
        system("color c");
        printf("\n\n\n\n\n\n\n\t\tSomething went wrong!..............");
        getch();
        system("cls");
        system("color b");
        Title();
        profile();

    }
    printf("\n\n\n\n\n");
    getch();
}

void getDetails()
{
    system("color B");
    Title();
    printf("\t\t");
            for(int j=1;j<45;j++)
            {
                printf("--");
            }
            printf("\n\t\t\t\t\t\t  *-*-*-* Profile Details *-*-*-*\n\t\t");
            for(int j=1;j<45;j++)
            {
                printf("--");
            };
    printf("\n\n\t\tEnter your First name      : ");
    scanf("%s",fname);
    printf("\n\t\tEnter your last name       : ");
    scanf("%s",lname);
    printf("\n\t\tEnter your e-mail address  : ");
    scanf("%s",email);
    printf("\n\t\tEnter your date of birth   : ");
    scanf("%s",bdate);
    printf("\n\t\tEnter your NIC number      : ");
    scanf("%s",nicnum);
    printf("\n\t\tEnter your Phone number    : ");
    scanf("%s",phoneno);
    printf("\n\t\tEnter your Degree of study : ");
    scanf("%s",Course);
    printf("\n\n\n\n");
    system("cls");
    mailChecker();
    FILE *fp;
    strcpy(filename3,filename);
    fp = fopen(strcat(filename3,".txt"),"w");
        fprintf(fp,"%s %s %s %s %s %s %s",fname,lname,email,bdate,nicnum,phoneno,Course);
     fclose(fp);
    printf("\n");
}
void mailChecker()
{
    int stl,y,check1=0,check2=0;
mailchecker:
    strcpy(m,email);
        stl=strlen(m); // stl=string length
           for(y=1;y<stl-10;y++)
           {
            if(m[y]==' ')
            check1=1;
            if(m[y]>=65&&m[y]<=90)
            check1=1;
           }
           if(m[stl-10]=='@')
           {
               check2=1;
           }
            if(check1==0&&check2==1)//@gmail.com
            {
             if(m[stl-4]!='.'||m[stl-3]!='c'||m[stl-2]!='o'||m[stl-1]!='m')
             {
               check2=0;
             }

             if(m[stl-10]!='@'||m[stl-9]!='g'||m[stl-8]!='m'||m[stl-7]!='a'||m[stl-6]!='i'||m[stl-5]!='l')
                {
                    check2=0;
                }
            }
         if(check1==1||check2==0)
         {
            system("cls");
            system("color c");
            Title();
            printf("\n\n\t\tThis is not a valid email id. Email id regard should be abcd@gmail.com\n\n\n\n");
            for(int i=1;i<53;i++)
               {
                   printf("::");
               }
            getch();
            system("cls");
            system("color B");

            printf("\n\n\n\n\n\t\t\tEnter your mail address : ");
            gets(gmail);
            strcpy(email,gmail);

            goto mailchecker;
         }
}
