#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

	bool canBeEqual(vector<int>& target, vector<int>& arr) {
		int equal_flag = 0;
		for (size_t i = 0; i < target.size(); i++)
		{
			for (size_t j = i; j < target.size(); j++)
			{
				if (arr[j] == target[i])
				{
					swap(arr[j], arr[i]);
					equal_flag++;
					break;
				}
			}
		}
		return equal_flag == target.size();
	}
	//int partition(vector<int> arr, int low, int high) {
	//	int pivot = arr[high];
	//	int i = low - 1;
	//	for (size_t j = low; j < high; j++)
	//	{
	//		if (arr[j] < pivot)
	//		{
	//			i++;
	//			swap(arr[j], arr[i]);
	//		}
	//	}
	//	swap(arr[i + 1], arr[high]);
	//	return i + 1;
	//}

	//void quickSort(vector<int> arr, int low, int high) {
	//	if (low < high)
	//	{
	//		int pi = partition(arr, low, high);
	//		quickSort(arr, low, pi - 1);
	//		quickSort(arr, pi + 1, high);
	//	}

	//}

};

//int main() {
//	int a[] = { 1,1,1 };
//	int b[] = { 1,1,1 };
//	vector<int> target(a, a + size(a));
//	vector<int> arr(b, b + size(b));
//	Solution ss;
//	cout << ss.canBeEqual(target, arr);
//	return 0;
//
//}