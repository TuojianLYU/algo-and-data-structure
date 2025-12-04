#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &nums) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = 0; j < nums.size() - i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        nums[j] = nums[j] ^ nums[j + 1];
        nums[j + 1] = nums[j] ^ nums[j + 1];
        nums[j] = nums[j] ^ nums[j + 1];
      }
    }
  }
}

int main() {
  vector<int> nums = {10, 7, 8, 9, 1, 5};
  bubbleSort(nums);
  for (size_t i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}