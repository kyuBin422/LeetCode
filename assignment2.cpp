#include<iostream>
using namespace std;
/*
typename 与DataType



*/
template <typename DataType>
struct Node
{
	DataType data;
	Node<DataType>* next;
};

template <typename DataType>
class LinkList
{
public:
	LinkList();
	LinkList(DataType a[], int n);
	LinkList(DataType a[], int n, int end);
	int  Empty();
	void  PrintList();
	int  Length();
	DataType Get(int i);
	int Locate(DataType x);
	void Insert(int i, DataType x);
	DataType  Delete(int i);
private:
	Node<DataType>* first;
};

template <typename DataType>
LinkList<DataType> ::LinkList()
{
	first = new Node<DataType>;              
	first->next = nullptr;                            
}

template <typename DataType>
int  LinkList<DataType> ::Empty()
{
	if (first->next == nullptr) return 1;
	else  return 0;
}

template <typename DataType>
void LinkList<DataType> ::PrintList()
{
	Node<DataType>* p = first->next;                
	while (p != nullptr)
	{
		cout << p->data << "\t";
		p = p->next;                
	}
	cout << endl;
}

template <typename DataType>
int LinkList<DataType> ::Length()
{
	Node<DataType>* p = first->next;
	int count = 0;
	while (p != nullptr)
	{
		count++;
		p = p->next;
	}
	return count;
}
template <typename DataType>
DataType LinkList<DataType> ::Get(int i)
{
	Node<DataType>* p = first->next;         
	int count = 1;                                           
	while (p != nullptr && count < i)
	{
		p = p->next;                                         
		count++;
	}
	if (p == nullptr) throw "����λ�ô���";
	else return p->data;
}
template <typename DataType>
int LinkList<DataType> ::Locate(DataType x)
{
	Node<DataType>* p = first->next;         
	int count = 1;                                           
	while (p != nullptr)
	{
		if (p->data == x) return count;          
		p = p->next;
		count++;
	}
	return 0;                                                    
}
template <typename DataType>
void LinkList<DataType> ::Insert(int i, DataType x)
{
	Node<DataType>* p = first, * s = nullptr;            
	int count = 0;
	while (p != nullptr && count < i - 1)                
	{
		p = p->next;                                                    
		count++;
	}
	if (p == nullptr) throw "����λ�ô���";             
	else {
		s = new Node<DataType>; s->data = x;     
		s->next = p->next; p->next = s;                   
	}
}
template <typename DataType>
DataType LinkList<DataType> ::Delete(int i)
{
	DataType x; int count = 0;
	Node<DataType>* p = first, * q = nullptr;           
	while (p != nullptr && count < i - 1)                  
	{
		p = p->next;
		count++;
	}
	if (p == nullptr || p->next == nullptr)  throw "ɾ��λ�ô���";
	else {
		q = p->next; x = q->data;                              
		p->next = q->next;                                       
		delete q;
		return x;
	}
}
template <typename DataType>
LinkList<DataType> ::LinkList(DataType a[], int n)
{
	first = new Node<DataType>;
	first->next = nullptr;     
	for (int i = 0; i < n; i++)
	{
		Node<DataType>* s = nullptr;
		s = new Node<DataType>;
		s->data = a[i];
		s->next = first->next;
		first->next = s;                
	}
}
template <typename DataType>
LinkList<DataType> ::LinkList(DataType a[], int n, int end)
{
	first = new Node<DataType>;                                
	Node<DataType>* r = first, * s = nullptr;               
	for (int i = 0; i < n; i++)
	{
		s = new Node<DataType>;
		s->data = a[i];
		r->next = s;
		r = s;                                   
	}
	r->next = nullptr;             
}

//int main()
//{
//
//	//	Node<int>  n1;
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	LinkList<int>  s1(a, 10);
//	s1.PrintList();
//	LinkList<int>  s2(a, 10, 1);
//	s2.PrintList();
//	cout << s1.Length() << endl;
//	cout << s1.Get(5) << endl;
//	cout << s1.Locate(5) << endl;
//
//
//
//
//	return 0;
//}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL) {}

};


class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int len1 = 1;
		int len2 = 1;
		ListNode* p = l1;
		ListNode* q = l2;
		while (p->next != NULL)
		{
			len1++;
			p = p->next;
		}
		while (q->next != NULL)
		{
			len2++;
			q = q->next;
		}
		if (len1 > len2) {
			for (int i = 1; i <= len1 - len2; i++)
			{
				q->next = new ListNode(0);
				q = q->next;
			}
		}
		else
		{
			for (int i = 1; i <= len2 - len1; i++)
			{
				p->next = new ListNode(0);
				p = p->next;
			}
		}
		p = l1;
		q = l2;
		bool count = false;
		ListNode* l3 = new ListNode(-1);
		ListNode* w = l3;
		int i = 0;
		while (p != NULL && q != NULL)
		{
			i = count + p->val + q->val;
			w->next = new ListNode(i % 10);
			count = i >= 10 ? true : false;
			w = w->next;
			p = p->next;
			q = q->next;
		}
		if (count)
		{
			w->next = new ListNode(1);
			w = w->next;
		}
		return l3->next;
	}
};

