#include<stdio.h>
#include<conio.h>
/*****************************************************
* Author : Sanjay Jangali
* Purpose : To read two numbers from user and print sum and average
******************************************************/
void main()
{
    int fn, sn, sum;
    float average;

    //Read values from user
    printf("Enter first number:");
    scanf("%d",&fn);
    printf("Enter second number:");
    scanf("%d",&sn);

    //Logic
    sum=fn+sn;
    average=sum/2.0;

    printf("Sum = %d, Average=%f",sum,average);
    getch();
}
