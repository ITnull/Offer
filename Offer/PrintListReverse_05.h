#pragma once
#include"main.h"

struct ListNode{
	int m_data;
	ListNode* pNext;
};

struct ListDNode{
	int m_data;
	ListDNode* pNext;
	ListDNode* pPrev;
};

class PrintListReverse_05
{
public:
	ListNode* createList(int* p, int len);
	void PrintList(ListNode* head);
	void PrintListRever(ListNode* head);
	ListNode* insertNode(ListNode* head, int position, int data);
};

