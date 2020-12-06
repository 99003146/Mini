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



