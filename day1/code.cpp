#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "give me a number: ";
  cin >> num;
  // int sku = 1;
  for (int i = 0; i < num; i++) {
    for (int k = 0; k < i + 1; k++) {
      cout << " *";
    }
    for (int m = 0; m < (2 * num) - ((i + 1) * 2); m++) {
      cout << "  ";
    }
    for (int k = 0; k < i + 1; k++) {
      cout << " *";
    }
    cout << "\n";
  }
  for (int i = 0; i < num; i++) {
    for (int k = 0; k < num - i; k++) {
      cout << " *";
    }
    for (int m = 0; m < i * 2; m++) {
      cout << "  ";
    }
    for (int k = 0; k < num - i; k++) {
      cout << " *";
    }

    cout << "\n";
  }

  return 0;
}
