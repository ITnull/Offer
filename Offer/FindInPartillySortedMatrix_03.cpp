#include "FindInPartillySortedMatrix_03.h"

/* --------------------------------------------------------------------
*  函数原型 :  void Find()
*  说    明 :  在一个排序好的二维数组中查找目标数
*  输入参数 :
*  输出参数 :  无
*  返 回 值 :  true/false
* --------------------------------------------------------------------
*/
bool FindInPartillySortedMatrix_03::Find(int target, vector<vector<int> > array){
	bool ret = false;

	int rows = array.size();		//二维数组的行数
	int colums = array[0].size();	//二维数组的列数

	//从左下角开始遍历
	//int temp = array[rows][0];
	int i = rows - 1, j = 0;
	while (i >= 0 && j<colums){
		if (target > array[i][j]){
			j++;
		}
		else if (target < array[i][j]){
			i--;
		}
		else{
			ret = true;
			break;
		}
	}

	return (ret);
}
