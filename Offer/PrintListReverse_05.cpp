#include "PrintListReverse_05.h"

ListNode* PrintListReverse_05::createListWithHead(ListNode* head, int* p, int len){
	//ListNode *head = (ListNode*)malloc(sizeof(ListNode));
	//ListNode *head = NULL;  这样写报错，临时变量随着函数结束消失
	ListNode* pTemp = head;
	//while (*p != '\0')  int[]不能使用这个语句判断数组结束，char[]类型的可以
	for (int i = 0; i < len; i++){
		ListNode* node = (ListNode*)malloc(sizeof(ListNode));
		//分配一个节点后赋初始值
		node->pNext = NULL;
		node->m_data = p[i];
		pTemp->pNext = node;
		pTemp = node;
	}
	return head;
}

//链表中插入值

//顺时打印
void PrintListReverse_05::PrintList(ListNode* head){
	ListNode* pTmp = head;
	while (pTmp->pNext){
		pTmp = pTmp->pNext;
		cout << pTmp->m_data << " ";
	}
}

//逆序打印
void PrintListReverse_05::PrintListRever(ListNode* head){
	ListNode* pTemp = head;
	//递归
	if (pTemp->pNext){
		PrintListRever(pTemp->pNext);
	}
	cout << pTemp->m_data << " ";
}



