Standard I/O

    Create a program that prints your name.
    Create a program which prints the sum of two numbers.
    Create a program in which you divide two numbers. Print the result. What happens if the divisor is 0? What happens if we use int or float variables?
        Use %f formatting character. Print the result with two decimals.
        Use %d formatting character. Check what happens.
        Use -W, -Wall, -Wextra and -pedantic flags. Does it result a compilation error when a wrong formatting character is used?
        you can check the different formats here  (Links to an external site.)
    Create a program where you compute the area of a square and a circle. Get the length of the square and the radius of the circle from the user.
        Use the function scanf("%f", &a). Use the operator & which returns the address of a variable. The value of pi should be 3.1415.
    Create a program which greets your name. Store your name in a variable.
        Use the type char[] and %s formatting character. Pay attention on the usage of string type: char name[32].

Base types

6 - Declare an int variable and print its value. Notice what the initial value of a variable is.

7 - Assign a new value to the previous variable (it can be a constant value or can be read from the user with scanf()) and print if the value is even or odd.

8 -Print if the number is positive or negative or zero.

9 - Try to assign a floating point number, a char, a boolean and a string to the int variable. If the assignment is successful then print its value. Use -W, -Wall, and -Wextra flags during compilation.

9 - Based on the previous example examine the conversion between all known base types. Can all types be converted to another? If yes, then what is the rule of conversion (see end of page)?

10 -Determine the greatest and the smallest integer numbers (sizeof). Assign the greatest integer to a variable and add one. Check what happens.

11- Determine the average of two integers.
Exercises 1

12 - Create a Fahrenheit-Celsius converter (C = (F - 32) / 1.8). Write [-20; 200] interval Fahrenheit values with a scale of 10, and the corresponding degree Celsius.

13 - Print the words "Hello" and "World" using printf() function. Put these two words between quotes in the output.

14 - Create a program which gets an integer and reverses it. Use only arithmetic operations. E.g. 12345 -> 54321.

15 - Determine the greatest common divisor of two integers. It can be brute-force, subtraction method, Euclidean-algorithm.

16 - Write out a 10x10 times table. Separate the numbers in a line with tab characters.

17 - Write the real numbers from 0 to 1 in increments of 0.1.

18 - Draw an empty chessboard. Mark dark fields with [], light fields and two spaces. Use divisibility by two.

19 - Write out how many bytes your machine represents an int, long int, unsigned int, unsigned long int, char, bool, float, double, long double value.

20 -Check if a number is a palindrome. Use only arithmetic operations for the solution. Eg: 12321 is a palindrome, but 12345 is not.

21 - Determine whether two integers are amicable. Two integers are amicable if the sum of the divisors of one smaller than itself is equal to the other, and vice versa. E.g.: 220 and 284.

22 - Determine whether a given number is prime. Write the primes up to 1000.

23 - Earlier we listed the size in bytes of different basic types. Let's determine the same for pointers pointing to these types and arrays containing elements of this type.

 
Some Rules of Conversion between types:

double -> int
losing fractional part

int -> double
intuitive meaning, potential rounding error

char -> int
based on some character coding (usually ASCII)

int -> char
based on some character coding (usually ASCII)

bool -> int
true -> 1, false -> 0

int -> bool
0 -> false, everything else -> true

bool -> double
true -> 1.0, false -> 0.0

double -> bool
0.0 -> false, everything else -> true

double -> char
losing fractional part, then same as int -> char

char -> double
based on some character coding (usually ASCII) with potential rounding
errors

etc...