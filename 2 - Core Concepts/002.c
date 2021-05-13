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


int IS_TRUE = 1; //Don't bother with bool in C, just use int 1,0


int addNumbers()
    {
        int num1;
        int num2;
        
        printf("enter num1: ");
        scanf("%d", &num1);
        printf("\nenter num2: ");
        scanf("%d", &num2);

        return num1+num2;
    }
//Struct
struct Student{
    int age;
    double gpa;
    char grade;
};
//name the struct, define its entries and their types
//declare the struct outside of main, and use a ; at the end of the declaration


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


    //Taking in User Input
    char input[10];
    printf("Enter your name: ");
    fgets(input, 10, stdin); //fgets retrieves user input. 1:where store data,2:char limit,3:where pull from 
    printf("Hello stupid, %s \n", input);

    //Use fgets for character arrays, and scanf for ints/doubles/floats/single chars
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa); // scanf sends the data to the address given, it does not store it to the variable directly
    printf("Your GPA is %f \n", gpa);


    //Arrays
    int luckyNumbers[] =    {3, 4, 5, 1, 5, 6, 42, 25};
                        //   0, 1, 2, 3, 4, 5, 6,  7 
    luckyNumbers[0] = 90;
    printf("%d \n", luckyNumbers[0]);
    //multidimensinonal: luckyNumbers[][]



    //Function Calling
    printf("Results!! is: %d \n", addNumbers());



    //If Statements
    // &&, |, ==, !=, >, <, >=, <=, 
    int condA = 1;
    int condB = 1;

    if(condA != 0 && condB != 0)
    {
        printf("AND Condition Filled\n");
    } else if (condA != 0 && condB == 0)
    {
        printf("only B true\n");
    }

    //Switch Statements
    char token = 'a';
    switch(token){
        case 'a':
            printf("a condition met\n");
            break;
        case 'b':
            printf("b condition met\n");
            break;
        default:
        printf("no condition met\n");;
    }


    //While Loops
    int index = 1;
    while(index <= 5) // <=5 stops at 5
    {
        printf("While %d, \n", index);
        index++;
    }


    //for loops
    for(int x = 0 ; x < 5 ; x++ ) // initializer, stop condition, iterate action
    { //<5 stops at 4
        printf("count: %d\n", x);
    }


    //STRUCTS
    //like a dictionary or an object, not associated with a class
    struct Student jeremy;
    jeremy.age = 26;
    jeremy.gpa = 3.9;
    jeremy.grade = 'A';
    //Struct is a custom dataset/datatype
    //C has no classes and is not object oriented

    return 0; //Functions need a return statement
}