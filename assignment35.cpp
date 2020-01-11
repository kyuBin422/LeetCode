#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int l = 0,r = nums.size();
        while (l<r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {

                return mid;
            }
            else if (nums[mid] > target) {
                r = mid;
            }
            else if (nums[mid] < target)
            {
                l = mid + 1;
            }       
        }
        return nums[l] == target ? l : l + 1;
    }
};

int main() {
    int a[] = { 1,2,3,4 };
    vector<int> nums(a, a + size(a));
    Solution ss;
    int result = ss.searchInsert(nums, 1);
}