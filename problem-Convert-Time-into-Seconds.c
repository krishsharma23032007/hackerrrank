/*You are given hours, minutes, and seconds.
Convert the entire time into total seconds.

Important Instructions

Do NOT write the entire logic in main().
Create a function int toSeconds(int hours, int minutes, int seconds) and call it from main().
Input Format

Three space-separated integers: {hours} {minutes} {seconds}

Constraints

0 ≤ hours ≤ 100
0 ≤ minutes < 60
0 ≤ seconds < 60
Output Format

Single line printing the result as:
Total seconds: {res}*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int toSeconds(int hours, int minutes, int seconds)
  {
      int sum = hours * 3600 + minutes * 60 + seconds;
      return sum;
  }
  
  int main()
  {
      int hours ,minutes,seconds;
      scanf("%d %d %d" ,&hours,&minutes,&seconds );
      int res = toSeconds(hours,minutes,seconds);
       printf("Total seconds: %d",res);

    return 0;
  }
