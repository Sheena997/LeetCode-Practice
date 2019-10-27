 
/*
��ת����
���ǳ�һ���� X Ϊ����, �������ÿλ��������ر���ת 180 �Ⱥ������Կ��Եõ�һ����Ч�ģ��Һ� X ��ͬ������Ҫ��ÿλ���ֶ�Ҫ����ת��

���һ������ÿλ���ֱ���ת�Ժ���Ȼ����һ�����֣�?�����������Ч�ġ�0, 1, �� 8 ����ת����Ȼ�������Լ���2 �� 5 ���Ի�����ת�ɶԷ���6 �� 9 ͬ��������Щ����������������ת�Ժ󶼲�������Ч�����֡�

����������һ��������?N, �����?1 ��?N ���ж��ٸ���?X �Ǻ�����

ʾ��:
����: 10
���: 4
����: 
��[1, 10]�����ĸ������� 2, 5, 6, 9��
ע�� 1 �� 10 ���Ǻ���, ��Ϊ��������ת֮�󲻱䡣

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/rotated-digits

*/
class Solution {
public:
    int rotatedDigits(int N) {
        int tag1 = 0;
        int num = 0;
        int tag2 = 0;
        for(int i = 0; i < N + 1; ++i)
        {
            if(i > 10)
            {
                int a = i;
                while(a > 0)
                {
                    int b = a % 10;
                    if(b == 2 || b == 5 || b == 6 || b == 9)
                        tag1 = 1;
                    else if(b == 3 || b == 4 || b == 7)
                        tag2 = 1;
                    a = a / 10;
                }
                if(tag1 == 1 && tag2 == 0)
                    ++num;
                tag1 = 0;
                tag2 = 0;
            }
            else
            {
                if(i == 2 || i == 5 || i == 6 || i == 9)
                    ++num;
            }
        }
        return num;
    }
};


/*
����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��

ʾ��:

����: [0,1,0,3,12]
���: [1,3,12,0,0]

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/move-zeroes
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //����ָ��
        int i = 0;
        for(int j = 0; j < nums.size(); ++j)
        {
            if(nums[j] != 0)
            {
                nums[i] = nums[j];
                ++i;
            }
        }
        for(int j = i; j < nums.size(); ++j)
        {
            nums[j] = 0;
        }
    }
};