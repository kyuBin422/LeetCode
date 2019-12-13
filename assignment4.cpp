#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector <int> tmpNum;
		tmpNum.insert(tmpNum.end(), nums1.begin(), nums1.end());
		tmpNum.insert(tmpNum.end(), nums2.begin(), nums2.end());
		std::sort(tmpNum.begin(), tmpNum.end());
		int loc = tmpNum.size() / 2;

		if (tmpNum.size() % 2 == 0) {
			return (double)(tmpNum[loc-1] + tmpNum[loc]) / 2;

		}
		else
		{
			return (double)tmpNum[loc];
		}



	}
};
template <class T>
int getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}

//int main() {
//	int a[] = { 1,2 };
//	int b[] = { 3,4 };
//	vector<int> guess(a, a + getArrayLen(a));
//	vector<int> answer(b, b + getArrayLen(b));
//	Solution ss;
//	double mark = ss.findMedianSortedArrays(guess, answer);
//	cout << mark;
//
//}