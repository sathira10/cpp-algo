#include <iostream>

using std::cout;
using std::endl;

void increment() {
  static int i = 0;
  cout << i++ << endl;
}

int main() {
  for (int x = 0; x < 10; x++) increment();
}