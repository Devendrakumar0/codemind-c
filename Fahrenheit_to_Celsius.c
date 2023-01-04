#include <iostream>
#include <iomanip>

using namespace std;

void fahrenheit_to_celsius(double fahrenheit) {
  double celsius = (fahrenheit - 32) * 5 / 9;
  cout << fixed << setprecision(2) << celsius << endl;
}

int main() {
    double c;
    cin>>c;
  fahrenheit_to_celsius(c); 
  return 0;
}
