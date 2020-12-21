class Solution {
  int lbHelper(vector<int>&nums, int target) { //lowerbound
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
      int mid = left + (right - left) / 2;

      if (target > nums[mid]) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }
    return left;
  }
public:
  vector<int> searchRange(vector<int>& nums, int target) {



    int leftIdx = lbHelper(nums, target); //first
    int lastIdx = lbHelper(nums, target + 1) - 1; //last

    if (leftIdx == nums.size() or nums[leftIdx] != target) {
      return { -1, -1};
    } else {
      return {leftIdx, lastIdx};
    }

  }
};