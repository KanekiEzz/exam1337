#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main() {
  int adigit;
  int acount;
  printf("x:");
  scanf("%d", &adigit);
  printf("Y:");
  scanf("%d", &acount);
  int bdigit;
  int bcount;
  printf("z:");
  scanf("%d", &bdigit);
  printf("u:");
  scanf("%d",  &bcount);

  int repeats;
  printf("L:");
  scanf("%d", &repeats);

  // Write an answer using printf(). DON'T FORGET THE TRAILING \n
  // To debug: fprintf(stderr, "Debug messages...\n");
  int y = acount;
  int x = bcount;
  while (repeats > 0) 
  {
    y = acount;
    while (y > 0)
    {
        printf("%d", adigit);
        y--;
    }
    x = bcount;
    while (x > 0)
    {
        printf("%d", adigit);
        x--;
    }
    repeats--;    
  }


  return 0;
}