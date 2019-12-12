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
	ListNode* createListWithHead(ListNode* head, int* p, int len);

	void PrintList(ListNode* head);
	void PrintListRever(ListNode* head);
};

