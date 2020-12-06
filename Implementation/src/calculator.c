#include <stdio.h>
#include <math.h>

int add (int number1, int number2)
{
    return number1+number2;

}
int substract(int number1, int number2)
{
    return number1-number2;
}

int multiply(int number1, int number2)
{
    return number1*number2;
}
float divide(float number1, float number2)
{
    return number1/number2;
}
int square(int number)
{
    return number*number;
}
int sqarert(int number)
{
    return sqrt(number);
}


//conversion

int ctof(int celsius)
{
    int fahrenheit;
    fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}

int ftoc(int fahrenheit)
{
    int celsius;
    celsius = ((fahrenheit-32)*5)/9;
    return celsius;
}

int kmtom(int km)
{
    int meter;
    meter=km*1000;
    return meter;
}

int mtokm(int meter)
{
    int km;
    km=meter/1000;
    return km;
}

int kgtog(int kg)
{
    int gram=kg*1000;
    return gram;
}

int gtokg(int gram)
{
    int kg=gram/1000;
    return kg;
}

//trignometric


double cosine(double m){
    m=m/57.295779513;
    printf("cosine of angle is ");
    double result=cos(m);
    return result;
}
double sine(double m){
    m=m/57.295779513;
    printf("sine of angle is ");
    double result=sin(m);
    return result;
}
double Tan(double m){
    m=m/57.295779513;
    printf("tan of angle is ");
    double result=tan(m);
    return result;
}
double Cot(double m){
    m=m/57.295779513;
    printf("Cot of angle is ");
    double result=1/tan(m);
    return result;
}
double Sec(double m){
    m=m/57.295779513;
    printf("Sec of angle is ");
    double result=1/cos(m);
    return result;
}
double Cosec(double m){
    m=m/57.295779513;
    printf("Cosec of angle is ");
    double result=1/sin(m);
    return result;
}
