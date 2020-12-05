#include<stdio.h>
#include "calculator.h"

int main()
{
int choice;
printf("Enter your choice ");
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
case 2:
{
 int num1, num2;
  printf("Enter first number ");
  scanf("%d", &num1);
  printf("Enter second number ");
  scanf("%d", &num2);
  printf("Difference is: %d",substract(num1,num2));
break;

}
case 3:
{
int num1, num2;
printf("Enter first number ");
scanf("%d", &num1);
printf("Enter second number ");
scanf("%d", &num2);
printf("Product is: %d",multiply(num1,num2));
break;
}
case 4:
{
    int num1, num2;
   printf("Enter first number:");
   scanf("%d", &num1);
   printf("Enter second number:");
   scanf("%d", &num2);
   printf("Result is: %d",divide(num1,num2));
   break;
}
case 5:
{
    int num;
    printf("Enter number ");
   scanf("%d", &num);
   printf("Square is: %d",square(num));

}
case 6:
{
{
int num;
printf("Enter number ");
scanf("%d", &num);
printf("Square root is: %d",sqarert(num));

} 
}
}
}
