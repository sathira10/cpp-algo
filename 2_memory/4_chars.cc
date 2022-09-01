#include <iostream>
using namespace std;

int main() {
  char initial = 'P';
  char* pInitial = &initial;
  cout << "Memory address for initial P: " << pInitial << endl;

  return 0;
}
