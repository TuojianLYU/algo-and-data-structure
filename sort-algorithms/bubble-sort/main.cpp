#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &nums) {
  for (int i = 0; i < nums.size() - 1; i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] > nums[j]) {
        nums[i] = nums[i] ^ nums[j];
        nums[j] = nums[i] ^ nums[j];
        nums[i] = nums[i] ^ nums[j];
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