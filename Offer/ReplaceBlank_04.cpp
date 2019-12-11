#include "ReplaceBlank_04.h"


ReplaceBlank_04::ReplaceBlank_04()
{
}


ReplaceBlank_04::~ReplaceBlank_04()
{
}

/* --------------------------------------------------------------------
*  函数原型 :  void replaceSpace()
*  说    明 :  把一个字符串的空格替换成"%20"
*  输入参数 :
*  输出参数 :  无
*  返 回 值 :  str
* --------------------------------------------------------------------
*/

void ReplaceBlank_04::replaceSpace(char *str, int length) {

	//遍历空格的个数，空间换时间
	int space_num = 0;
	for (int i = 0; i < length; i++){
		if (str[i] == ' '){
			space_num++;
		}
	}

	int newLen = length + space_num * 2;

	//cout << *str << endl;
	char* pstart = str;
	char* poriend = str + length - 1;
	char* pnewend = str + newLen - 1;
	
	for (int i = length - 1; i >= 0; i--){
		if (str[i] == ' '){
			space_num--;

			*(pstart + i + space_num * 2-1) = '%';
			*(pstart + i + space_num * 2) = '2';
			*(pstart + i + space_num * 2 + 1) = '0';

			/*
			str[i + space_num*2] = '%';
			str[i + space_num*2 + 1] = '2';
			str[i + space_num*2 + 2] = '0';
			*/
		} else{

			//str[i+space_num*2] = str[i];
			*(pstart + i + space_num * 2) = str[i];
		}
	}
	//str[newLen] = '\0';
}


