#include <iostream>

using std::cout;
using std::endl;

long fib(int n) {
  if (n > 1)
    return fib(n - 1) + fib(n - 2);
  else
    return n;
}

long fib_lookup(int n) {
  static long* lookup = new long[93];

  if (lookup[n] > 0) return lookup[n];
  if (n > 1) {
    lookup[n] = fib(n - 1) + fib(n - 2);
    return lookup[n];
  } else
    return n;
}


int main(){
    cout << fib(5) << endl;
    return 0;
}