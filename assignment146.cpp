#include<iostream>
#include <map>
#include <deque>
#include <algorithm>
using namespace std;

//class LRUCache {
//public:
//	map<int, int> cache_map;
//	int size_map;
//	deque<int> cache_key;
//	LRUCache(int capacity) {
//		this->size_map = capacity;
//	}
//
//	int get(int key) {
//		return cache_map.find(key) == cache_map.end()?-1: cache_map[key];
//	}
//
//	void put(int key, int value) {
//		if (cache_map.find(key) == cache_map.end())
//		{
//			cache_map.emplace(key, value);
//		}
//		else cache_map[key] = value;
//
//		if (cache_key.size() >= size_map)
//		{
//			cache_map[cache_key.back()] = -1;
//			cache_key.pop_back();
//			cache_key.push_front(key);
//		}
//		else cache_key.push_back(key);
//	}
//};


//int main()
//{
//	LRUCache* obj = new LRUCache(1);
//	int param_1 = obj->get(1);
//	obj->put(1, 2);
//}