#include<stdio.h>
#include<conio.h>
/*********************************************************
Author : Sanjay Jangali
Purpose: To read name from user and print it
**********************************************************/
void main()
{
    char name[30];
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Hi %s, Welcome to C-Programming",name);
    getch();
}
