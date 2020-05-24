/*
1338. �����С����
����һ���������� arr������Դ���ѡ��һ���������ϣ���ɾ����Щ�����������е�ÿ�γ��֡�

���� ���� ��ɾ�������е�һ���������������ϵ���С��С��

 

ʾ�� 1��

���룺arr = [3,3,3,3,5,5,5,2,2,7]
�����2
���ͣ�ѡ�� {3,7} ʹ�ý������Ϊ [5,5,5,2,2]������Ϊ 5��ԭ���鳤�ȵ�һ�룩��
��СΪ 2 �Ŀ��м����� {3,5},{3,2},{5,2}��
ѡ�� {2,7} �ǲ����еģ����Ľ������Ϊ [3,3,3,3,5,5,5]�������鳤�ȴ���ԭ����Ķ���֮һ��
ʾ�� 2��

���룺arr = [7,7,7,7,7,7]
�����1
���ͣ�����ֻ��ѡ�񼯺� {7}���������Ϊ�ա�
ʾ�� 3��

���룺arr = [1,9]
�����1
ʾ�� 4��

���룺arr = [1000,1000,3,7]
�����1
ʾ�� 5��

���룺arr = [1,2,3,4,5,6,7,8,9,10]
�����5
 
��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/reduce-array-size-to-the-half/
*/
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> ump;
        for(auto e : arr)
            ++ump[e];
        
        vector<int> vc;
        for(auto e : ump)
            vc.push_back(e.second);
        sort(vc.begin(), vc.end());
        
        int sum = 0;
        
        for(int i = vc.size() - 1; i >= 0; --i)
        {
            sum += vc[i];
            if(2 * sum >= arr.size())
                return vc.size() - i;
        }
        
        return vc.size();
    }
};