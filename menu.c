#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdbool.h>
#include <unistd.h>
#include"project-OLS.h"

char lname[100],bdate[100],nicnum[100],phoneno[50],Course[100];
char email[100],gmail[100],m[100];
int c1,c2,c4,c3,c5;

//char username[100],username1[50];
void mainMenu()
{
    c1=0;
    c2=0;
    c3=0;
    c4=0;
    c5=0;

    FILE *fp;
    system("cls");
    system("color B");
    Title();
    char filename3[100];
    strcpy(filename3,filename);
    fp = fopen(strcat(filename3,".txt"),"r");
    if(fp==NULL)
    {
        system("cls");
        getDetails();
    }
    fscanf(fp,"%s %s %s %s %s %s",&fname,&lname,&email,&bdate,&nicnum,&phoneno,&Course);


   printf("\t\tWelcome !!!! %s \n\n\n",fname) ;
   printf("\t\t\t1.Course Details \n");
   printf("\t\t\t2.Profile Details \n");
   printf("\t\t\t3.Logout \n");
   printf("\t\t\t4.Close Application \n");
   printf("\n\t\tEnter Your option : ");
   int n;
   scanf("%d",&n);

   switch(n)
   {
   case 1 :
        system("cls");
        Title();
        courseDetails();
        getch();
        mainMenu();

   case 2:
        system("cls");
        Title();
        profile();
        mainMenu();

   case 3:
        menu();
   case 4:
        endPage();
        exit(0);
   default:
    mainMenu();

   }

fclose(fp);
}
void addToCard()
{
    printf("\n\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n \t\t||\t\tAdd to card\t\t\t||\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
}

void courseDetails()
{
    int b,c;
    char filename3[100];
    system("cls");
    Title();
    system("color B");
            FILE *fp;
            strcpy(filename3,filename2);
                fp=fopen(strcat(filename3,".txt"),"r");//
                fscanf(fp,"%d %d %d %d %d",&c1,&c2,&c3,&c4,&c5);
                fclose(fp);
    printf("\n\n\t\t\t\t\t*-*-*-*-*-* Course Details *-*-*-*-*-*\n\n\n");
    printf("\t\t01. Complete Machine Learning & Data Science \n");
    printf("\t\t02. Python Django - Complete Course \n");
    printf("\t\t03. Javascript for Beginners\n");
    printf("\t\t04. PHP with Laravel for beginners\n");
    printf("\t\t05. Learn Advanced C++ Programming\n");
    printf("\t\t06. Back\n");
    printf("\t\t07. Close Application\n");
    printf("\n\tChoose Your Option : ");
    scanf("%d",&b);
    switch(b)
        {
        case 1:
            system("cls");

            if(c1==0)
            {
                goto MachineLearning;
            }
            else
            {
                system("cls");
                system("color A");
                printf("\n\n\n\n\n\n\n\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                printf("\n \t\t\t||\t\tYou Can Access Now !\t\t||\n\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                getch();
                system("cls");
                system("color E");
                mainMenu();

            }
        case 2:
            system("cls");
            if(c2==0)
            {
                goto PythonDjango;
            }
            else
            {
                system("cls");
                system("color A");
                printf("\n\n\n\n\n\n\n\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                printf("\n \t\t\t||\t\tYou Can Access Now !\t\t||\n\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                getch();
                system("cls");
                system("color E");
                mainMenu();
            }
        case 3:
            system("cls");
            if(c3==0)
            {
                goto JavascriptForBeginners;
            }
            else
            {
                system("cls");
                system("color A");
                printf("\n\n\n\n\n\n\n\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                printf("\n \t\t\t||\t\tYou Can Access Now !\t\t||\n\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                getch();
                system("cls");
                system("color E");
                mainMenu();
            }
        case 4:
            system("cls");
            if(c4==0)
            {
                goto php;
            }
            else
            {
                system("cls");
                system("color A");
                printf("\n\n\n\n\n\n\n\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                printf("\n \t\t\t||\t\tYou Can Access Now !\t\t||\n\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                getch();
                system("cls");
                system("color E");
                mainMenu();
            }
        case 5:
            system("cls");

            if(c5==0)
            {
                goto learnC;
            }
            else
            {
                system("cls");
                system("color A");
                printf("\n\n\n\n\n\n\n\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                printf("\n \t\t||\t\t\tYou Can Access Now !\t\t||\n\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                getch();
                system("cls");
                system("color E");
                mainMenu();

            }
        case 6:
              mainMenu();
        case 7:
            endPage();
            exit(0);
        default:
            system("cls");
            system("color C");
            printf("\n\n\n\n\n\n\n\t\t\t\tSomething Went Wrong.........\n\n");
            getch();
            system("cls");
            system("color B");
            mainMenu();

        }
    php:
        system("cls");
        Title();
        printf("\n\n\t\t*=*=*=*=*=* PHP with Laravel for beginners *=*=*=*=*=*\n\n\n");
        printf("\t|*|This course includes:\n");
        printf("\t\t- 43 hours on-demand video\n\t\t- 19 articles\n\t\t- 32 downloadable resources");
        printf("\n\t\t- Full lifetime access\n\t\t- Access on mobile and TV\n\t\t- Certificate of completion");
        addToCard();
        printf("\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n \t\t||\tSPECIAL OFFER \t|||||\t RS.2999/=\t||\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n\n\t\t01. Pay Now");
        printf("\n\t\t02. Cancel");
        printf("\n\n\tChoose Your Option : ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            system("cls");
            Title();
            printf("\n\n\t\t*=*=*=*=*=* PHP with Laravel for beginners *=*=*=*=*=*\n\n\n");
            printf("\n\n\t\tCourse Fees : RS. 2499.00\n\n\n");
            paymentDetails();
            c4=2499;
            FILE *fp;
            strcpy(filename3,filename2);
            fp = fopen(strcat(filename3,".txt"),"w");
            fprintf(fp,"%d %d %d %d %d",c1,c2,c3,c4,c5);
            fclose(fp);
            courseDetails();
            break;
        case 2:
            courseDetails();
            break;
        default:
            system("cls");
            system("color C");
            printf("\n\n\n\n\n\n\n\t\t\t\tSomething Went Wrong.........\n\n");
            getch();
            system("cls");
            system("color B");
            goto php;
        }
    MachineLearning:
        system("cls");
        Title();
        printf("\t\t*=*=*=*=*=* Complete Machine Learning & Data Science *=*=*=*=*=*\n\n\n");
        printf("\t|*|This course includes:\n");
        printf("\t\t- 43.5 hours on-demand video\n\t\t- 55 articles\n\t\t- 14 downloadable resources\n\t\t- 1 coding exercise");
        printf("\n\t\t- Full lifetime access\n\t\t- Access on mobile and TV\n\t\t- Certificate of completion");
        addToCard();
        printf("\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n \t\t||\tSPECIAL OFFER \t|||||\t RS.2999/=\t||\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n\n\t\t01. Pay Now");
        printf("\n\t\t02. Cancel");
        printf("\n\n\tChoose Your Option : ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            system("cls");
            Title();
            printf("\t\t*=*=*=*=*=* Complete Machine Learning & Data Science *=*=*=*=*=*\n\n\n");
            printf("\n\n\t\tCourse Fees : RS. 2999.00\n\n\n");
            paymentDetails();
            c1=2999;
            FILE *fp;
            strcpy(filename3,filename2);//krisnapayment
            fp = fopen(strcat(filename3,".txt"),"w");//krisnapayment.txt.txt
            fprintf(fp,"%d %d %d %d %d",c1,c2,c3,c4,c5);
            fclose(fp);
            courseDetails();
            break;
        case 2:
            courseDetails();
            break;
        default:
            system("cls");
            system("color C");
            printf("\n\n\n\n\n\n\n\t\t\t\tSomething Went Wrong.........\n\n");
            getch();
            system("cls");
            system("color B");
            goto MachineLearning;

        }
    learnC:
        system("cls");
        Title();
        printf("\t\t*=*=*=*=*=* Programing Language C *=*=*=*=*=*\n\n\n");
        printf("\t|*|This course includes:\n");
        printf("\t\t- 43.5 hours on-demand video\n\t\t- 55 articles\n\t\t- 14 downloadable resources\n\t\t- 1 coding exercise");
        printf("\n\t\t- Full lifetime access\n\t\t- Access on mobile and TV\n\t\t- Certificate of completion");
        addToCard();
        printf("\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n \t\t||\tSPECIAL OFFER \t|||||\t RS.2999/=\t||\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n\n\t\t01. Pay Now");
        printf("\n\t\t02. Cancel");
        printf("\n\n\tChoose Your Option : ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            system("cls");
            Title();
            printf("\t\t*=*=*=*=*=* Programing Language C *=*=*=*=*=*\n\n\n");
            printf("\n\n\t\tCourse Fees : RS. 2999.00\n\n\n");
            paymentDetails();
            c5=1999;
            FILE *fp;
            strcpy(filename3,filename2);
            fp = fopen(strcat(filename3,".txt"),"w");
            fprintf(fp,"%d %d %d %d %d",c1,c2,c3,c4,c5);
            fclose(fp);
            courseDetails();
            break;
        case 2:
            courseDetails();
            break;
        default:
            system("cls");
            system("color C");
            printf("\n\n\n\n\n\n\n\t\t\t\tSomething Went Wrong.........\n\n");
            getch();
            system("cls");
            system("color B");
            goto learnC;

        }
    PythonDjango:
        system("cls");
        Title();
        printf("\t\t*=*=*=*=*=* Python Django - Complete Course *=*=*=*=*=*\n\n\n");
        printf("\t|*|This course includes:\n");
        printf("\t\t- 18.5 hours on-demand video\n\t\t- 1 downloadable resources");
        printf("\n\t\t- Full lifetime access\n\t\t- Access on mobile and TV\n\t\t- Certificate of completion");
        addToCard();
        printf("\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n \t\t||\tSPECIAL OFFER \t|||||\t RS.3499/=\t||\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n\n\t\t01. Pay Now");
        printf("\n\t\t02. Cancel");
        printf("\n\n\tChoose Your Option : ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            system("cls");
            Title();
            printf("\t\t*=*=*=*=*=* Python Django - Complete Course *=*=*=*=*=*\n\n\n");
            printf("\n\n\t\tCourse Fees : RS. 3499.00\n\n\n");
            paymentDetails();
            c2=3499;
            FILE *fp;
            strcpy(filename3,filename2);
            fp = fopen(strcat(filename3,".txt"),"w");
            fprintf(fp,"%d %d %d %d %d",c1,c2,c3,c4,c5);
            fclose(fp);
            courseDetails();
            break;
        case 2:
            courseDetails();
            break;
        default:
            system("cls");
            system("color C");
            printf("\n\n\n\n\n\n\n\t\t\t\tSomething Went Wrong.........\n\n");
            getch();
            system("cls");
            system("color B");
            goto PythonDjango;

        }
    JavascriptForBeginners:
        system("cls");
        Title();
        printf("\t\t*=*=*=*=*=* Javascript For Beginners *=*=*=*=*=*\n\n\n");
        printf("\t|*|This course includes:\n");
        printf("\t\t- 7 hours on-demand video\n\t\t-25 downloadable resources\n\t\t- 6 coding exercise");
        printf("\n\t\t- Full lifetime access\n\t\t- Access on mobile and TV\n\t\t- Certificate of completion");
        addToCard();
        printf("\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n \t\t||\tSPECIAL OFFER \t|||||\t RS.1999/=\t||\n\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n\n\t\t01. Pay Now");
        printf("\n\t\t02. Cancel");
        printf("\n\n\tChoose Your Option : ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            system("cls");
            Title();
            printf("\t\t*=*=*=*=*=* Javascript For Beginners *=*=*=*=*=*\n\n\n");
            printf("\n\n\t\tCourse Fees : RS. 1999.00\n\n\n");
            paymentDetails();
            c3=1999;
            FILE *fp;
            fp = fopen(strcat(filename2,".txt"),"w");
            fprintf(fp,"%d %d %d %d %d",c1,c2,c3,c4,c5);
            fclose(fp);
            courseDetails();
            break;
        case 2:
            courseDetails();
            break;
        default:
            system("cls");
            system("color C");
            printf("\n\n\n\n\n\n\n\t\t\t\tSomething Went Wrong.........\n\n");
            getch();
            system("cls");
            system("color B");
            goto JavascriptForBeginners;

        }



}
void paymentDetails()
{
    char chname[50];
    int cnum,cvv;
    int n;
    printf("\t\t\t****Credit/Debit Card Details : \n\n\t");
    printf("\t\tCard Holder Name : ");
    scanf("%s",&chname);
    printf("\t\t\tCard Number  \t: ");
    scanf("%d",&cnum);
    printf("\t\t\tCVV\t\t : ");
    scanf("%d",&cvv);
    option:
    printf("\n\n\t\t\t01.Continue \t02.Cancel");
    printf("\n\n\t\tChoose Your Option : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        system("cls");
        system("color A");
        printf("\n\n\n\n\n\t\t\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n \t\t\t\t||\t\tPAYMENT SUCCESSFUL !\t\t||\n\t\t\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        getch();
        break;
    case 2:
        courseDetails();
    default:
            system("cls");
            system("color C");
            printf("\n\n\n\n\n\n\n\t\t\t\tSomething Went Wrong.........\n\n");
            getch();
            system("cls");
            system("color B");
        goto option;
    }
}
