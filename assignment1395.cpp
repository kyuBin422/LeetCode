#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
	int numTeams(vector<int>& rating) {
		//vector<int> index(rating.size());
		int result = 0;
		//for (size_t i = 0; i < rating.size(); i++)
		//{
		//	index[i] = i;
		//}
		for (size_t i = 0; i < rating.size()-2; i++)
		{
			for (size_t j = i+1; j < rating.size() - 1; j++)
			{
				for (size_t k = j+1; k < rating.size(); k++)
				{
					if ((rating[i]< rating[j]& rating[j]<rating[k])| (rating[i] > rating[j]& rating[j] > rating[k]))
					{
						result++;
					}
				}
			}
		}
		return result;
	}
//private:
//	void qucikSort(vector<int>& rating, vector<int>& index, int low, int high) {
//		if (low < high)
//		{
//			int pi = partition(rating,index, low, high);
//			qucikSort(rating, index,low, pi - 1);
//			qucikSort(rating, index,pi + 1, high);
//		}
//	}
//	int partition(vector<int>& rating, vector<int>& index, int low, int high) {
//		int i = low - 1;
//		int pivot = rating[high];
//		for (int j=low;j<high;j++)
//		{
//			if (rating[j]<pivot)
//			{
//				i++;
//				swap(rating[j], rating[i]);
//				swap(index[j], index[i]);
//			}
//		}
//		swap(rating[high], rating[i + 1]);
//		swap(index[high], index[i+1]);
//		return i + 1;
//	}
};

//int main() {
//	vector<int>rating{ 2,5,3,4,1 };
//	Solution ss;
//	cout << ss.numTeams(rating);
//}