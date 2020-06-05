#include<iostream>
#include<vector>
using namespace std;

////quickSort
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
//
//class Solution {
//private:
//	vector<int> arr;
//	void sort(int lo, int hi) {
//		if (lo < hi) {
//			int mid = (lo + hi) / 2;
//			sort(lo, mid);
//			sort(mid + 1, hi);
//			merge(lo, mid, hi);
//		}
//	}
//	void merge(int lo, int mid, int hi) {
//		int n1 = mid - lo + 1;
//		int n2 = hi - mid;
//
//		vector<int> L;
//		vector<int> R;
//
//		for (int i = 0; i < n1; i++) {
//			L.push_back(arr[lo + i]);
//		}
//		for (int i = 0; i < n2; i++) {
//			R.push_back(arr[mid + 1 + i]);
//		}
//
//		int i = 0, j = 0;
//		int k = lo;
//		while (i < n1 && j < n2) {
//			if (L[i] <= R[j]) {
//				arr[k] = L[i];
//				i++;
//			}
//			else {
//				arr[k] = R[j];
//				j++;
//			}
//			k++;
//		}
//		while (i < n1) {
//			arr[k] = L[i];
//			i++;
//			k++;
//		}
//
//		while (j < n2) {
//			arr[k] = R[j];
//			j++;
//			k++;
//		}
//	}
//public:
//	vector<int> sortArray(vector<int>& nums) {
//		this->arr = nums;
//		sort(0, nums.size() - 1);
//		return arr;
//	}
//};

class Solution {
public:
	vector<int> sortArray(vector<int>& nums) {
		buildHeap(nums, nums.size());
		return nums;
	}
private:
	void heapify(vector<int>& nums, int n, int i) {
		int largest = i;
		int l = 2 * i + 1;
		int r = 2 * i + 2;
		if (l<n && nums[l]>nums[largest]) largest = l;
		if (r < n && nums[r]>nums[largest]) largest = r;
		if (largest != i)
		{
			swap(nums[i], nums[largest]);
			heapify(nums, n, largest);
		}
	}

	void buildHeap(vector<int>& nums, int n) {
		for (int i = n / 2 - 1; i >= 0; i--)
		{
			heapify(nums, n, i);
		}
		for (int i=n-1;i>0;i--)
		{
			swap(nums[0], nums[i]);
			heapify(nums, i, 0);
		}
	}
};


int main() {
	Solution ss;
	vector<int> nums{ 5,1,1,2,0,0 };
	vector<int> result = ss.sortArray(nums);
	return 0;
}