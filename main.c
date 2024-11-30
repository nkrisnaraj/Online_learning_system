#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>
#include <unistd.h>
#include"project-OLS.h"

int main()
{

     logo();
     menu();
     getDetails();
     afterReg();

    return 0;
}
void logo()
{
    system("cls");
    system("color B");
  char text[] = "\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n\t\tWelcome to our Online Lerning System..!!!\n\n\n\t\t\t\t                             *******            \n\t\t\t\t                            *  ***  *                \n\t\t\t\t                          *  *******  *            \n\t\t\t\t                 :       *  *********  *           \n\t\t\t\t               :::         *  *****  *                \n\t\t\t\t              :::::           *****                   \n\t\t\t\t              ::::::         *******                  \n\t\t\t\t               ::::::       *********                  \n\t\t\t\t                ::::::     ***********                 \n\t\t\t\t                 ::::::   *************                 \n\t\t\t\t                  :::::: ***************                \n\t\t\t\t                  ::::: *****************                \n\t\t\t\t                  :::: *******************              \n\t\t\t\t                  ::: **         **********             \n\t\t\t\t    ********  *** :: *  ******** ***********             \n\t\t\t\t    ********  ***   **  ******** ************            \n\t\t\t\t    ***  ***  ***  **** ***      *************            \n\t\t\t\t    ***  ***  *** ***** ******** **************           \n\t\t\t\t    ***  ***  *** ***** ******** ***************          \n\t\t\t\t    ***  ***  ***            *** ****************          \n\t\t\t\t    ********  ********  ******** *****************          \n\t\t\t\t    ********  ********  ******** ******************        \n\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\t\t\t                              ::::::::::                         \n\t\t\t                                ::::::::                           \n\t\t\t                                 :::::::                                 \n\t\t\t                                   :::::                            \n\t\t\t                                    :::                             \n\t\t\t                                    ::                                \n\t\t\t                                    :                                 \n\t\t\t \n\t\t\t                                                             \n                                                          \n\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n                                                           \n                                                            \n";


  int length = strlen(text);
  int i;
  for (i = 0; i < length; i++) {
    printf("%c", text[i]);
    usleep(10);
  }

  /*system("color B");
    printf("\t");
    for(int i=1;i<53;i++)
    {
        printf("::");
        usleep(25000);

    }
    char text[]="\n\n\t\tWelcome to our Online Lerning System..!!!\n\n\n";
    int length =strlen(text);
    for(int i=0;i<length;i++)
    {
        printf("%c",text[i]);
        usleep(25000);
    }
     //printf("\n\n\t\tWelcome to our Online Lerning System..!!!\n\n\n");
     usleep(50000);
     printf("\t\t\t\t                             *******            \n");
     usleep(50000);
     printf("\t\t\t\t                            *  ***  *                \n");
     usleep(50000);
     printf("\t\t\t\t                           *  *****  *              \n");
     usleep(50000);
     printf("\t\t\t\t                          *  *******  *            \n");
     usleep(50000);
     printf("\t\t\t\t                 :       *  *********  *           \n");
     usleep(50000);
     printf("\t\t\t\t                ::        *  *******  *              \n");
     usleep(50000);
     printf("\t\t\t\t               :::         *  *****  *                \n");
     usleep(50000);
     printf("\t\t\t\t              ::::          *  ***  *                 \n");
     usleep(50000);
     printf("\t\t\t\t              :::::           *****                   \n");
     usleep(50000);
     printf("\t\t\t\t              ::::::         *******                  \n");
     usleep(50000);
     printf("\t\t\t\t               ::::::       *********                  \n");
     usleep(50000);
     printf("\t\t\t\t                ::::::     ***********                 \n");
     usleep(50000);
     printf("\t\t\t\t                 ::::::   *************                 \n");
     usleep(50000);
     printf("\t\t\t\t                  :::::: ***************                \n");
     usleep(50000);
     printf("\t\t\t\t                  ::::: *****************                \n");
     usleep(50000);
     printf("\t\t\t\t                  :::: *******************              \n");
     usleep(50000);
     printf("\t\t\t\t                  ::: **         **********             \n");
     usleep(50000);
     printf("\t\t\t\t    ********  *** :: *  ******** ***********             \n");
     usleep(50000);
     printf("\t\t\t\t    ********  ***   **  ******** ************            \n");
     usleep(50000);
     printf("\t\t\t\t    ***  ***  ***  **** ***      *************            \n");
     usleep(50000);
     printf("\t\t\t\t    ***  ***  *** ***** ******** **************           \n");
     usleep(50000);
     printf("\t\t\t\t    ***  ***  *** ***** ******** ***************          \n");
     usleep(50000);
     printf("\t\t\t\t    ***  ***  ***            *** ****************          \n");
     usleep(50000);
     printf("\t\t\t\t    ********  ********  ******** *****************          \n");
     usleep(50000);
     printf("\t\t\t\t    ********  ********  ******** ******************        \n");
     usleep(50000);
     printf("\t\t\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     usleep(50000);
     printf("\t\t\t                              ::::::::::                         \n");
     usleep(50000);
     printf("\t\t\t                                ::::::::                           \n");
     usleep(50000);
     printf("\t\t\t                                 :::::::                                 \n");
     usleep(50000);
     printf("\t\t\t                                   :::::                            \n");
     usleep(50000);
     printf("\t\t\t                                    :::                             \n");
     usleep(50000);
     usleep(50000);
     printf("\t\t\t                                    ::                                \n");
     usleep(50000);
     printf("\t\t\t                                    :                                 \n\n\n\t");
     usleep(50000);
     for(int i=1;i<53;i++)
    {
        printf("::");
        usleep(50000);
    }
    */

  getch();
}


