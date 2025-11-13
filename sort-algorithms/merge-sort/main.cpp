#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &nums, int left, int right);
void merge(vector<int> &nums, int left, int mid, int right);

void merge(vector<int> &nums, int left, int mid, int right) {
  int i = left;
  int j = mid + 1;
  int k = 0;
  vector<int> help(right - left + 1);
  while (i <= mid && j <= right) {
    if (nums[i] < nums[j]) {
      help[k++] = nums[i++];
    } else {
      help[k++] = nums[j++];
    }
  }
  while (i <= mid) {
    help[k++] = nums[i++];
  }
  while (j <= right) {
    help[k++] = nums[j++];
  }
  for (int i = 0; i < help.size(); i++) {
    nums[left + i] = help[i];
  }
}

void mergeSort(vector<int> &nums, int left, int right) {
  if (left >= right) {
    return;
  }

  int mid = left + (right - left) / 2;
  mergeSort(nums, left, mid);
  mergeSort(nums, mid + 1, right);
  merge(nums, left, mid, right);
}

int main() {
  vector<int> nums = {3, 1, 4, 2};
  mergeSort(nums, 0, nums.size() - 1);
  for (size_t i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}