/*���дһ�����������ַ����еĿո�ȫ���滻Ϊ�� % 20�����ٶ����ַ������㹻�Ŀռ����������ַ�������֪
���ַ�������ʵ����(С�ڵ���1000)��ͬʱ��֤�ַ����ɴ�Сд��Ӣ����ĸ��ɡ�
����һ��string iniString Ϊԭʼ�Ĵ����Լ����ĳ��� int len, �����滻���string��
����������
"Mr John Smith��,13
���أ�"Mr%20John%20Smith"
��Hello World��, 12
���أ���Hello % 20 % 20World
IO���ӣ�https://www.nowcoder.com/questionTerminal/4060ac7e3e404ad1a894ef3e17650423?answerType=1&f=discussion
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



//�ڶ������
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