#include <iostream>
using namespace std;

void get_sum_diff(int a, int b, int *sum, int *diff) {
  *sum = a + b;
  *diff = a > b ? a - b : b - a;
}

int main() {
  int a = 31;
  int b = 24;

  int sum;
  int diff;

  get_sum_diff(a, b, &sum, &diff);

  cout << "sum: " << sum << " diff: " << diff << "\n";
}