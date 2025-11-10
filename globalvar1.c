#include <stdio.h>

/* Global variable declaration */
int a = 20;

/* Function prototype - Always a good practice! */
int sum(int x, int y); 

int main () {

  /* Local variable declaration in main function */
  int a = 10; // This 'a' hides the global 'a'
  int b = 20;
  int c = 0;

  printf ("value of a (local) in main() = %d\n",  a);
   
  // 1. Corrected function call: store the result in 'c'
  c = sum(a, b); 
  
  printf ("value of c (result of sum) in main() = %d\n",  c);

  return 0;
}

/* function to add two integers */
int sum(int x, int y) { // Use different names (x, y) to avoid confusion, though 'a' and 'b' would work too

   // Note: The 'a' and 'b' passed from main() are local to this function call
   printf ("value of x in sum() = %d\n",  x);
   printf ("value of y in sum() = %d\n",  y);

   return x + y;
}

