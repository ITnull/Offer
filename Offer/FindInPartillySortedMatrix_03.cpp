#include "FindInPartillySortedMatrix_03.h"

/* --------------------------------------------------------------------
*  ����ԭ�� :  void Find()
*  ˵    �� :  ��һ������õĶ�ά�����в���Ŀ����
*  ������� :
*  ������� :  ��
*  �� �� ֵ :  true/false
* --------------------------------------------------------------------
*/
bool FindInPartillySortedMatrix_03::Find(int target, vector<vector<int> > array){
	bool ret = false;

	int rows = array.size();		//��ά���������
	int colums = array[0].size();	//��ά���������

	//�����½ǿ�ʼ����
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
