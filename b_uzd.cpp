#include <iostream>
#include <cmath>
using namespace std;

int PitagoraTeorema(int a, int b, int c) {
  if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  int n;

  cout << "Ievadi naturalu skaitli: ";
  cin >> n;

  for (int a = 1; a <= n; a++) {
  for (int b = 1; b <= n; b++) {
  for (int c = 1; c <= n; c++) {
    if (PitagoraTeorema(a, b, c)) {
        cout << "(" << a << ", " << b << ", " << c << ") ir Pitagora Teorema.";
        }
      }
    }
  }
}
