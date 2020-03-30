/*
������ 16.11. ��ˮ��
������ʹ��һ��ľ�彨����ˮ�塣
���������͵�ľ�壬���г��Ƚ϶�
��ľ�峤��Ϊshorter�����Ƚϳ���
ľ�峤��Ϊlonger�����������ʹ��
k��ľ�塣��дһ��������������ˮ
�����п��ܵĳ��ȡ�
���صĳ�����Ҫ��С�������С�
ʾ����
���룺
shorter = 1
longer = 2
k = 3
����� {3,4,5,6}
��ʾ��
0 < shorter <= longer
0 <= k <= 100000
*/
class Solution {
public:
    vector<int> divingBoard(int shorter, int longer, int k) {
        vector<int> res;
        if(k == 0)
            return res;
        
        if(longer == shorter)
            return {k * shorter};
        
        for(int i = 0; i <= k; ++i)
        {
            res.push_back(shorter * i + longer * (k - i));
        }
        sort(res.begin(), res.end());
        
        return res;
    }
};