// This example shows the data types in C for 64-bits computer
// The byte size may be different depending on whether your computer is 16, 32
// or 64 bits.
#include <stdio.h>

int main() {
  // characters
  char grade = 'A';
  char greeting[] = "Hello";

  // numbers
  int integer = 10;            // range from -2147483648 to 2147483647
  long greatInteger = 999999;  // range from -9223372036854775808
                               // to 9223372036854775807
  long long superGreatInteger =
      999999999999;  // range from -9223372036854775808
                     // to 9223372036854775807

  float floating = 3.1415;
  double greatFloating = 3141592653.5897;
  long double superGreatFloating = 3141592653589.7932;

  // output
  printf("%c\n", grade);       // Output: A
  printf("%s\n\n", greeting);  // Output: Hello

  printf("%d\n", integer);                // Output: 10
  printf("%ld\n", greatInteger);          // Output: 999999
  printf("%lld\n\n", superGreatInteger);  // Output: 999999999999

  printf("%.2f\n", floating);               // Output: 3.14
  printf("%.2lf\n", greatFloating);         // Output: 3141592653.59
  printf("%.2Lf\n\n", superGreatFloating);  // Output: 3141592653589.79

  return 0;
}