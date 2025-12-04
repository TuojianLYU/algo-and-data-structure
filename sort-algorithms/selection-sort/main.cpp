#include <iostream>
#include <vector>
using namespace std;

void sort(int *arr, size_t size) {
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] > arr[j]) {
        arr[i] = arr[i] ^ arr[j];
        arr[j] = arr[i] ^ arr[j];
        arr[i] = arr[i] ^ arr[j];
      }
    }
  }
}


int main() {

  vector<int> arrVector = {3, 1, 4, 5, 2};
  int arrArray[] = {3, 1, 4, 5, 2};
  sort(arrArray, sizeof(arrArray) / sizeof(arrArray[0]));

  for (int i = 0; i < 5; i++) {
    cout << arrArray[i] << " ";
  }

  return 0;
}