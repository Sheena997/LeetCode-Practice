/*
����վ��ľ���
���ι���·������n��վ���������0��n - 1���б�š�������֪ÿһ�����ڹ���վ֮��ľ��룬distance[i]��ʾ���Ϊi�ĳ�վ�ͱ��Ϊ(i + 1) % n�ĳ�վ֮��ľ��롣

�����ϵĹ����������԰�˳ʱ�����ʱ��ķ�����ʻ��

���س˿ʹӳ�����start��Ŀ�ĵ�destination֮�����̾��롣
ʾ�� 1��

���룺distance = [1,2,3,4], start = 0, destination = 1
�����1
���ͣ�����վ 0 �� 1 ֮��ľ����� 1 �� 9����Сֵ�� 1��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/distance-between-bus-stops
*/
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start > destination)
            swap(start, destination);
        int sum = 0;
        int s1 = 0;
        int s2 = 0;
        for(int i = 0; i < distance.size(); ++i)
        {
            sum += distance[i];
        }
        
        for(int i = start; i < destination; ++i)
        {
            s1 += distance[i];
        }
        s2 = sum - s1;
        return (s1 < s2 ? s1 : s2);
    }
};
