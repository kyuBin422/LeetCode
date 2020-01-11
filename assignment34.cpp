#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {

		int mid1 = binarySearchLeft(nums, 0, nums.size(), target);
		int mid2 = binarySearchRight(nums, 0, nums.size(), target);
		int result[] = { mid1,mid2 };
		return vector<int>(result, result + 2);
	}

private:
	int binarySearchLeft(vector<int> arr, int l, int r, int x) {
		if (arr.size() == 0) { return -1; }
		else if (arr.size() < 2) {
			return arr[0] == x ? 0 : -1;
		}

		while (l < r) {

			int mid = l + (r - l) / 2;
			if (arr[mid] == x) { r = mid; }
			else if (arr[mid] < x)
			{
				l = mid + 1;
			}
			else if (arr[mid] > x)
			{
				r = mid;
			}
		}
		return arr[l] == x ? l : -1;

	}

	int binarySearchRight(vector<int> arr, int l, int r, int x) {
		if (arr.size() == 0) { return -1; }
		else if (arr.size() < 2) {
			return arr[0] == x ? 0 : -1;
		}
		while (l < r) {

			int mid = l + (r - l) / 2;
			if (arr[mid] == x) { l = mid + 1; }
			else if (arr[mid] < x)
			{
				l = mid + 1;
			}
			else if (arr[mid] > x)
			{
				r = mid;
			}
		}
		return arr[l +1] == x ? l + 1 : -1;

	}
};

//int main() {
//	int a[] = { 2,2 };
//	vector<int> nums(a, a + size(a));
//	Solution ss;
//	vector<int> result = ss.searchRange(nums, 1);
//
//	return 0;
//}

