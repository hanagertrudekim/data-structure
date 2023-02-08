#include <array>
#include <iostream>
using namespace std;

void Swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void BubbleSort(int *arrIn, int nArr) {
  for (int i = 0; i < nArr; i++) {
    for (int j = i+1; j < nArr; j++) {
      if (arrIn[i] < arrIn[j]) {
        Swap(arrIn[i], arrIn[j]);
      } else {
        continue;
      }
    }
  }
}

int main() {
  int arrIn[12] = {5, 11, 6, 2, 3, 1, 9, 12, 7, 8, 10, 4};

  BubbleSort(arrIn, (sizeof(arrIn) / sizeof(int)));

  for (int i : arrIn) {
    cout << i << " ";
  }
}