#ifndef _MAIN_H_
#define _MAIN_H_

#include"main.h"

int main(){
	//调用FindInPartillySortedMatrix_03::Find
	vector< vector<int> > M;
	vector<int> v1 = { 1, 2, 3, 4 };
	vector<int> v2 = { 5, 6, 7, 8 };
	vector<int> v3 = { 9, 10, 11, 12 };
	vector<int> v4 = { 13, 14, 15, 16 };
	M.push_back(v1);
	M.push_back(v2);
	M.push_back(v3);
	M.push_back(v4);

	FindInPartillySortedMatrix_03 objF;
	int target = 100;

	if (objF.Find(target, M)){
		cout << "找到了元素:" << target << endl;
	}
	else{
		cout << "没有找到元素:" << target << endl;
	}



	system("pause");
	return 0;
}


#endif