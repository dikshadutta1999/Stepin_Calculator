#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calc.h"
#define PI 3.14159265

/**
 * @brief Function to execute a STRING REVERSAL
 * 
 * @param c 
 * @return char* 
 */
char* strreverse(char* c) //function for string reversal. Pointers used.
{   char* now = c;
    char* last = c + (strlen(c) - 1);
    while (now < last)
    { const char tmp = *now;
    *now = *last;//change in position of each character of string
    *last = tmp;
    now++;
    last--;
    }
    return c;
}
/**
 * @brief Function to calculate EMI using structures
 * 
 */
struct EMI
{float principal, rate, time, totalemi; }emi; //Structure used for EMI Calculation

/**
 * @brief main function that calls other functions to perform action on parameters.
 * 
 * @return int 
 */
int main()
{   printf("\t\t\t Hello! Welcome to calculator\n \tYou can now do string reversal and EMI calcultion too! \n");
    int choosenval;
    printf("Choose:\n1 --> string\n2 --> EMI \n3 --> sum\n4 --> division\n5 --> Subtraction\n6 --> Multiplication\n7 --> Trigonometry/power\n");
    printf("Kindly enter your value : "); // Choose value to choose which input operation to perform
    scanf("%d",&choosenval);
/**
 * @brief Construct a new switch object
 * 
 */
    switch(choosenval){
        case 1: ;
        /**
         * @brief Calling string function strreverse to reverse string
         * 
         */
            char* in = malloc(256); // Dynamic Memory Allocation to allocate memory for input string from user.
            printf("Enter a string: ");
            scanf("%s", in);
            char* out = strreverse(in);
            printf("%s", out);
            free(in); // Deallocating memory space
            break;

        case 2:
        /**
         * @brief parameters to calculate EMI - principle, rate and time duration
         * @brief structures are used to perform the same.
         * 
         */
            printf("Enter principle: "); // Enter principle amount 
            scanf("%f",&emi.principal);
            printf("Enter rate: "); // Enter rate of interest
            scanf("%f",&emi.rate);
            printf("Enter time: "); // Enter time period
            scanf("%f",&emi.time);
            emi.rate=emi.rate/(12*100);
            emi.time=emi.time*12;
            emi.totalemi=(emi.principal*emi.rate*pow(1+emi.rate,emi.time))/(pow(1+emi.rate,emi.time)-1);// Formula for Totl EMI calculation
            printf("Monthly EMI is=%.2f ",emi.totalemi);
            break;

        case 3: ;  
        /**
         * @brief Function called in to perform addition
         * 
         */
            int num1,num2,num3;
            printf("Enter number-1 : \nEnter number-2 : \n");// Enter two input values
            scanf("%d %d",&num1,&num2); // Scan the two values
            num3=sum(num1,num2); // Compute summation
            printf("sum = %d\t",num3);// Summation output
            break;

        case 4: ;
        /**
         * @brief Function called to perform division
         * 
         */
           int num4,num5,num6;
            printf("Enter number-1 : \nEnter number-2 : \n"); // Enter two values
            scanf("%d %d",&num4,&num5);// Scan the two values
            num6=divis(num4,num5); // Compute division
            printf("Quotient = %d\n",num6);// Output obtained
            break;

        case 5: ;
        /**
         * @brief Function called in to subtract two numbers
         * 
         */
           int num7,num8,num9;
            printf("Enter number-1 : \nEnter number-2 : \n"); // Enter two input
            scanf("%d %d",&num7,&num8);// Scan the two values
            num9=sub(num7,num8);// Compute subtraction
            printf(" Answer = %d\n",num9); // Output for subtraction obtained
            break;

        case 6: ;
        /**
         * @brief Function  called in to multiply two numbers
         * 
         */
           int num10,num11,num12;
            printf("Enter number-1 : \n Enter number-2 : \n"); // Enter two input values
            scanf("%d %d",&num10,&num11);// Scan the two input values
            num12=mul(num10,num11);// Multiply the values
            printf("Answer = %d\n",num12);// Output obtained
            break;

        case 7 : ;
        /**
         * @brief Perform trigonometric operation , power function and exponents
         * 
         */
            int n;
            double x,a;
            printf("What do you want to do ? \n");
            printf("1.sin 2.cos 3. tan 4. sinh 5.cosh 6.tanh 7.1og10 8. square root. 9.exponent 10.power.");
            scanf ("%d",&n);// Choose the trigonometric/exponential/power operation as per your requirement
            printf("Enter x value: "); // Enter input values
            scanf("%lf",&x);
            switch(n){
                /**
                 * @brief Various switches to perform sin, cos, tan, sinh, cosh, tanh, log10,square root, exponent, power
                 * 
                 */
                case 1:
                    a=sin(x);// sine function
                    printf("Value is : %lf \n", a);   
                    break;
                case 2:;
                    a=cos(x);// cos function
                    printf("Value is : %lf \n", a);   
                    break;
                case 3:;
                    a=tan(x); // tan function
                    printf("Value is : %lf \n", a);   
                    break;
                case 4:;
                    a=sinh(x);// sinh function
                    printf("Value is : %lf \n", a);   
                    break;
                case 5:;
                    a=cosh(x); // cosh function
                    printf("Value is : %lf \n", a);   
                    break;
                case 6:;
                    a=tanh(x); //tanh function
                    printf("Value is : %lf \n", a);   
                    break;
                case 7:;
                    a=log10(x); //log10 function
                    printf("Value is : %lf \n", a);   
                    break;
                case 8:;
                    a=sqrt(x); // square root function
                    printf("Value is : %lf \n", a);   
                    break;
                case 9:;
                    a=exp(x); // exponential function
                    printf("Value is : %lf \n", a);   
                    break;
                case 10:;
                    double y;
                    printf("Enter y value: ");
                    scanf("%lf",&y);
                    a=pow(x,y); // power function
                    printf("Value is : %lf \n", a);   
                    break;
                default:
                    printf("Enter valid input between 1 to 10");
            }
        default:
            printf("Enter valid input");
    }
}