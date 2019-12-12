#ifndef _MAIN_H_
#define _MAIN_H_

#include"main.h"

int main(){

	//调用FindInPartillySortedMatrix_03::Find
	/*
	vector< vector<int> > M;
	vector<int> v1 = { 1, 2, 3, 4 };
	vector<int> v2 = { 5, 6, 7, 8 };
	vector<int> v3 = { 9, 10, 11, 12 };
	vector<int> v4 = { 13, 14, 15, 16 };
	M.push_back(v1);
	M.push_back(v2);
	M.push_back(v3);
	M.push_back(v4);
	FindInPartillySortedMatrix_03 obj_03;
	int target = 100;
	if (obj_03.Find(target, M)){
		cout << "找到了元素:" << target << endl;
	}
	else{
		cout << "没有找到元素:" << target << endl;
	}
	*/


	//调用ReplaceBlank()
	/*
	char* str = "We are happy.";		
	ReplaceBlank_04 obj_04;
	obj_04.replaceSpace(str, strlen(str));
	cout << str << endl;
	*/


	//调用PrintListRever()
	/*
	int a[] = { 1, 2, 3 };
	int len = sizeof(a) / sizeof(a[0]);
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	PrintListReverse_05 obj_05;
	obj_05.createListWithHead(head, a, len);
	obj_05.PrintList(head);
	cout << endl;
	obj_05.PrintListRever(head);
	*/

	system("pause");
	return 0;
}


#endif