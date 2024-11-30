#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdbool.h>
#include <unistd.h>
#include"project-OLS.h"

void Title(void)
{
    printf("\n\t\t\t\t\t\t********** Project OLS **********\n");
    printf("\t\t\t\t\t\t\t=================\n\t");
    for(int i=1;i<53;i++)
       {
           printf("::");
       }
    printf("\n\n\n");
}

void menu()
{
    system("cls");
    system("Color B");
    Title();
    int choose1;
    printf("\t\t\t1. LOGIN\n");
    printf("\t\t\t2. REGISTRATION\n");
    printf("\t\t\t3. Close Program\n\n");
    printf("\t\tEnter option  : ");
    scanf("%d", &choose1);
    switch(choose1)
    {
    case 1:
        system("cls");
        Login();
        break;
    case 2:
        system("cls");
        Registration();
        break;
    case 3:
        endPage();
        exit(0);
        break;
    default:
            system("cls");
            system("color C");
            printf("\n\n\n\n\n\n\n\t\t\t\tSomething Went Wrong.........\n\n");
            getch();
            system("cls");
            endPage();
            exit(1);
    }
}

bool Login_system()
{
    char username1[20];
    char us[20];
    char password1[20];
    char pa[20],ch;
    int y;
    Title();
    printf("\t\t");
    for(int j=1;j<45;j++)
    {
        printf("--");
    }
    printf("\n\t\t\t\t\t\t   Welcome to login page!\n\t\t");
    for(int j=1;j<45;j++)
    {
        printf("--");
    }
   // printf("\t\t-----------------------------\n");
    printf("\n\n\t\t\tUsername: ");
    fflush(stdin);
    gets(username1);//krisna
    printf("\n\t\t\tPassword [max length 8] : ");
    //scanf("%s",&password1);
    char c=' ';
        int i=0;
        while (i<8){
        password1[i]=getch();
        c=password1[i];
        if(c==13) break;
        else printf("*");
        i++;
        }
        password1[i]='\0';
        i=0;

    strcpy(user1, username1);//user1[50]='krisna'
    strcpy(filename,username1);
    strcpy(filename2,username1);
    strcat(filename,"details");
    strcat(filename2,"payement");

    FILE *pfile;

    pfile = fopen(strcat(user1,".txt"), "r");//user1[50]='krisna.txt'

    fscanf(pfile, "%s %s", &us, &pa);
    // us = username
    //pa = password
    //if(a==b)
    if(strcmp(username1,us)==0 && strcmp(password1,pa)==0)

        return true;
        else
        return false;
    fclose(pfile);
}

void Registration(void)
{
    char pa[20];
    char us[20];
    char np[20],cp[20],ch;
    system("cls");
    Title();
    char username[20], password[20];
    printf("\t\t");
    for(int j=1;j<45;j++)
    {
        printf("--");
    }
    printf("\n\t\t\t\t\t\t   Welcome to Registration page!\n\t\t");
    for(int j=1;j<45;j++)
    {
        printf("--");
    }
    printf("\n\n\t\t\tCreate the Username: ");
    fflush(stdin);
    scanf("%s", &username);
    strcpy(user1, username);

    FILE *pfile;

    pfile = fopen(strcat(user1,".txt"), "r");

    fscanf(pfile, "%s %s", &us, &pa);
     fclose(pfile);

    if(strcmp(username,us)!=0)
        {
          passwordChecker:
            system("cls");
            Title();
            system("color B");
           printf("\t\t");
            for(int j=1;j<45;j++)
            {
                printf("--");
            }
            printf("\n\t\t\t\t\t\t   Welcome to Registration page!\n\t\t");
            for(int j=1;j<45;j++)
            {
                printf("--");
            }
            printf("\n\n\t\t\tUsername: %s\n",username);
            printf("\n\t\t\tEnter new password [max length 8] : ");
                char c=' ';
                int i=0;
                while (i<8){
                np[i]=getch();
                c=np[i];
                if(c==13) break;
                else printf("*");
                i++;
                }
                np[i]='\0';
                i=0;
            printf("\n\t\t\tConfirm password[max length 8]   : ");
            //scanf("%s",&cp);
                char d=' ';
                int j=0;
                while (i<8){
                cp[j]=getch();
                d=cp[j];
                if(d==13) break;
                else printf("*");
                j++;
                }
                cp[j]='\0';
                j=0;

            if(strcmp(cp,np)==0)
            {
                strcpy(password,cp);
                char uuu[20];
                strcpy(uuu, username);

                FILE *pfile;
                pfile = fopen(strcat(uuu, ".txt"), "w");
                fflush(stdin);
                fprintf(pfile, "%s %s", username, password);
                fclose(pfile);
                system("cls");
                Title();
                system("color A");
                printf("\n\n\n\n\n\t\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                printf("\n\t\t\t\t||\tREGISTRATION SUCCESSFULLY....!\t\t||\n\t\t\t\t");
                for(int x=1;x<51;x++)
                {
                    printf("*");
                }
                printf("\n\n\n\n\n\n\n\t");
                for(int i=1;i<53;i++)
                {
                   printf("::");
                }
                strcpy(filename,username);
                strcpy(filename2,username);
                strcat(filename,"details");
                strcat(filename2,"payement");//krisnapayment
                getch();
                system("cls");

            }
            else
            {
                system("cls");
                Title();
                system("color E");
                printf("\t\t\tPassword Not Matched!!!! Try Again.....!\n\n\n\t");
                for(int i=1;i<53;i++)
                   {
                       printf("::");
                   }
                getch();
                system("cls");
                Title();
                system("color B");
                printf("\t\t\t1. Try again\n");
                printf("\t\t\t2. Main menu\n");
                printf("\t\t\t3. Close aplication \n");
                printf("\t\tEnter option: ");
                int n2;
                scanf("%d", &n2);
                switch(n2)
                {
                case 1:
                    goto passwordChecker;

                case 2:
                    system("cls");
                    Title();
                    menu();
                case 3:
                    endPage();
                    exit(0);
                }

            }

        }
        else
        {
        system("cls");
        Title();
        system("color c");
        printf("\n\n\n\n\t\t\tUsername is already exist.....!\n\n\n\n\n\n\t");
        for(int i=1;i<53;i++)
       {
           printf("::");
       }
        getch();
        reRegister();
        }





}
void reRegister(void)
{
        system("cls");
        Title();
        system("color B");
        printf("\n\n\t\t\t1. Try again\n");
        printf("\t\t\t2. Main menu\n");
        printf("\t\t\t3. close application\n");
        printf("\n\t\tEnter option: ");
        int n2;
        scanf("%d", &n2);
        switch(n2)
        {
        case 1:
            system("cls");
            Registration();
            break;

        case 2:
            system("cls");
            Title();
            menu();
            break;
        case 3:
            endPage();
            exit(0);
        }
}

void afterReg(void)
{
    system("cls");
    system("color B");
    Title();
    int choice;
    printf("\t\t\t1. Login\n");
    printf("\t\t\t2. Main Menu\n");
    printf("\t\t\nChoose your option : ");

    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        system("cls");
        Login();
        break;
    case 2:
        system("cls");
        menu();
        break;
    default:
        Title();
        printf("\n\n\t\t\tInvalid choice.....!\n\n");
        printf("\n\t\t\t1.Try Again");
        printf("\n\t\t\t2.Main Menu");
        printf("\n\n\t\tChoose your option : ");
        int n1;
        scanf("%d", &n1);
        switch(n1)
        {
        case 1:
            system("cls");
            afterReg();
            break;
        case 2:
            system("cls");
            menu();
        }
    }
}

void Login ()
{
    system("cls");
    bool condition = Login_system();
    if(condition){
        system("cls");
        Title();
        system("color A");
       // printf("\n\n\n\n\t\t\t\tLogin Successfully.......!!!!\n\n\n\n\n\n\t");
       printf("\n\n\n\n\n\t\t\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n\t\t\t\t||\t   LOGIN SUCCESSFULLY....!  \t\t||\n\t\t\t\t");
        for(int x=1;x<51;x++)
        {
            printf("*");
        }
        printf("\n\n\n\n\n\n\n\t");
        for(int i=1;i<53;i++)
       {
           printf("::");
       }
        getch();
        mainMenu();
        //exit(0);//we can use this place for go to next section in future.
    }else{
        system("cls");
        Title();
        system("color c");
        printf("\n\n\n\t\tInvalid username or password\n\n\n\n\t");
        for(int i=1;i<53;i++)
       {
           printf("::");
       }
        getch();
        reLogin();

    }
}
void reLogin(void)
{
        system("cls");
        Title();
        system("color B");
        printf("\n\t\t\t1. Try Again\n");
        printf("\t\t\t2. Main Menu\n");
        printf("\t\t\t3. Close Application\n\n");
        printf("\t\tEnter Option: ");
        int n2;
        scanf("%d", &n2);
        switch(n2)
        {
        case 1:
            system("cls");
            system("color B");
            Title();
            Login();
            break;
        case 2:
            system("cls");
            Title();
            menu();
            break;
        case 3:
            endPage();
            exit(0);
            break;
        }
}
void endPage(void)
{
   system("cls");
   system("color B");
       system("color B");
  char text[] = "\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n\t\t\tThanks for choose our application..!!\n\n\n\t\t\t\t\t                      :: ::\n\t\t\t\t\t                    :::: ::::\n\t\t\t\t\t                   ::::: :::::\n\t\t\t\t\t                  :::::: :::::\n\t\t\t\t\t                  :::::: ::::::\n\t\t\t\t\t                  :::::: ::::::\n\t\t\t\t\t                  :::::: ::::::\n\t\t\t\t\t                 *:::::: ::::::*\n\t\t\t\t\t               ***:::::: ::::::***\n\t\t\t\t\t           *******:::::   :::::*******\n\t\t\t\t\t  *****************:::     :::*****************\n\t\t\t\t\t  *******************       *******************\n\t\t\t\t\t  ********************     ********************\n\n\t\t\t\t******  **   **    *     **   **  **  *    *    *  ******  **   **\n\t\t\t\t  **    *******   * *    ***  **  ***       *  *   **  **  **   **\n\t\t\t\t  **    **   **  *****   ** * **  ***        **    **  **  **   **\n\t\t\t\t  **    **   ** *     *  **   **  **  *      **    ******  *******\n\n\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n";

  int length = strlen(text);
  int i;
  for (i = 0; i < length; i++) {
    printf("%c", text[i]);
    fflush(stdout);
    usleep(10);
  }

    /*printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n");
    usleep(50000);
    printf("\t\t\tThanks for choose our application..!!\n\n\n");
    usleep(50000);
    printf("\t\t\t\t\t                      :: ::\n");
    usleep(50000);
    printf("\t\t\t\t\t                    :::: ::::\n");
    usleep(50000);
    printf("\t\t\t\t\t                   ::::: :::::\n");
    usleep(50000);
    printf("\t\t\t\t\t                  :::::: :::::\n");
    usleep(50000);
    printf("\t\t\t\t\t                  :::::: ::::::\n");
    usleep(50000);
    printf("\t\t\t\t\t                  :::::: ::::::\n");
    usleep(50000);
    printf("\t\t\t\t\t                  :::::: ::::::\n");
    usleep(50000);
    printf("\t\t\t\t\t                 *:::::: ::::::*\n");
    usleep(50000);
    printf("\t\t\t\t\t               ***:::::: ::::::***\n");
    usleep(50000);
    printf("\t\t\t\t\t           *******:::::   :::::*******\n");
    usleep(50000);
    printf("\t\t\t\t\t  *****************:::     :::*****************\n
    usleep(50000);
    printf("\t\t\t\t\t  *******************       *******************\n");
    usleep(50000);
    printf("\t\t\t\t\t  ********************     ********************\n\n");
    usleep(50000);
    printf("\t\t\t\t******  **   **    *     **   **  **  *    *    *  ******  **   **\n");
    usleep(50000);
    printf("\t\t\t\t  **    *******   * *    ***  **  ***       *  *   **  **  **   **\n");
    usleep(50000);
    printf("\t\t\t\t  **    **   **  *****   ** * **  ***        **    **  **  **   **\n");
    usleep(50000);
    printf("\t\t\t\t  **    **   ** *     *  **   **  **  *      **    ******  *******\n\n");
    usleep(50000);
    printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\n");*/
}
