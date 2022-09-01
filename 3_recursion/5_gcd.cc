#include <iostream>

using std::cout;
using std::endl;

int gcd(int a, int b) {
  int r = a % b;

  if (r == 0) return b;

  return (gcd(b, r));
}

int gcd_tail_recursion(int a, int b) {
  while (true) {
    int r = a % b;
    a = b;
    b = r;
  }
}