#include "PrintListReverse_05.h"



//-------------------------������-----------------------

ListNode* PrintListReverse_05::createList(int* p, int len){

	ListNode *head = (ListNode*)malloc(sizeof(ListNode));
	//ListNode *head = NULL;  ����д������ʱ�������ź���������ʧ
	ListNode* pTemp = head;
	//while (*p != '\0')  int[]����ʹ���������ж����������char[]���͵Ŀ���
	for (int i = 0; i < len; i++){
		ListNode* node = (ListNode*)malloc(sizeof(ListNode));
		//����һ���ڵ�󸳳�ʼֵ
		node->pNext = NULL;
		node->m_data = p[i];
		pTemp->pNext = node;
		pTemp = node;
	}
	head = head->pNext;
	return head;
}

//���������ڵ�positionλ�õĺ������ڵ�
ListNode* PrintListReverse_05::insertNode(ListNode* head, int position, int data){

	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->m_data = data;
	newNode->pNext = NULL;
	ListNode* tmp = head;
	int count=0;
	//�����Ԫ�ص�����һ��Ԫ��
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

//ɾ������ڵ�


//�����������

//˳ʱ��ӡ
void PrintListReverse_05::PrintList(ListNode* head){
	ListNode* pTmp = head;
	while (pTmp){
		cout << pTmp->m_data << " ";
		pTmp = pTmp->pNext;
	}
}

//�����ӡ
void PrintListReverse_05::PrintListRever(ListNode* head){
	ListNode* pTemp = head;
	//�ݹ�
	if (pTemp->pNext){
		PrintListRever(pTemp->pNext);
	}
	cout << pTemp->m_data << " ";
}



