#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 5;
  int y = 10;
  int z = add(x, y);
  printf("%d + %d = %d\n", x, y, z);
  return 0;
}

int add(int a, int b) {
  return a + b;
}
