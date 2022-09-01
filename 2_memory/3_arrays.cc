#include <iostream>
using namespace std;

int main() {
  double values[10];        // declare an array values with 10 elements
  double* pValue = values;  // define a pointer to the array
  cout << "value array address: " << values << endl;
  cout << "pValues: " << pValue << endl;

  return 0;
}
