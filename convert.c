#include<stdio.h>
#include<math.h>
 
double equation_s(char x)
{
   int grams;
   double cups;
   grams = atoi(argv[2]);
   cups = grams /(240*845) ; 
   return cups;
}
