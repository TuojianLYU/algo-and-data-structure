#include <iostream>
#include <vector>

using namespace std;

void insertSort(vector<int> &vec) {

  for (int i = 1; i < vec.size(); i++) {
    int base = vec[i];
    int j = i - 1;
    while (j >= 0 && vec[j] > base) {
      vec[j + 1] = vec[j];
      j--;
    }
    vec[j + 1] = base;
  }
}

int main() {
  vector<int> vec = {2, 5, 1, 3, 6, 2, 1};
  insertSort(vec);

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << endl;
  }

  return 0;
}