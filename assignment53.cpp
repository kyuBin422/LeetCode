#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
////version1 brute  force search
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int maxValue = INT32_MIN;
//		for (int i = 0; i < nums.size(); i++) {
//			int Temp = 0;
//			for (int j = i; j < nums.size(); j++) {
//				Temp = Temp + nums[j];
//				maxValue = maxValue > Temp ? maxValue : Temp;
//			}
//		}
//		cout << maxValue << '\n' << endl;
//
//		return maxValue;
//	}
//};


////version2 贪心算法
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int maxValue = INT32_MIN;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			int tmp = 0;
//			for (int j = i\
//				; j <nums.size(); j++)
//			{
//				tmp += nums[j];
//				maxValue = maxValue > tmp ? maxValue : tmp;
//				if (tmp < 0) break;
//			}
//		}
//		return maxValue;
//	}
//};

//version3 不知道层数全部用递归
class Solution
{
public:
    int maxSubArray(vector<int>& nums)
    {
        //类似寻找最大最小值的题目，初始值一定要定义成理论上的最小最大值
        int result = INT_MIN;
        int numsSize = int(nums.size());
        result = maxSubArrayHelper(nums, 0, numsSize - 1);
        return result;
    }

    int maxSubArrayHelper(vector<int>& nums, int left, int right)
    {
        if (left == right)
        {
            return nums[left];
        }
        int mid = (left + right) / 2;
        int leftSum = maxSubArrayHelper(nums, left, mid);
        //注意这里应是mid + 1，否则left + 1 = right时，会无线循环
        int rightSum = maxSubArrayHelper(nums, mid + 1, right);
        int midSum = findMaxCrossingSubarray(nums, left, mid, right);
        int result = max(leftSum, rightSum);
        result = max(result, midSum);
        return result;
    }

    int findMaxCrossingSubarray(vector<int>& nums, int left, int mid, int right)
    {
        int leftSum = INT_MIN;
        int sum = 0;
        for (int i = mid; i >= left; i--)
        {
            sum += nums[i];
            leftSum = max(leftSum, sum);
        }

        int rightSum = INT_MIN;
        sum = 0;
        //注意这里i = mid + 1，避免重复用到nums[i]
        for (int i = mid + 1; i <= right; i++)
        {
            sum += nums[i];
            rightSum = max(rightSum, sum);
        }
        return (leftSum + rightSum);
    }
};

//int main() {
//	int a[] = { -1 };
//	vector<int> candidates(a, a + size(a));
//	Solution ss;
//	int result = ss.maxSubArray(candidates);
//	return 0;
//}