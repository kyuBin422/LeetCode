#include <iostream>
#include <vector>
using namespace std;

//depth first search

class Solution {
public:
	int minReorder(int n, vector<vector<int>>& connections) {
		vector<bool> get_into_city0(n, false);
		// from 0 to 0 is true
		get_into_city0[0] = true;
		int nums_change_edge = 0;
		for (size_t i = 0; i < connections.size(); i++)
		{
			// initial node
			int start_node = connections[i][0];
			int des_node = connections[i][1];

			if (!get_into_city0[des_node])
			{
				get_into_city0[start_node] = true;
				get_into_city0[des_node] = true;
				nums_change_edge++;
			}
			else
			{
				get_into_city0[start_node] = true;
				get_into_city0[des_node] = true;
			}
		}
		return nums_change_edge;
	}
};

//int main()
//{
//	vector<vector<int>> connections{ {0,1},{2,0},{3,2} };
//	Solution ss;
//	cout << ss.minReorder(connections.size()+1,connections);
//	return 0;
//}