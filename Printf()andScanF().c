#include<stdio.h>
#include<conio.h>
/******************************************************
* Author : Sanjay Jangali
* Purpose : To read two numbers from user and print sum and avarage
*******************************************************/

void main()
{
    int fn, sn, sum;
    float average;

    //read values from user
    printf("Enter first number:");
    scanf("%d",&fn);
    printf("Enter second Number:");
    scanf("%d",&sn);

    //logic
    sum=fn+sn;
    average=sum/2.0;

    printf("sum=%d, Average=%f",sum,average);
    getch();



}
