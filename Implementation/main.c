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
    add(5, 6);
    break;
}

}
}