#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &nums, int left, int right);
void quickSort(vector<int> &nums, int left, int right);
void swap(vector<int> &nums, int i, int j);

int main() {
  vector<int> nums = {10, 7, 8, 9, 1, 5};
  quickSort(nums, 0, nums.size() - 1);
  for (size_t i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;

  return 0;
}

void swap(vector<int> &nums, int i, int j) {
  int tmp = nums[i];
  nums[i] = nums[j];
  nums[j] = tmp;
}

int partition(vector<int> &nums, int left, int right) {
  int i = left, j = right;

  while (i < j) {
    while (i < j && nums[left] <= nums[j])
      j--;
    while (i < j && nums[left] > nums[i])
      i++;
    swap(nums, i, j);
  }
  swap(nums, i, left);
  return i;
}

void quickSort(vector<int> &nums, int left, int right) {
  if (left >= right) {
    return;
  }
  int pivot = partition(nums, left, right);
  quickSort(nums, left, pivot - 1);
  quickSort(nums, pivot + 1, right);
}