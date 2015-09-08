/* This may look like nonsense, but it really is -*- mode: C -*-
  */

// Include some helpful libraries
#include <stdio.h> // Added this to define where printf comes from

/* The main thing that this programme does. */
int main(void) { // Changed to int from void for return type
  // Declarations
  int i;
  //char c = "--- \n";
  double A[5] = {
    9.0,
    2.9,
    3.E+25,
    .00007,
  };

  // Doing some work
  for (i = 0; i < 5; ++i) {
    printf("'i' equals %d\n\n", i);
    if (i) {
      printf("element %d is %g, \tits square is %g\n\n",
          i,
          A[i],
          A[i]*A[i]
      );
    }
    printf("   --- End itteration %d ---\n\n", i);
  }

  return 0;
}
