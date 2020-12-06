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
    float num1, num2;
   printf("Enter first number:");
   scanf("%f", &num1);
   printf("Enter second number:");
   scanf("%f", &num2);
   printf("Result is: %.2f",divide(num1,num2));
   break;
}
case 5:
{
    int num;
    printf("Enter number ");
   scanf("%d", &num);
   printf("Square is: %d",square(num));
   break;

}
case 6:
{
{
int num;
printf("Enter number ");
scanf("%d", &num);
printf("Square root is: %d",sqarert(num));
break;
} 
}
case 7:
{
    int num;
    printf("Enter temprature in celsuis ");
    scanf("%d", &num);
    printf("Temprature in Fahrenheit is: %d", ctof(num));
    break;

}
case 8:
{
    int num;
    printf("Enter temprature in Fahrenheit ");
    scanf("%d", &num);
    printf("Temprature in Degree is: %d", ftoc(num));
    break;
}
case 9:
{
    int num;
    printf("Enter distance in Kilometer ");
    scanf("%d", &num);  
    printf("Distance in meter is: %d", kmtom(num));
    break;
}
case 10:
{
    int num;
    printf("Enter distance in Meter ");
    scanf("%d", &num);  
    printf("Distance in kilometer is: %d", mtokm(num));
    break;
 
}
case 11:
{
    int num;
    printf("Enter weight in kg: ");
    scanf("%d", &num);  
    printf("Weight in gram is: %d", kgtog(num));
    break;
 
}
case 12:
{
    int num;
    printf("Enter weight in gram: ");
    scanf("%d", &num);  
    printf("Weight in kilogram is: %d", gtokg(num));
    break;
 
}
}
}
