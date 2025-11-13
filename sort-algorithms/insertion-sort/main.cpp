#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &nums, int i, int j);
void insertionSort(vector<int> &nums);

void insertionSort(vector<int> &nums) {
  for (size_t i = 1; i < nums.size(); i++) {
    int base = nums[i];
    int j = i - 1;
    while (j >= 0 && nums[j] > base) {
      nums[j + 1] = nums[j];
      j--;
    }
    nums[j + 1] = base;
  }
}

int main() {
  vector<int> nums = {3, 1, 4, 2};
  insertionSort(nums);
  for (size_t i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}