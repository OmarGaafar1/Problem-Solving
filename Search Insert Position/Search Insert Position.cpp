class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int left = 0, mid, right = size(nums) - 1;
        while (left < right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                right = mid;
            else
                left = mid + 1;
        }
        return nums[left] < target ? left + 1 : left;
    }
};