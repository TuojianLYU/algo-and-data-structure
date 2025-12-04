#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &vec) {
  for (int i = 0; i < vec.size(); i++) {
    for (int j = 0; j < vec.size() - i -1; j++) {
      if (vec[j] > vec[j + 1]) {
        vec[j] = vec[j] ^ vec[j + 1];
        vec[j + 1] = vec[j] ^ vec[j + 1];
        vec[j] = vec[j] ^ vec[j + 1];
      }
    }
  }
}

int main() {

  vector<int> vec = {5, 2, 1, 6, 2};
  bubbleSort(vec);

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << endl;
  }

  return 0;
}