#include<stdio.h>
#include "inc\calculator.h"

int main()
{
int choice;
printf("Enter your choice");
scanf("%d", &choice);

switch(choice)
{
case 1:
{   
    int num1, num2;
    printf("Enter first number ");
    scanf("%d", &num1);
    printf("Enter second number ");
    scanf("%d", &num2);
    printf("Sum is: %d", add(num1,num2));

    break;
}

}
}