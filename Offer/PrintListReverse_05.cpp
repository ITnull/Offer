#include "PrintListReverse_05.h"

ListNode* PrintListReverse_05::createListWithHead(ListNode* head, int* p, int len){
	//ListNode *head = (ListNode*)malloc(sizeof(ListNode));
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
	return head;
}

//�����в���ֵ

//˳ʱ��ӡ
void PrintListReverse_05::PrintList(ListNode* head){
	ListNode* pTmp = head;
	while (pTmp->pNext){
		pTmp = pTmp->pNext;
		cout << pTmp->m_data << " ";
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



