/*请编写一个方法，将字符串中的空格全部替换为“ % 20”。假定该字符串有足够的空间存放新增的字符，并且知
道字符串的真实长度(小于等于1000)，同时保证字符串由大小写的英文字母组成。
给定一个string iniString 为原始的串，以及串的长度 int len, 返回替换后的string。
测试样例：
"Mr John Smith”,13
返回："Mr%20John%20Smith"
”Hello World”, 12
返回：”Hello % 20 % 20World
IO链接：https://www.nowcoder.com/questionTerminal/4060ac7e3e404ad1a894ef3e17650423?answerType=1&f=discussion
*/

class Solution {
public:
	string replaceSpace(string str, int length)
	{
		string ret;
		for (size_t i = 0; i < str.size(); ++i)
		{
			if (str[i] == ' ')
			{
				ret += "%20";
			}
			else
			{
				ret += str[i];
			}
		}
		return ret;
	}
};



//第二种情况
class Solution {
public:
	void replaceSpace(char *str, int length)
	{
		int space_num = 0;
		for (int i = 0; i < length; ++i)
		{
			if (str[i] == ' ')
			{
				++space_num;
			}
		}
		int end = length;
		while (end >= 0 && space_num > 0)
		{
			if (str[end] != ' ')
			{
				str[end + 2 * space_num] = str[end];
			}
			else
			{
				--space_num;
				str[end + 2 * space_num] = '%';
				str[end + 2 * space_num + 1] = '2';
				str[end + 2 * space_num + 2] = '0';

			}
			--end;
		}
	}
};