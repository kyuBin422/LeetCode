#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {

		int mid = binarySearch(nums, 0, nums.size() - 1, target);
		if (mid == -1) {
			return vector<int>(-1, -1);
		}
		int mid1 = binarySearch(nums, 0, mid, nums[mid]);
		int mid2 = binarySearch(nums, mid, nums.size() - 1, nums[mid]);
		int result[] = { mid1,mid2 };
		return vector<int>(result, result + 2);
	}

private:
	int binarySearch(vector<int> arr, int l, int r, int x) {
		if (r >= l) {
			int mid = l + (r - l) / 2;
			if (arr[mid] == x) {
				return mid;
			}
			else if (arr[mid] > x)
			{
				return binarySearch(arr, l, mid - 1, x);
			}
			else
			{
				return binarySearch(arr, mid + 1, r, x);

			}
		}
		return-1;

	}

};

int main() {
	int a[] = { 5,7,7,8,8,10 };
	vector<int> nums(a, a + size(a));
	Solution ss;
	vector<int> result = ss.searchRange(nums, 8);
	return 0;
}

