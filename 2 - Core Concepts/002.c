#include <stdio.h> //Standard IO
#include <stdlib.h> //Standard Library

//variable types

//chars
char simpleCharacter = 'A'; //Single 8-bit character. ASCII:'A' = [0x21] or [0010 0001]
char name[] = "eein";   //Simply an array of characters = String
                        //Strings seem to require "", whereas char only needs singles ''

//numbers
short fingers = 5;  //16-bit signed integer. Shorter than int?
int age = 24;       //16-bit signed integer. Not shorter than short?
long pop = 9001;    //32-bit signed integer.
long long big = 99; //64-bit signed integer. So if its an unsigned double long can it go to 2^128?

float chance = 4.5; //single-precision floating point
double risk = .005; //double-precision floating point
long double surprise = 0.00001; //extended-precision floating point


int IS_TRUE; //Don't bother with bool in C, just use int 1,0
IS_TRUE = 1; 


int main ()
{
    
    //printf, finish ""content, then comma separated list for the flags in order.
    printf("%s, your grade is %c, your score is %f\n", name, simpleCharacter, chance);
    /*
    printf flags:
    %p  pointer
    %c  character
    %d  integer number, base10
    %e  exponential floating-point number
    %f  floating-point number
    %i  integer, base10 //Single?
    %o  octal number, base8
    %s  string of characters
    %x  hex number, base16
    %%  print a percent sign
    \%  print a percent sign
    */


    //Casting Data Types
    printf("float to int cast: %d \n", (int)3.14);
    //the casting is (type)value
    printf("int to float: %f \n", (float)3/2);


    //Pointers/Memory Addresses
    int num = 10;
    printf("num's value is: %d \n", num);
    printf("num's address is: %p \n", &num); //num is the value, &num refers to the address of num

    //making a variable that is a pointer
    //you put a * in front of the variable type, so they compiler knows how long the variable is in memory
    //So, the variable declaration needs the * so it knows it's working with a pointer,
    //and the value needs a & to reference the address, rather than the value
    //convention is to put a p ahead of the variable num, pNum
    int *pNum = &num;
    //the * is the dereference operator, 
    //use it when passing a pointer variable, to pass the actual data instead
    printf("the pointer pNum has stored this address: %p \n", pNum);
    printf("the pointer pNum refers to Num whose value is: %d \n", *pNum);


    //Arithmetic
    printf("%d + %d = %d \n", 3,2,3+2);
    printf("%d - %d = %d \n", 3,2,3-2);
    printf("%d * %d = %d \n", 3,2,3*2);
    printf("%d %% %d = %d \n", 3,2,3%2);
    printf("%d / %d = %f \n", 3,2,3/2);

    num += 10;
    num++;
    printf("Num is now %d \n", num);




    return 0; //Functions need a return statement
}