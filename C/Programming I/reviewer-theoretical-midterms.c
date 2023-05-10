/******************************************************************************

This source file is a general type of reviewer made by Zyguel Cabs for future
references. Save file: 1101 MIDTERMS;

*******************************************************************************/
#include <stdio.h> 
#define x 10 // Macros using define; a fragment of a code; can work similarly as function calls;
#define multiply(xy) (x * y) // functions like macros; similar to function calls;

// #if defined multiply(xy) && multiply(xy) >=0; 

// #include pre-processor directives;
/* <stdio.h>, <stdlib.h>, <math.h>, <string.h>, <ctype.h> HEADER FILES; contains the sets of 
pre-defined standard library functions;
*/

/*
#ifdef Macros
    // conditional codes;
#endif
*/

/* if, elif, else;
#if expression
    // conditional codes;
#endif
*/

/*
Pre-defined Macros:
__TIME__ A string that displays current time;
__DATE__ A string that displays current date;
__FILE__ A string that containing the file name;
__LINE__ An integer representing the current line number;
__STDC__ If follows ANSI standard C; then the value is a non-zero integer;
*/
// syntax errors; missing ;, {}, missing "&" in scanf although not applicable in some cases;
// run time errors; Mistakes in code, Memory leaks, Math... incorrect operations;
// Undefined Variables: If a programmer forgets to define a variable = run time error;
// Logical Errors; printf("the sum is: %f", a * b);

//const int a; constants; prevents change of value;
//#define a \(value\); value only integers;

/*
char 1 byte;
short 2 bytes;
int 4 bytes;
float 4 bytes;
double 8 bytes;
Reference = &; different meanings and use cases; printf("address: %p\n", &a);
*/

/*
Reserved words: 
auto, double, int, struct, break, else, long, switch, case, enum,
register, typedef, char, extern, return, union, continue, for, signed,
void, do, if, static, while, default, goto, sizeof, volatile, const, float,
short, unsigned;
*/

/*
scanf(); to take a string input in c without spaces; 
fgets(variable, 30, stdin); To get around restrictions in scanf(); 30 is the size of an array variable;
*/
void getSum (int , int) Function Head
void getSum (int , int); Function Protoype

int //return value of the main function;
main (void){ // main function; where the program begins (your main program ofc);
    // #include <ctype.h> //Pre-defined Character Functions;
 //   https://www.geeksforgeeks.org/ctype-hcctype-library-in-c-c-with-examples/
    /*  isalnum(int c); returns >0 if alphabet and numberic therefore alphanumeric;
        isalpha(int c); returns >0 if alphabet;
        iscntrl(int c); returns >0 if control character like \n; basically escape sequences;
        isdigit(int c); returns >0 if value is digit;
        islower(int c);  returns >0 if char is lower;
        isprint(int c); returns >0 if printable char;
        ispunct(int c); returns >0 if punctuation; neither alphanum nor space;
        isspace(int c); returns >0 if \0 or white-space characters;
        isupper(int c);  returns >0 if alphabet is upper;
        isxdigit(int c); returns >0 if hexadecimal;
        tolower(int c);  returns lowercase alphabet of the the corresponding uppercase alphabet;
        toupper(int c); returns uppercase alphabet of the corresponding lowercase alphabet
    */
    // #include <string.h>; https://www.codesdope.com/blog/article/predefined-string-functions-of-c-in-stringh-librar/
    /*  
        Function	Use
        
        strlen	    calculates the length of string;
        strcat	    Appends one string at the end of another
        strncat	    Appends first n characters of a string at the end of another
        strcpy	    Copies a string into another
        strncpy	    Copies first n characters of one string into another
        strcmp  	Compares two strings
        strncmp	    Compares first n characters of two strings
        strchr	    Finds the first occurrence of a given character in a string
        strrchr	    Finds the last occurrence of a given character in a string
        strstr	    Finds the first occurrence of a given string in another string
        // Advanced functions; Won't be discussed since its a pain a bit;
        strcspn 	Calculates the initial length of a string, not containing any character of the other string
        strspn	    Calculates the initial length of a string, containing the only characters of the other string
        strpbrk	    Finds the first occurrence of any of the characters of a string in another string
        strtok	    splits a string into token
        
        */ 
        
        /* #include <math.h>
        sqrt(x)	square root of x	sqrt(4.0) is 2.0
        sqrt(10.0) is 3.162278
        
        exp(x)	exponential (ex)	exp(1.0) is 2.718282
        exp(4.0) is 54.598150
        
        log(x)	natural logarithm of x (base e)	log(2.0) is 0.693147
        log(4.0) is 1.386294
        
        log10(x)	logarithm of x (base 10)	log10(10.0) is 1.0
        log10(100.0) is 2.0
        
        fabs(x)	absolute value of x	fabs(2.0) is 2.0
        fabs(-2.0) is 2.0
        
        ceil(x)	rounds x to smallest integer not less than x	ceil(9.2) is 10.0
        ceil(-9.2) is -9.0
        
        floor(x)	rounds x to largest integer not greater than x	floor(9.2) is 9.0
        floor(-9.2) is -10.0
        
        pow(x,y)	x raised to power y (xy)	pow(2,2) is 4.0
        
        fmod(x)	remainder of x/y as floating-point number	fmod(13.657, 2.333) is 1.992
        
        sin(x)	sine of x (x in radian)	sin(0.0) is 0.0
        
        cos(x)	cosine of x (x in radian)	cos(0.0) is 1.0
        
        tan(x)	tangent of x (x in radian)	tan(0.0) is 0.0
        
        */
}