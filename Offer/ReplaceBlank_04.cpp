#include "ReplaceBlank_04.h"

/* --------------------------------------------------------------------
*  ����ԭ�� :  void replaceSpace()
*  ˵    �� :  ��һ���ַ����Ŀո��滻��"%20"
*  ������� :
*  ������� :  ��
*  �� �� ֵ :  str
* --------------------------------------------------------------------
*/

void ReplaceBlank_04::replaceSpace(char *str, int length) {

	if (str == NULL || length <= 0)
		return;

	//�����ո�ĸ������ռ任ʱ��
	int space_num = 0;
	for (int i = 0; i < length; i++){
		if (str[i] == ' '){
			space_num++;
		}
	}

	int newLen = length + space_num * 2;
	
	for (int i = length - 1; i >= 0; i--){
		if (str[i] == ' '){
			space_num--;
			str[i + space_num*2] = '%';
			str[i + space_num*2 + 1] = '2';
			str[i + space_num*2 + 2] = '0';

		} else{
			str[i+space_num*2] = str[i];
		}
	}
	str[newLen] = '\0';
}


