#include <stdio.h>

int gcd(int x, int y) {
  if (y != 0) {
    return gcd(y, x%y);
  } else {
    return x; // находим НОД, в у - меньшее, в х - большее. 
  }
}

void reduce_fraction(int *a, int *b) {
  int divider = gcd(*a, *b);
  *a /= divider; // просто делим на найденный НОД
  *b /= divider;
}

int main() {
  int a = 14, b = 49;
  reduce_fraction(&a, &b); // вызываем функцию 
  printf("%d %d", a, b);
  return 0;
}