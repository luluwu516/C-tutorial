#include <stdio.h>

int main() {
  // Let's say the result is an integer
  int res1;

  // different data type division and store the result in an integer variable
  res1 = 9 / 2;
  printf("%d / %d = %d\n", 9, 2, res1);  // Output: 9 / 2 = 4
  res1 = 2 / 9;
  printf("%d / %d = %d\n", 2, 9, res1);  // Output: 2 / 9 = 0
  res1 = 9 / 2.0;
  printf("%d / %.1f = %d\n", 9, 2.0, res1);  // Output: 9 / 2.0 = 4
  res1 = 2 / 9.0;
  printf("%d / %.1f = %d\n", 2, 9.0, res1);  // Output: 2 / 9.0 = 0
  res1 = 9.0 / 2;
  printf("%.1f / %d = %d\n", 9.0, 2, res1);  // Output: 9.0 / 2 = 4
  res1 = 2.0 / 9;
  printf("%.1f / %d = %d\n", 2.0, 9, res1);  // Output: 2.0 / 9 = 0
  res1 = 9.0 / 2.0;
  printf("%.1f / %.1f = %d\n", 9.0, 2.0, res1);  // Output: 9.0 / 2.0 = 4
  res1 = 2.0 / 9.0;
  printf("%.1f / %.1f = %d\n\n", 2.0, 9.0, res1);  // Output: 2.0 / 9.0 = 0
  // The result is "truncate" to an integer

  // Let's say the result is a floating number
  float res2;

  // different data type division and store the result in a float variable
  res2 = 9 / 2;
  printf("%d / %d = %.1f\n", 9, 2, res2);  // Output: 9 / 2 = 4.0
  res2 = 2 / 9;
  printf("%d / %d = %.1f\n", 2, 9, res2);  // Output: 2 / 9 = 0.0
  res2 = 9 / 2.0;
  printf("%d / %.1f = %.1f\n", 9, 2.0, res2);  // Output: 9 / 2.0 = 4.5
  res2 = 2 / 9.0;
  printf("%d / %.1f = %.1f\n", 2, 9.0, res2);  // Output: 2 / 9.0 = 0.2
  res2 = 9.0 / 2;
  printf("%.1f / %d = %.1f\n", 9.0, 2, res2);  // Output: 9.0 / 2 = 4.5
  res2 = 2.0 / 9;
  printf("%.1f / %d = %.1f\n", 2.0, 9, res2);  // Output: 2.0 / 9 = 0.2
  res2 = 9.0 / 2.0;
  printf("%.1f / %.1f = %.1f\n", 9.0, 2.0, res2);  // Output: 9.0 / 2.0 = 4.5
  res2 = 2.0 / 9.0;
  printf("%.1f / %.1f = %.1f\n\n", 2.0, 9.0, res2);  // Output: 2.0 / 9.0 = 0.2

  // If we store the integer division into a float variable
  // 9 / 2 = 4.0 and 2 / 9 = 0.0
  // we get incorrect answers
  // To avoid the wrong answers, we can do "Type Casting"
  res2 = (float)9 / 2;
  printf("%d / %d = %.1f\n", 9, 2, res2);  // Output: 9 / 2 = 4.5
  res2 = (float)2 / 9;
  printf("%d / %d = %.1f\n", 2, 9, res2);  // Output: 2 / 9 = 0.2

  return 0;
}