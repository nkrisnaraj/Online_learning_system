#ifndef PROJECT-OLS_H_INCLUDED
#define PROJECT-OLS_H_INCLUDED

void menu();
void afterReg();
void Login();
void Registration();
void Title();
void reRegister();
void reLogin();
void endPage();
void profile();
void getDetails();
void mailChecker();
void mainMenu();
struct profile{
    char fName[100];
    char lName[100];
    char eMail[100];
    char bDate[100];
    char numNIC[100];
    char course[100];
    char phone[100];
};
char user1[50];
char filename[50];
char fname[100];
char filename2[50];
void courseDetails();
void paymentDetails();
void addToCard();
void logo();

#endif // PROJECT-OLS_H_INCLUDED
