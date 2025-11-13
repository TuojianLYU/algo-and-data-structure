#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &nums) {
  for (size_t i = 0; i < nums.size(); i++) {
    for (size_t j = i+1; j < nums.size(); j++) {
      if (nums[j] < nums[i]) {
        nums[i] = nums[i] ^ nums[j];
        nums[j] = nums[i] ^ nums[j];
        nums[i] = nums[i] ^ nums[j];
      }
    }
  }
}

int main() {
  vector<int> nums = {3, 1, 4, 2};
  selectionSort(nums);
  for (size_t i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}