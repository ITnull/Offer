#include "PrintListReverse_05.h"



//-------------------------单链表-----------------------

ListNode* PrintListReverse_05::createList(int* p, int len){

	ListNode *head = (ListNode*)malloc(sizeof(ListNode));
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
	head = head->pNext;
	return head;
}

//单链表中在第position位置的后面插入节点
ListNode* PrintListReverse_05::insertNode(ListNode* head, int position, int data){

	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->m_data = data;
	newNode->pNext = NULL;
	ListNode* tmp = head;
	int count=0;
	//插入的元素当做第一个元素
	if (position == 1){
		newNode->pNext = head;
		head = newNode;
	}
	while (tmp){
		count++;

		if (count == position){

		}
		tmp = tmp->pNext;
	}
	return head;
}

//删除链表节点


//单链表的排序

//顺时打印
void PrintListReverse_05::PrintList(ListNode* head){
	ListNode* pTmp = head;
	while (pTmp){
		cout << pTmp->m_data << " ";
		pTmp = pTmp->pNext;
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



