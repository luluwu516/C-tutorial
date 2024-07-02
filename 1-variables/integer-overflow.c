#include <stdio.h>

int main() {
  // The byte size for an integer on 64-bits computer is from -2147483648 to
  // 2147483647
  int x = 2000000000;
  int y = 2000000000;
  int res = x + y;

  // if the result is over the range...
  // for example, 2000000000 + 2000000000 should be 4000000000
  printf("%d\n", res);  // Output: -294967296

  // this is called "integer overflow"

  return 0;
}