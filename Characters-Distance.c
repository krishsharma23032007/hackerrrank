/*Write a program that takes two lowercase characters and prints how many letters apart they are in the alphabet.

Input Format

Two lowercase characters char1 and char2 separated by space.

Constraints

Input letters are lowercase a–z
char1 always comes before char2 in alphabetical order
Use ASCII arithmetic only
Output Format

Single line printing the result as:
The distance between {char1} and {char2} is {value}*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


    int main() 
    {
    char lower1;
    char lower2;
    scanf("%c ", &lower1);
    scanf("%c ", &lower2);
    printf("The distance between %c and %c is %d",lower1,lower2,lower2-lower1);
    return 0;
}
