/* This may look like nonsense, but it really is -*- mode: C -*-
  */

// Include some helpful libraries
#include <stdio.h> // Added this to define where printf comes from

/* The main thing that this programme does. */
int main() {
  // Declarations 
  int i;
  double A[5] = {
    9.0,
    2.9,
    3.E+25,
    .00007,
  };

  // Doing some work
  for (i = 0; i < 5; ++i) {
    printf("element %d is %g, \tits square is %g\n",
      i,
      A[i],
      A[i]*A[i]);
  }

  return 0;
}