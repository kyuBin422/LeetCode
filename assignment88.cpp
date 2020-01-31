#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int pointer1 = m-1;
		int pointer2 = n-1;
		for (int i = m + n - 1; i >= 0; i--) {

			if (pointer1 < 0 & pointer2 >= 0) {
				nums1[i] = nums2[pointer2];
				pointer2--;
			}
			else if (pointer1 >= 0 & pointer2 < 0)
			{
				nums1[i] = nums1[pointer1];
				pointer1--;
			}
			else if (nums1[pointer1] >= nums2[pointer2]) {
				nums1[i] = nums1[pointer1];
				pointer1--;
			}
			else if (nums1[pointer1] < nums2[pointer2])
			{
				nums1[i] = nums2[pointer2];
				pointer2--;
			};

		}


		return;
	}
};


//int main() {
//	int a[] = { 1,2,3,0,0,0 };
//	vector<int> nums1(a, a + size(a));
//	int b[] = { 2,5,6 };
//	vector<int> nums2(b, b + 3);
//	Solution ss;
//	ss.merge(nums1, 3, nums2, 3);
//	return 0;
//}