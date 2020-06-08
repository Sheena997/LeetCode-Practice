/*
1094. ƴ��
��������һλ˳�糵˾������������� capacity ������λ���������ؿ͡�
���ڵ�·�����ƣ��� ֻ�� ��һ��������ʻ��Ҳ����˵���������ͷ���
�䷽������Խ�������Ϊһ����������
�����һ�ݳ˿��г̼ƻ��� trips[][]������ 
trips[i] = [num_passengers, start_location, end_location] 
�����˵� i ��˿͵��г���Ϣ��
������͵ĳ˿�������
�˿͵��ϳ��ص㣻
�Լ��˿͵��³��ص㡣
��Щ�����ĵص�λ���Ǵ���ĳ�ʼ����λ����ǰ��ʻ����Щ�ص�����ľ���
������һ���������ʻ�����ϣ���
������ݸ������г̼ƻ���ͳ��ӵ���λ�������ж���ĳ��Ƿ����˳����
�ɽ������ó˿͵����񣨵��ҽ�������������и������г��н������г˿�ʱ��
���� true�������뷵�� false����
ʾ�� 1��
���룺trips = [[2,1,5],[3,3,7]], capacity = 4
�����false
ʾ�� 2��
���룺trips = [[2,1,5],[3,3,7]], capacity = 5
�����true
ʾ�� 3��
���룺trips = [[2,1,5],[3,5,7]], capacity = 3
�����true
ʾ�� 4��
���룺trips = [[3,2,7],[3,7,9],[8,3,9]], capacity = 11
�����true
��ʾ��
����Լ���˿ͻ��Ծ����� �����º��ϡ� ����������
trips.length <= 1000
trips[i].length == 3
1 <= trips[i][0] <= 100
0 <= trips[i][1] < trips[i][2] <= 1000
1 <= capacity <= 100000

��Դ��LeetCode
���ӣ�https://leetcode-cn.com/problems/car-pooling/
*/
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> mp;
        for(auto& e : trips)
        {
            mp[e[1]] += e[0];//��e[1]����������공֮��������������
            mp[e[2]] -= e[0];//��e[2]����������공֮��������������
        }
        
        int count = 0;
        for(auto it : mp)
        {
            count += it.second;
            if(count > capacity)
                return false;
        }
        
        return true;
    }
};