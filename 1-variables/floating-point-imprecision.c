#include <stdio.h>

int main() {
  float pi = 3.141592653589793238462643383279502884197;
  printf("The value of pi is approximately %f\n", pi);  // Output: 3.141593
  printf("The value of pi is approximately %.10f\n\n",
         pi);  // Output: 3.1415927410

  // The output should be 3.141592"6535", but it printed out 3.141592"7410"
  // This is called "Floating-point Imprecision"
  return 0;
}