#include <iostream>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    int array[100000];
    int top_value;
    MinStack() {
        this->top_value = -1;
    }

    void push(int x) {
		this->top_value++;
        this->array[this->top_value] = x;
    }

    void pop() {
        this->top_value--;
    }

    int top() {
		//if (top_value == 0)
		//{
  //          int empty_top_value;
		//	return empty_top_value;
		//}
        return top_value<0?NULL:array[this->top_value];
    }

    int getMin() {
        int min_value=array[0];
        for (size_t i=0;i<=this->top_value;i++)
        {
            min_value = min_value >= array[i] ? array[i] : min_value;
        }
        return min_value;
    }
};

//int main() {
//    MinStack* obj = new MinStack();
//	obj->push(2147483646);
//	obj->push(2147483646);
//	obj->push(2147483647);
//	cout << obj->top();
//	obj->pop();
//	cout << obj->getMin();
//	obj->pop();
//	cout << obj->getMin();
//	obj->pop();
//	obj->push(2147483647);
//	cout << obj->top();
//	cout << obj->getMin();
//
//
//}
