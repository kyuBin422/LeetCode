#include<iostream>
#include<vector>
using namespace std;
////quicksort
//class Solution {
//public:
//	vector<int> nums;
//	void sort(int lo, int hi) {
//		if (lo < hi){
//			int pi = partition(lo, hi);
//			sort(lo, pi - 1);
//			sort(pi + 1, hi);
//		}
//	};
//	int partition(int lo, int hi) {
//		int privot = nums[hi];
//		int i = lo - 1;
//		for (int j = lo; j < hi; j++)
//		{
//			if (nums[j] < privot) {
//				i++;
//				swap(nums[i], nums[j]);
//			}
//		}
//		swap(nums[i + 1], nums[hi]);
//		return i + 1;
//	}
//
//	vector<int> sortArray(vector<int>& nums) {
//		this->nums = nums;
//		sort(0, nums.size() - 1);
//		return this->nums;
//
//	};
//
//};
class Solution {
private:
	vector<int> arr;
	void sort(int lo, int hi) {
		if (lo < hi) {
			int mid = (lo + hi) / 2;
			sort(lo, mid);
			sort(mid + 1, hi);
			merge(lo, mid, hi);
		}
	}
	void merge(int lo, int mid, int hi) {
		int n1 = mid - lo + 1;
		int n2 = hi - mid;

		vector<int> L;
		vector<int> R;

		for (int i = 0; i < n1; i++) {
			L.push_back(arr[lo + i]);
		}
		for (int i = 0; i < n2; i++) {
			R.push_back(arr[mid +1+ i]);
		}

		int i = 0, j = 0;
		int k = lo;
		while (i < n1 && j < n2) {
			if (L[i] <= R[j]) {
				arr[k] = L[i];
				i++;
			}
			else {
				arr[k] = R[j];
				j++;
			}
			k++;
		}
		while (i < n1) {
			arr[k] = L[i];
			i++;
			k++;
		}

		while (j < n2) {
			arr[k] = R[j];
			j++;
			k++;
		}
	}
public:
	vector<int> sortArray(vector<int>& nums) {
		this->arr = nums;
		sort(0, nums.size()-1);
		return arr;
	}
};

//int main() {
//	int a[] = { 5,2,3,1 };
//	Solution ss;
//	vector<int> nums(a, a + size(a));
//	vector<int> result = ss.sortArray(nums);
//	return 0;
//}