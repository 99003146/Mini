#include<stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main()
{
int choice;
int choice2;
int choice3;
int choice4;
printf("What do you want to do?\n1-ARITHMATIC\n2-CONVERSIONS\n3-TRIGONOMETRIC\n");
printf("Enter your choice ");
scanf("%d", &choice);
system("cls");

switch(choice)
{
    case 1:
    {
    printf("What do you want to do?\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-Square\n6-Square root\n");
    scanf("%d", &choice2);
    switch(choice2)
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
            double num1, num2;
            printf("Enter first number ");
            scanf("%lf", &num1);
            printf("Enter second number ");
            scanf("%lf", &num2);
            printf("Product is: %.3lf",multiply(num1,num2));
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

            int num;
            printf("Enter number ");
            scanf("%d", &num);
            printf("Square root is: %d",sqarert(num));
            break;
        }
        } 
    break;  
    }
    case 2:
    {
        printf("What do you want to do?\n1-Celsius to farenheit\n2-Farenheit to celsius\n3-Kilometer to meter\n4-Meter to Kilometer \n5-Kg to gram \n6-Gram to kg \n");
        scanf("%d", &choice3);
        switch(choice3)
        {
            case 1:
                {
                    int num;
                    printf("Enter temprature in celsuis ");
                    scanf("%d", &num);
                    printf("Temprature in Fahrenheit is: %d", ctof(num));
                    break;

                }
            case 2:
                {
                        int num;
                        printf("Enter temprature in Fahrenheit ");
                        scanf("%d", &num);
                        printf("Temprature in Degree is: %d", ftoc(num));
                        break;
                }
            case 3:
                {
                    int num;
                    printf("Enter distance in Kilometer ");
                    scanf("%d", &num);  
                    printf("Distance in meter is: %d", kmtom(num));
                    break;
                }
                case 4:
                {
                    int num;
                    printf("Enter distance in Meter ");
                    scanf("%d", &num);  
                    printf("Distance in kilometer is: %d", mtokm(num));
                    break;
                
                }
                case 5:
                {
                    int num;
                    printf("Enter weight in kg: ");
                    scanf("%d", &num);  
                    printf("Weight in gram is: %d", kgtog(num));
                    break;
                
                }
                case 6:
                {
                    int num;
                    printf("Enter weight in gram: ");
                    scanf("%d", &num);  
                    printf("Weight in kilogram is: %d", gtokg(num));
                    break;
                }
        }
    break;
    }
   /* case 3:
    {
        printf("What do you want to do?\n1-Sin\n2-Cosine\n3-Tan\n4-Cot\n5-Sec\n6-Cosec\n");
        scanf("%d", &choice4);
        int num;
        printf("Enter number: ");
        scanf("%d", &num);
        switch (choice4)
        {       
  
            case 1:
            {
                printf("Sin value is : %lf", sine(num)); 
                break;
            }
            case 2:
            {
                printf("Cosine value is : %lf", cosine(num)); 
                break;

            }
            case 3:
            {
                printf("Tan value is : %lf", Tan(num));
                break;
            }
            case 4:
            {
                printf("Cot value is : %lf", Cot(num));
                break;
            }
            case 5:
            {
                printf("Sec value is : %lf", Sec(num));
                break;
            }
            case 6:
            {
                printf("Cosec value is : %lf", Cosec(num));
                break;
            }
        }
    }*/
break;
}


}
