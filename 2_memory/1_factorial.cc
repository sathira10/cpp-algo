#include <iostream>

using std::cout;
using std::endl;

int factorial(int x) {
  if (x == 1) return 1;
  return x * factorial(x-1);
}

int main() {
  cout << "Answer: " << factorial(5) << endl;
  return 0;
}