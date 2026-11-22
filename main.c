#include <stdio.h>
#include <stdlib.h>
// Add two numbers
int add()
{
    int a, b, sum;
    printf("Enter first number \n");
    scanf("%d", &a);

    printf("Enter second number \n");
    scanf("%d", &b);
    sum = a + b;
    printf("checkin result  \n %d \n", sum);
    return 0;
}

// print variable types
void variableTypes()
{

    int a = 30;
    float b = 30.4;
    double doub = 34.98989;
    char newchar = 'a';

    printf("%d  \n", a);
    printf("%.2f  \n", b);
    printf("%.2lf  \n", doub);
    printf("%c  \n", newchar);
}

// Take name and age as input

void showingName()
{
    char name[50];
    printf("enter your name \n");
    scanf("%s \n", name);
}

// Take two integers as input

void takeTWoInteger()
{
    int a, b;
    printf("enter first number \n");
    scanf("%d \n", &a);

    printf("enter second number \n");
    scanf("%d", &b);

    printf("result here %d \n", a + b);

    // return 0;
}

// Swap two variables using a third variable

void swapwithTwoNumber()
{
    int a, b, c;
    printf("enter first number \n");
    scanf("%d", &a);
    printf("enter second number  \n");
    scanf("%d", &b);
    a = a - b;
    b = a + b;
    c = b;

    printf("here is the result %d \n", c);
}

// Calculate all arithmetic operations

void calculateAllArithmatic()
{

    int a, b;

    printf("enter first number \n");
    scanf("%d", &a);

    printf("enter second number \n");
    scanf("%d", &b);

    printf("result of plus \n %d", a + b);
    printf("result of minus \n %d", a - b);
    printf("result of division \n %d", a / b);
    printf("result of multiplication \n %d", a * b);
}

// Area and perimeter of a rectangle

void PerimeterOfRactangle()
{
    float length, width, area, perimeter;

    printf("enter length \n");
    scanf("%f", &length);

    printf("enter width \n");
    scanf("%f", &width);

    area = (length * width);

    printf("Area %f \n", area);

    perimeter = 2 * (length * width);

    printf("perimeter %f \n", perimeter);
}

// Area and circumference of a circle

void circumference()
{
    float radious, area, circumference;
    double pi = 3.1416;

    printf("enter radious numer \n");
    scanf("%f", &radious);

    area = pi * radious * radious;    // get circle are
    circumference = 2 * pi * radious; // get circle poridi

    printf("getting result %f %f", area, circumference);
}

// Celsius to Fahrenheit

void getFharenheit()
{
    int censious, fahrenheit;
    printf("enter double censious %d \n", censious);
    scanf("%d", &censious);

    fahrenheit = (censious * 9 / 5) + 32;

    printf("result is here farhenheit %d", fahrenheit);
}

// Fahrenheit to Celsius

void getFharenheitToCelsius()
{
    int censious, fahrenheit;
    printf("enter double censious %d \n", fahrenheit);
    scanf("%d", &fahrenheit);

    censious = (fahrenheit - 32) * 9 / 5;

    printf("result is here farhenheit %d", censious);
}

// Calculate simple interest

void getSimpleInterest()
{
    float rate, principal, time, interest;
    printf("enter principle");
    scanf("%f \n", &principal);

    printf("enter rate");
    scanf("%f \n", &rate);

    printf("ener time");
    scanf("%f \n", &time);

    interest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", interest);
}

// Calculate total marks and percentage

void gettingTotalParcentage()
{
    int english = 80;
    int math = 75;
    int science = 90;
    int ict = 85;
    int bangla = 70;

    int total = english + math + science + ict + bangla;

    float parcentage = (total / 500.00) * 100;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", parcentage);
}

// Convert seconds into hours, minutes, and seconds

void getSecond()
{
    int totalSeconds;
    int hours, minutes, seconds;

    printf("Enter seconds: ");
    scanf("%d", &totalSeconds);

    // 1. Hour ber kori
    hours = totalSeconds / 3600;

    // 2. Hour bad diye baki seconds koto thake
    totalSeconds = totalSeconds - (hours * 3600);

    // 3. Minute ber kori
    minutes = totalSeconds / 60;

    // 4. Baki ja thakbe, tai seconds
    seconds = totalSeconds - (minutes * 60);

    // Ebar clock style e print korbo (H:M:S)
    printf("%d:%d:%d\n", hours, minutes, seconds);

    // return 0;
}

// Find the first and last digit of a three-digit number

void getLstandfstnumber()
{
    int number = 121;

    int first = number / 100; // first

    int last = number % 10; // last

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);
}

// Reverse a three-digit number

void getReverseNumber()
{

    int number = 123;
    int first, middle, last, reverse;

    first = number / 100;
    middle = (number / 10) % 10;
    last = number % 10;

    reverse = last * 100 + middle * 10 + first;

    printf("Reverse = %d\n", reverse);
}

// dynamic memory allocation

void declareDynamicsized()
{

    int numer[5]; // static array sized

    int number2[10] = {12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
    int *number3 = (int *)malloc(5 * sizeof(int)); // added the *
    number3[0] = 12;                               // ✅ Works perfectly now!
    number3[0] = 12;
    number3[1] = 45;
    for (int i = 0; i < sizeof(number2) / sizeof(number2[0]); i++)
    {
        printf("Enter number %d: ", number2[i]);
    }
}

// Count digits of a number
void getcountDigitOfNumber()
{
    int n = 12345;
    int count = 1;
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n != 0)
        {
            n = n / 10;
            count++;
            printf("Total digits list: %d\n", n);
        }
    }
    printf("Total digits: %d\n", count);
}

// Calculate sum of digits

void getCalculationOfDigits()
{
    int number = 1234;
    int sum = 0;
    if (number < 0)
    {
        number = -number;
    }

    while (number != 0)
    {
        int digit = number % 10; // getting last digit
        sum = sum + digit;       // sum of digits
        number = number / 10;    // remove last digit
    }

    printf("Sum of digits: %d\n", sum);
}

// Get GCD and LMC
void getGCDLMC()
{
    int a = 24;
    int b = 36;

    int x = a; // save original values
    int y = b;

    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int GCD = x;
    int lcm = (a / GCD) * b; // a and b still hold 24 and 36

    printf("here was the GCD %d\n", GCD);
    printf("here was the lcm %d\n", lcm);
}

int main()
{
    printf("hellow world \n");
    // add();
    // variableTypes();

    // showingName();

    // takeTWoInteger();
    // swapwithTwoNumber();
    // calculateAllArithmatic();
    // PerimeterOfRactangle();
    // circumference();

    // getFharenheit();
    // getFharenheitToCelsius();
    // getSimpleInterest();
    // gettingTotalParcentage();

    // getReverseNumber();

    // declareDynamicsized();

    // getcountDigitOfNumber();

    getGCDLMC();
    // getCalculationOfDigits();

    return 0;
}